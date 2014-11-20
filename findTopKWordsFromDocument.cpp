#include 	<iostream>
#include 	<map>
#include	<cstring>
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
  	int size=mymap.size();
  	for(int i=1;i<=k && i<=size;i++)
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
    else FindTopK(K,"test.txt",1);    //-----set flag to 1 if want to see the frequency of all the words
    return 0;
}

/////Corner Cases to Test:
/////Empty file  						-  PASSED
/////Number of words< K   				-  PASSED

/*
 PS: ANISH and anish are interpreted as different words here i.e. upper and lower case strings
 in order to include that facility to treat them as same
we need to use something like toupper (string c) or tolower(string c)
as a pre-processing step
*/

