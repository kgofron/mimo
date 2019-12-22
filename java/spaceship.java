class Spaceship {
    int fuel = 1000;
    int mileage = 0;
    void move(int lightyears) {
	fuel -= 2 * lighthears;
	mileage += lightyears;
	System.out.print("Swoosh!");
    }
}

Spaceship myShip = new Spaceship();
myShip.move(5);

	
class Pizza extends Food {
  String kind;
  Pizza(String kind) {
    super();
    this.kind = kind;
  }
}

class SpaceAdvanture {
  public static void main
  (String[] args) {
    String output = "To infinity";
    output += " and beyong!";
    System.out.print(output);
  }
}

class MyApp {
  public static void main
  (String[] args) {
    String greeting = " Hello ";
    System.out.print(greeting + " world");
    System.out.print(args.length);

    int myNumber = triple(2);
    System.out.print(myNumber);
  }
  static int triple(int number) { // note static
    return number * 3;
  }
}

class MyApp { // not using static for triple - need instance of the MyApp class
  public static void main
  (String[] args) {
    MyApp a;
    a = new MyApp();
    int myNumber = a.triple(2);
    System.out.print(myNumber);
  }
  int triple(int number) {
    return number * 3;
  }
} 

// It's smart to make it static
class MyApp {
  public static void public static void main(String[] args) {
    (String[] args) {
      double mpg = 26.9;
      double kpl = Car.convert(mpg);
      System.out.print(kpl);
    }
  }
}

Class Car { // Convert MPG to KM per liter
  static double convert(double m) {
    return m * 0.425143707;
  }
}

class Dog {
  String name;
  void bark() {
    System.out.print("Woof!");
  }
  Dog(String name) {
    this.name = name;
  }
}

class Playground {
  public static void main
  (String[] args) {
    Dog myDog = new Dog("Baxter");
    myDog.bark();
  }
}

// Private
class Playground {
  public static void main(String[] args) {
    Dog myDog = new Dog("Baxter");
    myDog.eat();
  }
}
class Dog {
  private int hunger = 10;
  void eat() {
    if (hunger > 0) {
      hunger--;
    }
  }
}

class Message {
  private String message;
  public String readMessage
  (String reader) {
    if (reader.equals("Jar")) {
      System.out.print("Access granted");
      return message;
    } else {
      System.out.print("Access denied");
    }
  }
}

// program needs a class with main() method. Everything in a class
class MyGame {
  public static void main
  (String[] args) {
    Hero myHero = new Hero("Thrall");
    myHero.levelUp();
  }
}
class Hero {
  public String name;
  private int level;
  public Hero() {
    this.name = name;
    this.level = 1;
  }
  public void levelUp() {
    if (level < 100) {
      level++;
    }
  }
}

class Password {
  private String currentPW;
  currentPW = "Swordfish";
  public void changePassword
  (String pw0, String pw1) {
    if (pw0.equals(currentPW)) {
      currentPW = pw1;
    }
  }
}
