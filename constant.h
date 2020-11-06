/* ====================================================================================================
# Author: Brandon London
# Course: CS4760 - Operating System
# File Name: constant.h
# Date: 11/06/2020
==================================================================================================== */
#ifndef MY_CONSTANT_H
#define MY_CONSTANT_H


//File related constant
#define BUFFER_LENGTH 1024
#define MAX_FILE_LINE 100000

//Process related constant
#define TERMINATION_TIME 10
#define MAX_PROCESS 18
#define TOTAL_PROCESS 100

//Resource related constant
#define MAX_RESOURCE 20
#define MIN_SHARED_RESOURCE (int)(MAX_RESOURCE * 0.15)
#define MAX_SHARED_RESOURCE (int)(MAX_RESOURCE * 0.25)


#endif

