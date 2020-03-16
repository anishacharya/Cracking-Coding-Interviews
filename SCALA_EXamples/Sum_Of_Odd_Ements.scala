// Simple Solution
def f(arr:List[Int]):Int = 
{
    var sum=0
    for(num <- arr)
        if(num %2!=0) sum+=num
    return sum
}   

// Using Filter
def f(arr:List[Int]):Int = 
{
    var sum=0
    arr.filter(i=> i%2!=0).foreach{sum+= _}
    return sum       
}

// Using FoldLeft and Filter
def f(arr:List[Int]):Int = arr.filter(i=> i%2!=0).foldLeft(0)(_ + _)

// Using Sum
def f(arr:List[Int]):Int = arr.filter(i=> i%2!=0).sum   
