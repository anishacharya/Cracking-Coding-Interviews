/*
The Utopian tree goes through 2 cycles of growth every year. 
The first growth cycle occurs during the spring, when it doubles in height.
The second growth cycle occurs during the summer, when its height increases by 1 meter.
Now, a new Utopian tree sapling is planted at the onset of the spring.
Its height is 1 meter. Can you find the height of the tree after N growth cycles?
*/
#include <iostream>
using namespace std;

int height(int n) 
{   
    int h=1;
    if(n==0)
        return h;
    else
        {
        for(int i=1;i<=n;i++)
            {
            h=h*2;
            i++;
            if(i<=n)
                h=h+1;
           // i++;
            
        }
        return h;
    }
}
int main() {
    int T;
    cin >> T;
    for (int i=1;i<=T;i++) 
    {
        int n;
        cin >> n;
        cout << height(n) << endl;
    }
    return 0;
}

