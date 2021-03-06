//Annette Chun
//amc4sq
//01/20/2015
//LifeCycle.h

#ifndef LIFECYCLE_H
#define LIFECYCLE_H
#include <iostream>
#include <string>
using namespace std;

class MyObject {
 public:
  static int numObjs;
  MyObject(const char *n = "--default--"); // default constructor
  MyObject(const MyObject& rhs); // copy constructor
  ~MyObject(); // destructor
  string getName() const {
    return name;
  }
  void setName(const string newName) {
    name = newName;
  }
  friend ostream& operator<<(ostream& output, const MyObject& obj);
 private:
  string name;
  int id;
};

#endif
