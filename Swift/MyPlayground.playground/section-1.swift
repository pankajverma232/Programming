// Playground - noun: a place where people can play

import UIKit



func countChar(str : String)->(vowel:Int,consonent:Int,other:Int){
    var vowel=0
    var consonent=0
    var other=0
    for i in str{
        switch String(i).lowercaseString {
        case "a","e","i","o","u" :
            vowel++
           
        case "b"..."d","f"..."h","j"..."n","p"..."t","v"..."z" : consonent++
default : other++
 

        }
    }
return(vowel,consonent,other)
}


let total=countChar("who are you")
print("vowels=\(total.vowel),consonents=\(total.consonent) and others=\(total.other)")


func charToFind(str:String,c:Character)->Bool{
    for i in str{
        if i==c {
        
    return true
        }
    }
        return false

}

struct node {
    var height :Int = 0 {
        willSet(r){
            print("old= \(height) new= \(r)")
        }
        didSet(b){
            print("old= \(b) new= \(height)")
        }
    }
}
var d = node(height: 50)
d.height=90
class lol {
    var per=node()
}

var arr=["pankaj","deepak","alok","navneet","rahul"]
sort(&arr,<)


class Vehicle{
    var p :Int// max num of passengers
    var n :Int// num of wheels
    init(){
      
        p=1
        n=0
        
    }
    func status(){
    print("p=\(p) and n=\(n)")
    }
}
class Bicycle :Vehicle{
    override init(){
super.init()
n=2
    }
}
class Tander :Bicycle{
    override init(){
    super.init()
        p=2
}
}

var vehicle=Vehicle()
var bicycle=Bicycle()
var tander=Tander()

class Car:Vehicle {
    var speed :Double = 0.0
   override init() {
        super.init()
        n=4
        p=5
    
    }
    }

class SpeedLimitCar:Car {
   override var speed :Double{
        get {
        return super.speed
        }
        set{
      super.speed=40//min(newVal,40)
        }
    }
    override func status() {
        print("wheel=\(n) , pass=\(p), speed =\(speed)")
    }
}


var speedLimitCar=SpeedLimitCar()
let limitedCar = SpeedLimitCar()
limitedCar.speed = 60.0
print("SpeedLimitedCar: \(limitedCar.status())")

class AutomaticCar:Car{
    var geer=0
    override var speed :Double {
    didSet{
    geer = Int(speed/10.0)+1
    }
    }
}
var autoCar=AutomaticCar()
autoCar.speed=90
print("geer=\(autoCar.geer)")


struct temp{
    var tempFar :Double=0.0
    init(fromCels cel:Double){
    tempFar = (cel*1.8)+32
    }
    
    init(fromKalven kal:Double){
    tempFar = (kal-273)*1.8 + 32
    }
   
}


var temperature=temp(fromCels: 36)
temperature=temp(fromKalven: 300)


class SurveyQ{
    var text :String
    var response :String?
    init(text :String){
    self.text=text
    }
        func ask(){
        print(text)
        
    }
}

var survey = SurveyQ(text : "What are you doing ?")
survey.ask()
survey.response="Nothing !"
print("\(survey.response)")

class Size{
    var wid :Int = 0
     var height :Int = 0
}
var size=Size()
print("width= \(size.wid)")

class Person{
    var name :String
    init(name :String){
    self.name=name
    print("initionalization begin")
    }
    deinit{
    print("deinitionalization done")
    }

}
var person:Person?
var p2 : Person?
person = Person(name : "pankaj")
p2=person
person=nil
p2=nil


class Media{
    var title :String
    //var type :String
    init(title :String){
    self.title=title
        
            }
}

class Movie :Media{
    var type :String
    init(type :String,title :String){
   self.type=type
    super.init(title: title)
    
    }
}
class Song :Media{
        var type :String
        init(title :String,type :String){
    self.type=type
    super.init(title: title)
        }
}

let library = [
Movie(type: "Mo", title: "LOR"),
Song(title: "hddcs", type: "song"),
    Movie(type: "Mo", title: "Wanted"),
    Song(title: "ghfjgh", type: "song"),
    Song(title: "tyty", type: "song"),
]

var movieCount=0,songCount=0

for i in library {
    if i is Movie{
    ++movieCount
        }
    else if i is Song{
    ++songCount
    }
}
    print("no of songas are \(songCount) and movies are \(movieCount)")
    
    
protocol prot{
        func fun()
        func fun2()->String
        }
class myClass : prot{

             func fun() {
    print("this function returns nothing")
            }
            func fun2() -> String {
        return "this function returns a string"
            }
}
var mc = myClass()
mc.fun()
print(mc.fun2())

var u:Int = 9
print(u+9)

func swapMe<M>(inout a:M , inout b:M){
let d=a
    a=b
    b=d
}
var a=8
var b=5
print("a=\(a) and b= \(b)")

swapMe(&a, b: &b)
var name1="pankaj",name2="neeraj"
print("name1= \(name1) and name2= \(name2)")
swap(&name1, &name2)
print("name1= \(name1) and name2= \(name2)")
print("a=\(a) and b= \(b)")

func findStringIndex(array :[String], valToFind: String)->Int?{
    for(index, value) in enumerate(array){
    if value == valToFind {
    return index
    }
    }
    return nil
}
let strings = ["lol","kam","kapil","Rahim"]
if let foundIndex = findStringIndex(strings, "Rahim"){
print("the word \(strings[foundIndex]) is found at index : \(foundIndex)")
}



struct Vector2D {
    var x = 0.0, y = 0.0
}
 func + (left: Vector2D, right: Vector2D) -> Vector2D {
return Vector2D(x: left.x + right.x, y: left.y + right.y)
}

let vector = Vector2D(x: 3.0, y: 1.0)
let anotherVector = Vector2D(x: 2.0, y: 4.0)
let combinedVector = vector + anotherVector
var year = 2________0________1________5______________
print("\(year)")

var dict = ["lol" :4]
var dict1 = [4:"lol"]
print("lol"+"grtgrtg"+"\(dict)")
print("\(dict1)");

var str :String = "kk"
print("hgfjgh"+str)

var close1 = {
    () -> Void in
print("hey you")
}

close1()


var print1 =
{
        (str:String) -> Void  in
        
        print(str)
        
}

print1("Ravi")


var max = {
            (num1:Int,num2:Int) ->  Int in
            
            return num1 > num2 ? num1 : num2
}

print("Max of 10,2 : \(max(10,2))")



func mySort(inout numbers:[Int])
            {
    //Write your login  to sort numbers using comparator method
    var tmp:Int
    var n = numbers.count
    
    for(var i=0;i<n;i++)
{
    for(var j=0;j<n-i-1;j++)
            {
        if(numbers[j] > numbers[j+1])
    {
        tmp=numbers[j];
        numbers[j]=numbers[j+1];
        numbers[j+1]=tmp;
        }
    }
    }
}

var numbers = [10,1,20,123,50]
mySort(&numbers)
for i in 0..<5{
        print("\(numbers[i]) ")
        }
        
        
class someClass{
    init(){}
    class func myFunc() -> Int{
    print("lol")
    return 5
    }
}
var t = someClass.myFunc()

var c :Int?
c.self
    var e = someClass()
e.self


var f :Int!
f=6

for var i=9 ;i<12 ; i++ {
print("TheWall")
}
