/**@file controller.hpp
 * @brief Header file for PID controller.
 *        Contains required headers and methods.
 *
 * Detailed description follows here.
 * @author     : Abhinav Modi
 * @created on : Sep 24, 2019
 * @copyright  : This code is developed for programming exercises in the 
 *               course ENPM808X. Do not use without citation.
 */
#ifndef INCLUDE_CONTROLLER_HPP_
#define INCLUDE_CONTROLLER_HPP_

#include <iostream>
#include <memory>
#include "general_controller.hpp"

using std :: cout;
using std :: cin;
using std :: endl;

class PID : public PIDparams{
 public:
        /**
         * @brief default constructor
         */
        PID();

        /**
         * @brief computePID outputs the control input required to reach a
         *        given setpoint velocity from the current actual velocity.
         * @param setpointVel - desired velocity to be tracked. 
         * @param actualVel - current/actual velocity of the system
         * @return double control input required to reach the 
         *         given setpoint value within a set rise-time.
         */
        double computePID(double setpointVel, double actualVel);

        /**
         * @brief getKp provides access to private variable Kp.         
         * @return Kp  
         */
        double getKp();

        /**
         * @brief getKd provides access to private variable Kd.         
         * @return Kd  
         */
        double getKd();

        /**
         * @brief getKi provides access to private variable Ki.         
         * @return Ki  
         */
        double getKi();

        /**
         * @brief getDt provides access to private variable dt.         
         * @return dt  
         */
        double getDt();

        /**
         * @brief default destructor
         */
        ~PID();
};

#endif  // INCLUDE_CONTROLLER_HPP_
