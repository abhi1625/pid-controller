/**@file mock_general_controller.cpp
 * @brief Source file for mock tests of PID controller.
 *        Contains required mock tests for the PID params class.
 *
 * Detailed description follows here.
 * @author     : Abhinav Modi
 * @created on : Nov 22, 2019
 * @copyright  : This code is developed for programming exercises in the 
 *               course ENPM808X. Do not use without citation.
 */
#include<gtest/gtest.h>
#include<gmock/gmock.h>
#include "../include/general_controller.hpp"
#include "../include/controller.hpp"
#include "mock_general_controller.hpp"

using ::testing::AtLeast;
using ::testing::Return;
using ::testing::_;

/**
 * @brief Test for setKp(), setKd(), setKi(), setDt() functions of the 
 * PIDparams class. Checks using GMOCK object if methods are 
 * correctly defined and return expected values.
 */
TEST(mockPIDTest, setparamsTest) {
    mockPIDparams mockparams;
    EXPECT_CALL(mockparams, setKp(_)).WillOnce(Return(true));
    EXPECT_CALL(mockparams, setKd(_)).WillOnce(Return(true));
    EXPECT_CALL(mockparams, setKi(_)).WillOnce(Return(true));
    EXPECT_CALL(mockparams, setDt(_)).WillOnce(Return(true));
    mockparams.setKp(0.0);
    mockparams.setKd(0.0);
    mockparams.setKi(0.0);
    mockparams.setDt(1.0);
}

/**
 * @brief Test for computePID() function of the PIDparams class. 
 * Checks using GMOCK object if methods are correctly defined 
 * and returns expected value.
 */
TEST(mockPIDTest, computePIDTest) {
    mockPIDparams mockparams;
    PID pid;
    EXPECT_CALL(mockparams, computePID(_, _)).Times(1).WillOnce(Return(true));
    mockparams.computePID(20, 20);
    pid.setKp(1);
    pid.setKd(1);
    pid.setKi(1);
    pid.setDt(1);
    EXPECT_EQ(0, pid.computePID(20, 20));
}


