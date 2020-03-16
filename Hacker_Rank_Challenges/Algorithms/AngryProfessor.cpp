/*
he professor is conducting a course on Discrete Mathematics to a class of N students. 
He is angry at the lack of their discipline, and he decides to cancel the class 
if there are fewer than K students present after the class starts.
Given the arrival time of each student, your task is to find out if the class gets cancelled or not.

Input Format
The first line of the input contains T, the number of test cases. Each test case contains two lines. 
The first line of each test case contains two space-separated integers, N and K. 
The next line contains N space-separated integers, a1,a2,…,aN, representing the arrival time of each student.

If the arrival time of a given student is a non-positive integer (ai≤0), 
then the student enters before the class starts. If the arrival time of 
a given student is a positive integer (ai>0), the student enters after the class has started.

Output Format
For each testcase, print "YES" (without quotes) if the class gets cancelled and "NO" (without quotes) otherwise.
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T;
    cin>>T;
    //cout<<"test cases:"<<T<<endl;
    int N,K,t;
    
    
    while(T!=0)
        {
        int count=0;
        cin>>N;
        //cout<<"No_of_student"<<endl;
        cin>>K;
        for(int i=0;i<N;i++)
            {
            cin>>t;
            if(t<=0)
                count++;
        }
        if(count>=K)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
        T--;
    }
    return 0;
}

