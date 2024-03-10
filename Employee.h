/**
 * @file Employee.h
 * @author Jimmy Hart
 * @date 2024-03-09
 * @brief Contains the Employee Class
 * 
 * Any employees and supervisors are deririved from this class.
 */



#ifndef EMPLOYEE_H
#define EMPLOYEE_H


/**
 * All Employees' IDs, hourly pay, hours worked, and methods are under this class.
 *
 * @class Employee Employee.h "CSCI325-Doxygen/Employee.h"
 * @brief All employees are derived this class
 *
 */
class Employee 
{
 private:
  int ID; //employee ID
  int years; 
  
 protected:
  double hourlyRate; //hourly pay for the employees under this class.
  float hoursWorked; //hours worked for the employees under this class.
 public:

/**
 * Allows to print the employees by default. Otherwise will be overwritten from other void print();
 *
 * @pre Must have employeees to print off
 * @return virtual 
 * @post All employees are printed out to the terminal, if any at all.
 * 
 */
  virtual void print(); 

/**
 * Calculates the pay from hourlyRate * hoursWorked
 *
 * @pre Must have employee data to compute
 * @return virtual 
 * @post Employee pay will be computed
 * 
 */
  virtual double calculatePay(); 

/**
 * gives employees a congrats message, and increases the 'int years' of the employee and increases their hourlyRate by 0.002
 *
 * @pre Must have atleast one employee to  be processed
 * @return void 
 * @post The message has been printed with the hourlyRate increased by 0.002.
 * 
 */
  void anniversary(); 

/**
 * DEFAULT CONSTRUCTOR
 *
 * @pre 
 * @post All memebers of the class will have been initalized and allocated.
 * 
 */
  Employee();

/**
 * COPY CONSTRUCTOR
 *
 * @param int ID The ID of the employee
 * @param int years Number of years the employee worked
 * @param double hourlyRate the amount of  pay perhour for the employee.
 * @param float hoursWorked Number of hours the employee worked
 * @pre 
 * @post Creates a employee with custom-valued parameters.
 * 
 */
  Employee(int ID, int years, double hourlyRate, float hoursWorked); 
};

#endif //EMPLOYEE_H
