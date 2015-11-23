var arr=[2,5,6,4,3,8,6]
var sent=["lol","loj","gfhd","fgdh","hello","deepak"]
func fun(num1 :Int, num2 : Int)->Bool{
if num1 < num2{ 
return true
}
else
{
return false
}
}

func funStr(word1 :String,word2:String)->Bool{
return word1 < word2
}

//sort( &arr,fun)
sort(&sent,funStr)
for i in sent{
println("\(i)")
}
