#include <iostream>
using namespace std;

int main() {

  // **************Simple Task**************
  // 1. Write a program using if-else, that takes a number as input from "
  //           "user and checks whether the number is even or odd.
  cout << "Answer No 1 \n";
  cout << "Enter Your Number ";

  int num;
  cin >> num;

  if (num % 2 == 0) {

    cout << "Even" << num << "\n";
  } else {

    cout << "odd" << num << "\n";
  }
  // 2. Write a program using else if clause to check the age entered by "
  //           "user such that if user input age is less than 100 message you
  //           are " "young would be displayed if user enter red age equal to
  //           100 message " "you are old will be displayed and if range is
  //           greater than 100 " "message you are too old will be displayed.
  cout << "Answer No 2 \n";
  cout << "Enter Your Age  ";

  int ager;
  cin >> ager;

  if (ager < 100) {

    cout << "you are young\n";
  } else if (ager == 100) {

    cout << "you are old\n";
  } else if (ager > 100) {

    cout << "you are too old\n";
  }
  // 3Write a program using ternary operator to print the value of x "
  //           "depending on the condition y<10.
  cout << "Answer No 3 \n";
  cout << "Enter Your Number ";

  int y;
  cin >> y;
  int x = y;
  cout << (y < 10 ? x : 0) << endl;

  // 4. Write a C++ program to relate two integers entered by user using = or >
  // or < sign using nested if- else.
  cout << "Answer No 4 \n";
  int num1, num2;
  cout << "Enter 1st Number\n";
  cin >> num1;
  cout << "Enter 2nd Number\n";
  cin >> num2;

  if (num1 == num2) {

    cout << num1 << "is equal to " << num2 << "\n";

  } else {

    if (num1 < num2) {
      cout << num1 << "is less than" << num2 << "\n";
    } else if (num1 > num2) {

      cout << num1 << "is greater than" << num2 << "\n";
    }
  }

  // **************Challenging Task**************

  // 1. In a company, worker increment is determined on the basis of the time
  // required for a worker to complete a particular job. If the time taken by
  // the worker is between 2-3 hours, then the worker is said to be highly
  // efficient. If the time required by the worker is between 3-4 hours, then
  // the worker is ordered to improve speed and his increment is 5% of his
  // salary. If the time taken by the worker is more than 4 hours he is asked to
  // leave the company. If the time taken by the worker and his current salary
  // is input through the keyboard find the efficiency of the worker and his
  // next month‟s salary.
  cout << "Answer No 5 \n";
  float time, salary;
  cout << "Enter the salary ";
  cin >> salary;
  cout << "Enter the Working Hour";
  cin >> time;

  if (time >= 2 && time < 3) {
    cout << "highly efficient. \n salary is =" << salary << endl;

  } else if (time >= 3 && time < 4) {
    // float per = 5 / 100;
    float increment = 0.05 * salary;
    float inc_salary = salary + increment;
    cout << "improve speed." << endl;
    cout << "Your Increment is" << increment << endl;
    cout << "next month salary with increments" << inc_salary << endl;
  } else if (time >= 4) {
    cout << "leave the company." << endl;
  } else {
    cout << "plz type hours in numeric numbers" << endl;
  }

  // 2. The Department of Defense would like a program that identifies the males
  // who are single between the age of 18 and 26. Write a program which takes
  // input gender („X‟ for male and „Y‟ for female), marital status („M‟ for
  // married and „S‟ for single) and age of a person and check if the person
  // meets all criteria. Implement it using a. Multiple if‟s b. Nested if
  cout << "Answer No 6 \n";

  cout << "Enter Your Age \n";

  int age;
  cin >> age;
  cout << "Enter Your Gender\nX for male and Y for female \n";
  char gender, maritalstatus;
  cin >> gender;
  cout << "Enter Your marital \nM for married and S for single \n";
  cin >> maritalstatus;
  if (gender == 'x' || gender == 'X') {

    if (maritalstatus == 'M' || maritalstatus == 'm') {
      cout << "you are Married \n";
    } else if (maritalstatus == 'S' || maritalstatus == 's') {

      cout << "you are Single \n";
    } else {
      cout << "invalid status \n ";
    }

    if (age >= 18 && age <= 26) {

      cout << "you meet the age criteria \n";
    } else {
      cout << "you are not  meet the age criteria \n";
    }

  } else if (gender == 'y' || gender == 'Y') {
    cout << "Female  \n";

  } else {
    cout << "invalid \n ";
  }

  // **************Home Task**************
  // 1. Write a program that declares and initializes two numbers with "
  //         "your_roll_no and your_friend_roll_no and displays the greater of "
  //         "the two. Use ternary operator.

  cout << "Answer No 7 \n";

  cout << "Enter your_roll_no \n ";
  int your_roll_no;
  cin >> your_roll_no;
  cout << "Enter your_friend_roll_no \n ";
  int your_friend_roll_no;
  cin >> your_friend_roll_no;

  string greaterrollnumber = (your_roll_no < your_friend_roll_no)
                                 ? to_string(your_friend_roll_no)
                                 : to_string(your_roll_no);

  cout << "greater rollnumber" << greaterrollnumber << endl;

  // 2.Write a program using nested if else statement. The condition 1 will be
  // true if the user has typed „a‟as username. Then the control moves to the
  // nested if statement to check for password. If it is true, print “login
  // successful” else it will print “Password is incorrect, Try again”. If
  // condition 1 is false execute the else statement “Username is incorrect, Try
  // again”.

  cout << "Answer No 8 \n";
  cout << "Enter Your UserName \n";
  char username;
  cin >> username;

  if (username == 'a') {
    cout << "Enter Your Password \n";
    int password;
    cin >> password;
    if (password == 123) {

      cout << "login successfull \n";

    } else {
      cout << "Password is incorrect, Try again \n";
    }
  } else {
    cout << "username is incorrect, Try again \n";
  }

  // 3. Write a program which to find the grace marks for a student using
  // switch. The user should enter the class obtained by the student and the
  // number of subjects he has failed in.
  // If the student gets first class and the number of subjects, he failed in
  // is greater than 3, then he does not
  // get any grace. If the number of subjects he failed in is less than or equal
  // to 3 then the grace is of 5 marks over subject.
  // If the student gets
  // second class and the number of subjects, he failed in is greater than 2,
  // then he does not get any grace. If the number of subjects he failed in is
  // less than or equal to 2 then the grace is of 4 marks per subject.
  // If the student gets third class and the number of subjects, he failed in
  // is
  // greater than 1, then he does not get any grace. If the number of subjects
  // he failed in is equal to 1, then the grace is of 5 marks per subject
  cout << "Answer No 9 \n";
  cout << "Enter Your class \n";
  int yourclass;
  cin >> yourclass;
  int failedsubjects;
  switch (yourclass) {
  case 1:
    cout << "Enter number of  Your failed subject  \n";

    cin >> failedsubjects;
    if (failedsubjects <= 3) {
      cout << "grace 5marks over subjects.";

    } else if (failedsubjects > 3) {
      cout << "you dont get any grace marks ";
    }
    break;
  case 2:
    cout << "Enter number of  Your failed subject  \n";
    cin >> failedsubjects;
    if (failedsubjects <= 2) {
      cout << "grace 4marks per subject.";

    } else if (failedsubjects > 2) {
      cout << "you dont get any grace marks ";
    }
    break;
  case 3:
    cout << "Enter number of  Your failed subject  \n";

    cin >> failedsubjects;
    if (failedsubjects <= 1) {
      cout << "grace 5marks per subject.";

    } else if (failedsubjects > 1) {
      cout << "you dont get any grace marks ";
    }

    break;
  default: {
    cout << "invalid class name ";
    break;
  }
  }
  return 0;
}

// solution console
// Answer No 1
// Enter Your Number 25
// odd25
// Answer No 2
// Enter Your Age  100
// you are old
// Answer No 3
// Enter Your Number 12
// 0
// Answer No 4
// Enter 1st Number
// 123
// Enter 2nd Number
// 223
// 123is less than223
// Answer No 5
// Enter the salary 12000
// Enter the Working Hour3
// improve speed.
// Your Increment is600
// next month salary with increments12600
// Answer No 6
// Enter Your Age
// 23
// Enter Your Gender
// X for male and Y for female
// x
// Enter Your marital
// M for married and S for single
// s
// you are Single
// you meet the age criteria
// Answer No 7
// Enter your_roll_no
//  3456
// Enter your_friend_roll_no
//  789
// greater rollnumber3456
// Answer No 8
// Enter Your UserName
// a
// 123
// login successfull
// Answer No 9
// Enter Your class
// 2
// Enter number of  Your failed subject
// 2
// grace 4marks per subject.