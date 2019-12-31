func square(number: Int) -> Int {
    return number * number
}   

let myNumber = 3
print(square (number: myNumber))

// pass function as argument, comma-separated arguments
let funcVar = square    // Assign function to a variable
print(funcVar(2))

func myFunc(f: (Int) -> Int) {
    // Give me a function!
}
myFunc(f: funcVar)

// function takes function parameter
func myFunc(f: (Int) -> Int) {
    print(f(2))
}
func square(number: Int) -> Int {
    return number * number
}
myFunc(f: square)

// Closure expression defining a function; 
// a-holds square function, b holds function defined by closure expression
let a: (Int) -> Int
let b: (Int) -> Int
func square(number: Int) -> Int {
    return number * number
}
a = square
b = { (n: Int)-> Int in return n * n }
print(b(3))     // calling closure expression function

// Function defined by Closure expression 
// No need to define parameters or return type
let a: (Int) -> Int
a = { n in return n * n }
print(a(5))

// Function defined by Closure expression: no need for 'return'
let a: (Int) -> Int
a = { n in n * n }
print(a(9))

// access with the passed argument with $0
let a: (Int) -> Int
a = { $0 * $0}
print(a(9))

// Multiple arguments
let a: (Int, Int) -> Int
a = { $0 * $1 }
print(a(3, 0))

// Example with arrays
let myArray = [1,2,3]
let a: (Int) -> Int
a = { $0 * 2 }
print(myArray.map(a))   // => [2,4,6]

// No function definition
let myArray = [1,2,3]
print(myArray.map( {$0 * 2}))   // => [2,4,6]

//  valid functions
let a: (Int) -> Int a = { $0 * $0 }
let a: (Int) -> Int a = { x in x * x }
func a(x: Int) -> Int { return x * x }

