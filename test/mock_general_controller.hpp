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
#ifndef INCLUDE_MOCK_GENERAL_CONTROLLER_HPP_
#define INCLUDE_MOCK_GENERAL_CONTROLLER_HPP_

#include<gtest/gtest.h>
#include<gmock/gmock.h>
#include "../include/general_controller.hpp"


class mockPIDparams : public PIDparams {
 public:
        /**
         * @brief Mock method for setKp
         * @param _Kp - gain value Kp 
         * @return bool
         */
        MOCK_METHOD1(setKp, bool(double _Kp));

        /**
         * @brief Mock method for setKd
         * @param _Kd - gain value Kd 
         * @return bool
         */        
        MOCK_METHOD1(setKd, bool(double _Kd));

        /**
         * @brief Mock method for setKi
         * @param _Ki - gain value Ki 
         * @return bool
         */        
        MOCK_METHOD1(setKi,bool(double _Ki));

        /**
         * @brief Mock method for setDt.         
         * @param _dt - discretization time-step dt 
         * @return bool
         */
        MOCK_METHOD1(setDt, bool(double _dt));

        /**
         * @brief Mock for computePID method
         * @param setpointVel - desired velocity to be tracked. 
         * @param actualVel - current/actual velocity of the system
         * @return double control input required to reach the 
         *         given setpoint value within a set rise-time.
         */
        MOCK_METHOD2(computePID, double(double setpointVel, double actualVel));

};

#endif  // INCLUDE_MOCK_GENERAL_CONTROLLER_HPP_
