import Foundation

func LCS(str1:String,str2:String)->Int{
    let  len1 = str1.characters.count
    let len2 = str2.characters.count
    var K = [[Int]]()
    for var i=0;i<=len1;++i{
    var inner = [Int]()
        for var j=0;j<=len2;++j{
        inner.append(0)
        }
        K.append(inner)
    }
   
    for var i=1;i<=len1;++i{
        for var j=1;j<=len2;++j{
            if str1[str1.startIndex.advancedBy(i-1)] == str2[str2.startIndex.advancedBy(j-1)]{
            K[i][j] = 1+K[i-1][j-1]
            }
            else {
                K[i][j] = max(K[i-1][j],K[i][j-1])
            }
        }
    }
    
    return K[len1][len2]
}
var a:String = "pankajverma"
var b:String = "neerajverma"
//LCS(a,str2:b)
print("Longest Common subsequence :\(LCS(a,str2:b)) ")