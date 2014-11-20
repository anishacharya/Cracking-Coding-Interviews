#include 	<iostream>
#include 	<map>
#include	<cstring>
#include	<algorithm>
#include 	<ctype.h>
#include	<fstream>
#include   <queue>

using namespace std;

///////-----------FUNCTION TO FIND TOP K words of the Document----------/////////

void FindTopK (int k,string filename,bool flag)
{
  std::map<string,int> mymap;
  string str;

  ifstream fin;
  fin.open("test.txt");
  while (fin >> str)
  	  {
	  	  mymap[str]++;
  	  }
  fin.close();

  //---------Print the frequencies - Optional (If the input flag is set)---------/////////
  if(flag)
  {
	  for (std::map<string,int>::iterator it=mymap.begin(); it!=mymap.end(); ++it)
  	  	  {
	  	  	  std::cout << it->first << " => " << it->second << '\n';
  	  	  }
  }

      //--------Initialize and push into a priority queue to extract top k efficiently--------/////
  std::priority_queue<std::pair<int, std::string> > pq;
  	for (std::map<string,int>::iterator it=mymap.begin(); it!=mymap.end(); ++it)
  	  {
  		pq.push(std::make_pair(it->second, it->first));      ///push into heap
  	  }
  	for(int i=1;i<=k;i++)
  	{
  		std::cout << pq.top().first << ", " << pq.top().second << std::endl;
  		pq.pop();
  	}
}


//// To TEST THE FUNCTION ////
int main()
{
	int K=10;
    string filename="test.txt";
    FILE *f = fopen ("test.txt", "r");
    if (f == NULL)
        cout<<"File doesn't exist ";
    else FindTopK(K,"test.txt",0);    //-----set flag to 1 if want to see the frequency of all the words
    return 0;
}

