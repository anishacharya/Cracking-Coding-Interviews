def product(f: Int=> Int)(x: Int, y: Int): Int=
	if(x>y) 1 else f(x)*product(f)(x+1,y)



def factorial(x: Int): Int=
	product(x=>x)(1,x)


println(product(x=>x)(1,3))
println(product(x=>x*x)(1,3))
println(product(x=>x*x*x)(1,3))

println("Factorial Tests are ")
println(factorial(5))	
