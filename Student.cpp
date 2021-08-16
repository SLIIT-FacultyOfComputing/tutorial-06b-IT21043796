#include "Student.h"
#include <cstring>
#include <iostream>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int stId, char pname[20]) 
{
  strcpy (name, pname);
  studentId = stId;
}

// Display StudentId and Name
void Student::display() 
{
  cout << "Student ID   : " << studentId << endl;
  cout << "Student Name : " << name << endl;
}
