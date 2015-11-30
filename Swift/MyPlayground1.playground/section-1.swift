// Playground - noun: a place where people can play

import UIKit

let dict = [
    "even" : [2,4,6,8,10],
    "odd" : [1,3,5,7],
    "other" :[0]
]
for (key , values) in dict {
    for i in values {
        if i==0 {
        print("element \(i) is Zero")
            break
        }
        if i % 2 == 0 {
        print("element \(i) is even")
        }
        else {
        print("element \(i) is odd")
        }
    }
}



func calcState(score : [Int]) -> (min:Int,max:Int,sum:Int){
var min = score[0]
    var max = score[0]
    var sum = 0
    for s in score {
        if s > max {
        max = s
        }
        else if s < min {
        min = s
        }
sum += s
    }
return (min,max,sum)
}

let stat=calcState([5,3,100,3,9])
stat.sum
stat.2
stat.min
stat.max
stat.1
stat.0





/*___________________________________________________________________*/

//func myReduce<U ,T>(initial: U, combine: (U, T) -> U) -> U
extension Array {
    func myReduce<T, U>(seed:U, combiner:(U, T) -> U) -> U {
        var current = seed
        for item in self {
            current = combiner(current, item as! T)
        }
        return current
    }
}

var evenSum = Array(1...10)
    .filter { (number) in number % 2 == 0 }
    .myReduce(0) { (total, number) in total + number }

print(evenSum)

