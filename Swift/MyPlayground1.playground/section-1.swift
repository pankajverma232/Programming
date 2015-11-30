/*
------------ 0-1 Knapsack problem -----------
Given weights and values of n items, put these items in a knapsack of capacity W
to get the maximum total value in the knapsack. In other words, given two integer
arrays val[0..n-1] and wt[0..n-1] which represent values and weights associated 
with n items respectively. Also given an integer W which represents knapsack
capacity, find out the maximum value subset of val[] such that sum of the weights
of this subset is smaller than or equal to W. You cannot break an item, either 
pick the complete item, or don’t pick it (0-1 property).
*/

func knapsack(wt:[Int],val:[Int],n:Int,W:Int)->Int{
    var i:Int
    var j:Int
    var K = [[Int]]() 
    // allocate memory
   for i=0;i<=n;++i {
        var subArray = [Int]()
       for j=0;j<=W;++j{
           subArray.append(0)
       }
       K.append(subArray)
   }
   
    for i=0;i<=n;++i {
        for j=0;j<=W;++j{
            if i==0 || j==0 {
              continue
            }
            if wt[i-1] > j  {
                K[i][j] = K[i-1][j]
            }
            else {
                K[i][j] = max(K[i-1][j-wt[i-1]] + val[i-1],K[i-1][j])
            }
        }
    }
    return K[n][W]
}
var wt:[Int] = [20,30,50]
var val:[Int] = [60,120,250]
 print("max profit : \(knapsack(wt,val:val,n:3,W:50)) \n")
 
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
