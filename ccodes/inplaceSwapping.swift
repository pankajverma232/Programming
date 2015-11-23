var a=5,b=8
func swap(inout a:Int,inout b:Int){
let temp=a;
a=b
b=temp
}
int main(){
println("a=\(a) b=\(b)")
swap(&a,&b)
println("a=\(a) b=\(b)")
}
