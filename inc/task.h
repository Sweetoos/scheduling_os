#pragma once

#include "classes.h"

class Task
{
private:
    static int _number_of_tasks; //number of existing tasks
    int _priority;
    int _deadline; // seconds
    int _execution_time;

public:
    Task(int priority, int deadline, int execution_time);
};