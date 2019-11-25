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
#include "../include/general_controller.hpp"

/**
 * @brief default constructor
 */
PIDparams::PIDparams()
         : kp(0.0),
           kd(0.0),
           ki(0.0),
           dt(1.0),
           prevErr(0.0),
           errSum(0.0) {
}

/**
 * @brief default destructor
 */
PIDparams::~PIDparams() {
}

/**
 * @brief setKp sets the proportional gain Kp for the PID controller
 * @param Kp - gain value Kp 
 */
bool PIDparams::setKp(double _kp) {
    this->kp = _kp;  // assign given value to the private variable kp
    return true;
}

/**
 * @brief setKd sets the derivative gain Kd for the PID controller
 * @param Kd - gain value Kd 
 */ 
bool PIDparams::setKd(double _kd) {
    this->kd = _kd;  // assign given value to the private variable kd
    return true;
}

/**
 * @brief setKi sets the integral gain Ki for the PID controller
 * @param Ki - gain value Ki 
 */ 
bool PIDparams::setKi(double _ki) {
    this->ki = _ki;  // assign given value to the private variable ki
    return true;
}

/**
 * @brief setDt sets the discretization time-step dt for the PID.         
 * @param dt - discretization time-step dt 
 */
bool PIDparams::setDt(double _dt) {
    this->dt = _dt;  // assign given value to the private variable dt
    return true;
}
