 When overloading ostream, ensure you have proper access to the private vars

When to write a copy constructor?
    When there's pointers

**Week 05**

**Protected**
  - Private members are only accessible within the class defining them.
  - Protected members are accessible in the class that defines them and in classes that inherit from that class.
  -  Both are also accessible by friends of their class, and in the case of protected members, by friends of their derived classes.

**Encapsulation**
  - The packaging of data and methods together in the same construct which allows us to hide some of the inner goings on from the world.

**Inheritance**
  - Defining a set of classes in a hierarchical manner so that as we move down the hierarchy the classes below can re-use the data and methods from the classes above. And by adding or changing things in a small way we can quickly change the behavior of a lower class without lots of effort or code.

**Polymorphism**
  - Changing the behavior of a class by overloading or overriding methods from a class higher in the hierarchy to change the behavior of that higher class. Basically this means we can alter the behavior or adapt the behavior of a data type based on the context in which its used.

Other Key Words
class
data member
public
private
friend
overload
constructor
destructor
deep copy
shallow copy
