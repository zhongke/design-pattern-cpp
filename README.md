# design-pattern-cpp
Design pattern description by C++

Here is another version implementation based on Book "Head First Design pattern" which was decribed by C++.
Any comments are welcome.

## Design Principle
 - Identify the aspects of your application that vary and separate them from what stays the same.
 - Program to an interface, not an implementation.
 - Favor composition over inheritance.
 - Strive for loosely coupled designs between objects that interact.

### Open Close Principle
  - Classes should be open for extension, but closed for modification.
### Dependency Inversion Principle
  - Depend upon abstractions. Do not depend upon concrete classes.
### Least Knowledge Principle
  - Talk only to your immediate friends.
### Hollywood Principle
  - Don't call us, we'll call you.
### Single Responsibility Principle
  - A class should have only one reason to change.



## Design Pattern

### Strategy Pattern
  - Defines a family of algorithms, encapsulates each one, and makes them interchangeable.
  - Strategy lets the algorithm vary independently from clients that use it.

### Observer Pattern
  - Defines a one-to-many dependency between objects so that when one object changes state,
    all of its dependents are notified and updated automatically.

### Decorator Pattern
  - Attaches additional responsibilities to an object dynamically.
  - Decorators provide a flexible alternative to subclassing for extending functionality.

### Factory Method Pattern
  - Defines an interface for creating an object, but lets subclasses decide which class to instantiate.
  - Factory Method lets a class defer instantiation to subclasses.

### Abstract Factory Pattern
  - Provides an interface for creating families of related or dependent objects without specifying their concrete classes.

### Singleton Pattern
  - Ensures a class has only one instance, and provides a global point of access to it.

### Command Pattern
  - Encapsulates a request as an object, thereby letting you parameterize other objects with different quests,
    queue or log requests, and support undoable operations.

### Adapter Pattern
  - Converts the interface of a class into another interface the clients expect.
  - Adapter lets classes work together that couldn't otherwise because of incompatible interfaces.

### Facade Pattern
  - Provides a unified interface to a set of interfaces in a subsystem.
  - Defines a higher-level interface that makes the subsystem easier to use.

### Template Method Pattern
  - Defines the skeleton of a algorithm in a method, deferring some steps to subclasses.
  - Template method lets subclasses redefine certain steps of an algorithm without changing the algorithm's structure.
  - Defines a higher-level interface that makes the subsystem easier to use.

### Iterator Pattern
  - Provides a way to access the elements of an aggregate object sequentially without exposing its underlying represetation.
