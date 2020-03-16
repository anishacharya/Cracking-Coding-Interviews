def fib(n: Int): Int=
	if(n==0 || n==1) n
	else {fib(n-1)+fib(n-2)}

for( x<- 0 to 10)
	println(fib(x))
