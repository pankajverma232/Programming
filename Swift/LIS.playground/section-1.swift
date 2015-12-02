import Foundation

/*
 ------------ LIS problem ----------------
 
 The longest Increasing Subsequence (LIS) problem is to find the length of the 
 longest subsequence of a given sequence such that all elements of the subsequence
 are sorted in increasing order.
 For example, length of LIS for { 10, 22, 9, 33, 21, 50, 41, 60, 80 } is 6 
 and LIS is {10, 22, 33, 50, 60, 80}.
 */

 func LIS(arr:[Int],n:Int)->Int{
     var max = 0;
     var K = [Int]()
     for var i=0;i<n;++i {
         K.append(1);
     }
     for var i=1;i<n;++i{
         for var j=0;j<i;++j{
             if arr[i]>arr[j] && K[j]+1 > K[i]{
                 K[i] = K[j]+1
             }
         }
     }
     
     for var i=0;i<n;i++ {
         if max < K[i]{
             max = K[i]
         }
     }
     return max
 }
 var arr:[Int] = [10, 22, 9, 33, 21, 50, 41, 60]
 
  print("LIS = \(LIS(arr,n:8))")