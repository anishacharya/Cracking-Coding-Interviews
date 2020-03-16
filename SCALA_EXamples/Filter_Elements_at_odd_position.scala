 def f(arr:List[Int]):List[Int] =
     {
     var x:List[Int]=Nil
     var i=1
     while(i<arr.length)
     {
         x=x:::List(arr(i))
         i+=2
     }
     return x    
 }



//Optimal Solution

 def f(arr:List[Int]):List[Int] =
     {
         arr.zipWithIndex.filter(_._2%2!=0).map(_._1)    
 }
