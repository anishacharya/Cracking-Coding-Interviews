def f(arr:List[Int]):Int =  
{
         var count: Int = 0;
         arr.foreach { _ => count += 1 }
         count
}
