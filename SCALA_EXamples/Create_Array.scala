def f(num:Int) : List[Int] = {
    var x:List[Int]=Nil
    for(i<-0 to num-1)
        x=x:::List(i)
    return x        
}
