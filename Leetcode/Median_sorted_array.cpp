class Solution {
     public:
    int ans(vector<int>& nums1,vector<int>& nums2,int k){
        int n = nums1.size();
        int m = nums2.size();
        if(n > m){
            return ans(nums2,nums1,k);
        }
        if(n == 0) return nums2[k-1];
        if(k == 1) return min(nums1[0],nums2[0]);

        int pa = min(k/2,n),pb = k - pa;
        if(nums1[pa - 1] < nums2[pb - 1] ){
             vector<int> a(nums1.begin() + pa, nums1.end());
             return ans(a,nums2,k - pa);
        }
        else if(nums1[pa - 1] > nums2[pb - 1]){
            vector<int> b(nums2.begin() + pb,nums2.end());
            return ans(nums1,b,k - pb);
        }
        else return nums1[pa-1];
}

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       int n = nums1.size();
        int m = nums2.size();
        int k = (n + m)/2;
        if((m + n)%2){

            return ans(nums1,nums2,k + 1);
        }
        else {
            return (ans(nums1,nums2,k) + ans(nums1,nums2,k+1))/2.0;
        }
}
};
