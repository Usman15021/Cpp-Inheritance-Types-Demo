#include <iostream>
using namespace std;

// ===1. Single Inheritance ===

class Animal
{
public:
  void eat() // Void: Means this funtion does not return any value just display that the animal is eating//
  {
    cout << "Eating..." << endl;
  }
};

// derived class (Single Inheritance)
class Dog : public Animal
{
public:
  void bark()
  {
    cout << "Barking..." << endl;
  }
};

// ========2. Multi-Level Inheritance ======= //
/* derived from Dog (Which is already derived from animal)*/

class Puppy : public Dog
{
public:
  void weep()
  {
    cout << "Weeping..." << endl;
  }
};

// ========3. Hierarchical Inheritance ======= //
//  Another direct child from Animal (Sibling to Dog)
//  Demostrate multiple classes inheritance from the same parent//

class Cat : public Animal
{
public:
  void meow()
  {
    cout << "Meowing..." << endl;
  }
};

// ========4. Multiple Inheritance ======= //
// Second base class: Bird
/* Will be combine with Anima in Bat class
shows how a class can inherit from multiple parents*/

class Bird
{
public:
  /* Member function: fly
  unique to Bird Class
  display flying behaviour */

  void fly()
  {
    cout << "Flying..." << endl;
  }
};

/*
derived class: Bat (Multiple Inheritance )
-- Inherits from both Animal and Bird
--Gets behaviours from both parent class
*/

class Bat : public Animal, public Bird
{
public:
  /*Menber funtion: Glide
  Unique to Bat class
  Bats can Glide (A spacial flying begavior)
  */
  void glide()
  {
    cout << "Gliding..." << endl;
  }
};

// ========5. Hybrid Inheritance ======= //
/*
derived class: RobotDog (Hybrid Inheritance)
Combines Multi-level (Dof->Animal) and Multiple (Dog + Bird)
RobotDof -> Dog -> Animal (Multi-level)
+ Robot -> Bird (Multiple)
*/

class RobotDog : public Dog, public Bird
{
public:
  /*
  Memner funtion beep()
  -Unique to RobotDog
  - Shows mechanical behavior
  */
  void beep()
  {
    cout << "Beeping..." << endl;
  }
};

int main()
{
  //=====  1. SINGLE INHERITANCE===

  cout << " 1 SINGLE INHERITANCE ....." << endl;
  Dog d;
  d.eat();
  d.bark();

  //=====  2. MULTI-LEVEL INHERITANCE=== //
  cout << "2 MULTI-LEVEL Iheritance...." << endl;
  Puppy p;
  p.eat();
  p.weep();

  //=====  3. HIERARCHICAL INHERITANCE=== //

  cout << "3 Hierarchical Inheritance...." << endl;
  Cat c;
  c.eat();
  c.meow();

  // ========4. Multiple Inheritance ======= //

  cout << "4 Multiple Inheritance..." << endl;
  Bat b;
  b.eat();
  b.fly();
  b.glide();

  // ========5. Hybrid Inheritance ======= //
  cout << "5 Hybrid Inheritance... " << endl;
  RobotDog rd;
  rd.beep();
  rd.eat();
  rd.fly();

  return 0;
}