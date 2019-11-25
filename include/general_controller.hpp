/**@file general_controller.hpp
 * @brief Header file for General PID controller.
 *        Contains required headers and methods.
 *
 * Detailed description follows here.
 * @author     : Abhinav Modi
 * @created on : Nov 22, 2019
 * @copyright  : This code is developed for programming exercises in the 
 *               course ENPM808X. Do not use without citation.
 */
#ifndef INCLUDE_GENERAL_CONTROLLER_HPP_
#define INCLUDE_GENERAL_CONTROLLER_HPP_

#include <iostream>
#include <memory>

using std :: cout;
using std :: cin;
using std :: endl;

class PIDparams {
 public:
        /**
         * @brief default constructor
         */
        PIDparams();

        /**
         * @brief setKp sets the proportional gain Kp for the PID controller
         * @param _Kp - gain value Kp 
         */
        virtual bool setKp(double _Kp);

        /**
         * @brief setKd sets the derivative gain Kd for the PID controller
         * @param _Kd - gain value Kd 
         */        
        virtual bool setKd(double _Kd);

        /**
         * @brief setKi sets the integral gain Ki for the PID controller
         * @param _Ki - gain value Ki 
         */        
        virtual bool setKi(double _Ki);

        /**
         * @brief setDt sets the discretization time-step dt for the PID.         
         * @param _dt - discretization time-step dt 
         */
        virtual bool setDt(double _dt);

        /**
         * @brief default destructor
         */
        virtual ~PIDparams();

        /**
         * @brief computePID outputs the control input required to reach a
         *        given setpoint velocity from the current actual velocity.
         * @param setpointVel - desired velocity to be tracked. 
         * @param actualVel - current/actual velocity of the system
         * @return double control input required to reach the 
         *         given setpoint value within a set rise-time.
         */
        virtual double computePID(double setpointVel, double actualVel) = 0;


 protected:
        double kp;                  // proportianal gain term
        double kd;                  // derivative gain term
        double ki;                  // integral gain term
        double dt;                  // discretization time-step
        double prevErr;             // error in the previous time step
        double errSum;              // cumulative error term
};

#endif  // INCLUDE_GENERAL_CONTROLLER_HPP_
