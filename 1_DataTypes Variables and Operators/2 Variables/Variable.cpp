

// = Variables
//   - A variable in C++ is a named storage location in memory that holds a value of a specific data type.
//   - Name given to the memory location where data is stored
//   - Variables allow you to store and manipulate data in a program.


// = Rules for Declaring Variables
// 1. Variable Names Must Be Unique: No two variables in the same scope can have the same name.
// 2. Valid Characters: Variable names can include:
//      Letters (A-Z, a-z)
//      Digits (0-9)
//      Underscore (_)
// 3. Cannot Start with a Digit:
//      Valid: age, _count, totalAmount
//      Invalid: 1var, 2ndValue
// 4. Case-Sensitive: Age, AGE, and age are different variables.
// 5. No Reserved Keywords: Cannot use C++ keywords like int, if, while, etc.
// 6. Must Be Declared Before Use:
//      int x = 10; // Correct
//      cout << y;  // Error: 'y' not declared
//      int y = 20;


// = Variable Declaration vs Definition
// - Declaration: Introduces the variable name and type.
    int age; // Declaration

// - Definition: Allocates memory and optionally assigns a value.
    // age = 25; // Definition (assignment)

// Combined Declaration & Definition:
    int score = 100; // Declares and defines