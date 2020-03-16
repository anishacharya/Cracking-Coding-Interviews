// Bad Imperative Like Mode
def f(arr:List[Int]):List[Int] = 
{
    var x:List[Int]=Nil
    var i= arr.length-1   
    while(i >= 0)
    {
        x=x:::List(arr(i))
        i-=1    
    }
    return x
}



// Using Nil Con /  Recursion Concept
def f(arr:List[Int]):List[Int] = arr match {
    case Nil => List()
    case (x :: arr) => f(arr) ::: List(x)
}



// One Liner Inbuilt Scala
def f(arr:List[Int]):List[Int] = arr.reverse
