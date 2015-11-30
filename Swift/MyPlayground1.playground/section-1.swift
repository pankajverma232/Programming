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
