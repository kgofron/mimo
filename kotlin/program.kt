var greetings = "Bonjour"
var a = 40
var b = 2

println("Hello world")
println(greetings)

println(a / b)

var s1 = 35 + 2 // Step 1
var s2 = s1 + 5 // Step 2
println(s2) //Step 3

var y: String = "Allen" // Explicit type decleration not needed, because Kotlin does inference
var result = 13 > 14    // Boolian
println(reslt)
val stala = 3.14        // Constant, immutable

val input = " coolcat9 "
val username = input.trim() // Trim whilte space "coolcat9"

val livesLeft = 9
val output = " ${livesLeft} livers left for catman." // pieces of code into strings
val output = "The price is \$400!"      // Escape char is `\`

// Loops
repeat(4) {
    println("Time for loops!")
}

var index = 0
while(index < 5) {
    index += 1
    println(index)
}

val names = arrayOf("Tom","Sam","Alex","Amy")
for (name in names) {
    println(name)
}

for (number in 2..5) {  // range 2..5
    println(number)
}

// Functions
fun helloWorld() {
    println("Hello world!")
}
helloWorld()

fun printMessge(text: String) { // parameter to tell what type of argument we can pass
    println(text)
}
printMessage("Building funcitons is fun!")

fun printAge(name: String, age: Int) { // parameter to tell what type of argument we can pass
    println("${name} is ${age} years old")
}
printAge("Max", 7)

fun giveMeFive(): Int {     // Functions can return values
    return 5
}
val output = giveMeFive()
val sum = 6 + giveMeFive()

fun displayOneTo(number: Int) {
    for (index in 1..number) {
        println("${index}.")
    }
}

// Array list
val friends = arrayListOf("Sam", "Amy", "Rex")
val firstFriend = frinds.get(0)
val thirdFriend = firends[2]
friends[2] = "Ron"
friends.add("Harry")    // Unlinke arrays, array lists let you add elements

val places = arrayListOf("2nd", "3rd")
places.add(0,"1st") // => [1st,2nd,3rd]

val colord = arrayListOf("red","cat","blue","green")
colors.removeAt(1) //remove 2nd element
colors.clear()      // remove all elements

val numbers = arrayListOf<Int>()    // Specify type
numbers.add(1)      // => [1]

// Classes and Properties
class Person {
    var name: String = ""
    var age: Int = 0

    fun greet() {
        println("Hi, I am a person!")
    }
}
val james = Person()    // object, instance of a class
james.name = "James"
james.age = 22
println("Name: ${james.name}; Age: ${james.age}")   // access properties 

class Person(var age: Int = 0) {    // Declare properties inside paranthesis
    // No code needed
}
val james = Person("James")

class Player(var name: String = "") {}  // Primary constructor
val player1 = Player("Sam")
val player2 = Player("Amy")

class Person {
    fun sayHello(var name: String = "", var isEating: Boolean = false) {        // Member funciton
        println("Hello!")
    }
    fun startEating() {
        isEating = true
    }
    fun setName(f: String, l: String) {
        this.name = f + " " + l
    }
}
val bob = Person()
bob.sayHello()
bob.startEating()   // println("Is eating? ${bob.isEating}")
val ricky = Person()
ricky.setName("Ricky", "Bobby")
println("Name: ${ricky.name}")

class Person(var fName: String - "", var lName: String = "") {
    var fullName: String = ""
    init {                                  // Initialize block
        funnName = fName = " " + lName      
    }
}
var indy = Person("Indiana", "Jones")
// var indy = Person(fName="Indiana", lName="Jones") 
println(indy.funnName)

// Null safety
var number: Int? = 0   // nullable variable
class Car(var make: String = "") {}
var ferrari: Car?   // set to null, until we intantiate its class
ferrari = Car()

class Car(var make: String = "") {
    fun honk() {
        println("Beep beep!")
    }
}
var toyota: Car? = null
toyota?.honk()  // Honk() member function does not get called because toyota is currently set to null
println("value: ${mini?.make}") // Value: null

// Initial property
class Person(var name: String) {
}
val rick = Person("Ricky Bobby")    // We can only create object if we pass an argument to Person() to set name
println("Name; ${rick.name}") 

class Account(var name: String?, var email: String) {   // Nullable properties
}   // User can create account without setting name
val acctOne = Account(null,"sam@mail.com")
println("Name: ${acctOne.name}")

// Save calls for property and member function of nullable catBlog variable
class Blog(var title: String, var author: String) {
    fun printBylin() {
        println("by ${author}")
    }
}
var catBlog: Blog? = Blog("Best Cats", "Joe")
println(catBlog?.title)
catBlog?.printByline()
