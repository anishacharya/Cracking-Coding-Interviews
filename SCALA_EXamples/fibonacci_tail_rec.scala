def fib_tail_rec(x:Int, acc1:Int, acc2:Int): Int =
	
	if(x==0) acc1
	else if(x==1) acc2
	
	else fib_tail_rec(x-1,acc2,acc1+acc2)


for(x<-0 to 10)
println(fib_tail_rec(x,0,1))
