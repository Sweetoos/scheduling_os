#pragma once
#include <vector>

class Schedule
{
private:
    static int _running_tasks;
    std::vector<Task> _task_list;

public:
    void add_task(const Task &task);
    
};