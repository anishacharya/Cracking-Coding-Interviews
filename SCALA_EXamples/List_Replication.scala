def f(num:Int,arr:List[Int]):List[Int] = 
{
    var l:List[Int] = Nil;
    var i = 0;
    while(i < arr.length) 
    {
        var j = 1;
        while(j <= num) 
        {
            l = l ::: List(arr(i));
            j = j + 1;
        }
        i = i + 1;
    }
return l;    
}

// Alternative:
def f(num:Int,arr:List[Int]):List[Int] = 
{
    var x:List[Int]=Nil
    for(i<-0 to arr.length-1)    
    {
        x=x:::List.fill(num)(arr(i))
            
    }
return x
}

//More Compact:
def f(num:Int,arr:List[Int]):List[Int] = arr.flatMap(List.fill(num)(_))           
