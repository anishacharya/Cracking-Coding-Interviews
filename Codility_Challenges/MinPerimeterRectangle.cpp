/*
An integer N is given, representing the area of some rectangle.
The area of a rectangle whose sides are of length A and B is A * B, and the perimeter is 2 * (A + B).
The goal is to find the minimal perimeter of any rectangle whose area equals N. The sides of this 
rectangle should be only integers.
*/

int solution(int N) {        
    int i=1;
    int length=0;
    while(i*i<=N)
    {
        if(N%i==0)
            length=i;
        i++;
    }
       
    return 2*(length+N/length);
}


// score : 100 %
