/**
 * @file Supervisor.h
 * @author Jimmy Hart
 * @date 2024-03-09
 * @brief Contains the class Supervisor, which is derived from the Employee Class. 
 * 
 * 
 */

#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"


/**
 * An overridden class of Employee. Supervisors are abstracted to have slightly different functions.
 *
 * @class Supervisor Supervisor.h "CSCI325-Doxygen/Supervisor.h"
 * @brief All Supervisors should be made by this class
 *
 */
class Supervisor : public Employee \
{
 private:
  int numSupervised;
 public:

/**
 * Supervisors should be printed off from this method
 *
 * @pre Must have alteast one Supervisor to print off. Otherwise it will print nothing.
 * @return void 
 * @post Supervisors have been printed off
 * 
 */
  void print();

/**
 * Calculates the Pay for the Supervisor
 *
 * @pre Must have atleast one Supervisor to calculate pay.
 * @return double The earned amount of the Supervisor.
 * @post Pay has been calculated
 * 
 */
  double calculatePay();

/**
 * STANDARD CONSTRUCTOR
 *
 * @pre 
 * @post All default members of the class have been initialized and allocated.
 * 
 */
  Supervisor();

/**
 * COPY CONSTRUCTOR
 *
 * @param int ID The ID of the Supervisor
 * @param int years Number of years the Supervisor has worked
 * @param double hourlyRate The Rate of pay for the supervisor
 * @param float hoursWorked The hours woked by the supervisor
 * @param int numSupervised The number of employees the supervisor has under them.
 * @pre 
 * @post The Supervisor has created with custom-values.
 * 
 */
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised); 
};

#endif //SUPERVISOR_H
