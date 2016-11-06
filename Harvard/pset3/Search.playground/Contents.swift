//: Playground - noun: a place where people can play

import UIKit

func linearSearch(key: Int, array: [Int]) -> Int? {
    for item in array {
        if item == key {
            return array.index(of: item)
        }
    }
    return nil
}

let array = [5, 31, 89, 4, 32, 6, 9]
let result = linearSearch(key: 6, array: array)
print("result : \(result)")


func binarySearch(key: Int, array: [Int], min: Int, max: Int) {
    
    if min > max {
        print("Not found")
    } else {
        let middle = (max + min ) / 2
        print("\(middle)")
        if array[middle] > key {
            binarySearch(key: key, array: array, min: min, max: (middle - 1))
        } else if array[middle] < key {
            binarySearch(key: key, array: array, min: (middle + 1), max: max)
        } else {
            print("Key: \(key) was found at index: \(array.index(of: key)!)")
        }
    }
}

let sortedArray = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
binarySearch(key: 9, array: sortedArray, min: 0, max: sortedArray.count)


