class Solution {

public:

    void swap(int* l,int* r)

    {

        int temp=*l;

        *l=*r;

        *r=temp;

    }

    void sortColors(vector<int>& nums) 

    {

        int l=0; int r=nums.size()-1;

        int i=0;

        while(i<=r)

        {

            cout<<nums[i]<<endl;

            cout<<nums[r]<<endl;

            

            if(nums[i]==0)

            {

                cout<<"swap lo and mid"<<endl;

                swap(&nums[i],&nums[l]);

                l++; i++;

            }

            

            else 

            {

                if(nums[i]==1)

                    i++; 

                else 

                {

                    swap(&nums[i],&nums[r]);

                    r--; 

                } 

            }

        }

    }

};
