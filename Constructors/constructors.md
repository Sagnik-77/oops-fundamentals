Constructors:
A constructor is a special type of member function of a class which initializes objects of a class. In C++, Constructor is automatically called when object(instance of class) create. It is special member function of the class because it does not have any return type.

The three main rules of creating/accessing any constructor is:
1. Constructor cannot have a return type
2. Constructor will have the same name as the class
3. Constructor must be Public.

There are different types of constructors:
1. Default constructors: Default constructor is the constructor which doesn’t take any argument. It has no parameters.

2. Parameterized constructors: It is possible to pass arguments to constructors. Typically, these arguments help initialize an object when it is created. To create a parameterized constructor, simply add parameters to it the way you would to any other function.

3. Copy Constructor: A copy constructor is a member function which initializes an object using another object of the same class.

Source: https://www.geeksforgeeks.org/constructors-c/