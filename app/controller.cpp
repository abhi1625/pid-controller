/**@file controller.cpp
 * @brief Source file for PID controller.
 *        Contains method implementations declared in the included header files.
 *
 * Detailed description follows here.
 * @author     : Abhinav Modi
 * @created on : Sep 24, 2019
 * @copyright  : This code is developed for programming exercises in the 
 *               course ENPM808X. Do not use without citation.
 */
#include "../include/controller.hpp"
#include "../include/general_controller.hpp"

/**
 * @brief default constructor
 */
PID::PID() {
    kp = 0.0;
    kd = 0.0;
    ki = 0.0;
    dt = 1.0;
    prevErr = 0.0;
    errSum = 0.0;
}

/**
 * @brief default destructor
 */
PID::~PID() {
}
/**
 * @brief getKp provides access to private variable Kp.         
 * @return Kp  
 */
double PID::getKp() {
    return kp;
}

/**
 * @brief getKd provides access to private variable Kd.         
 * @return Kd  
 */
double PID::getKd() {
    return kd;
}

/**
 * @brief getKi provides access to private variable Ki.         
 * @return Ki  
 */
double PID::getKi() {
    return ki;
}

/**
 * @brief getDt provides access to private variable dt.         
 * @return dt  
 */
double PID::getDt() {
    return dt;
}

/**
 * @brief computePID outputs the control input required to reach a
 *        given setpoint velocity from the current actual velocity.
 * @param setpointVel - desired velocity to be tracked. 
 * @param actualVel - current/actual velocity of the system
 * @return double control input required to reach the 
 *         given setpoint value within a set rise-time.
 */
double PID::computePID(double setpointVel,  double actualVel) {
    // compute error
    double err = setpointVel - actualVel;
    // compute derivative of error
    double errDot = (err - prevErr) / dt;
    // compute integraDotl error
    errSum += err * dt;

    // compute output from pid
    double ctrlInput = kp * err + kd * errDot + ki * errSum;

    prevErr = err;  // save current error for next iteration
    return ctrlInput;
}
