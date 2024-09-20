#include "classes.h"
#include "schedule.h"

int Schedule::_running_tasks=0;

void Schedule::add_task(const Task &task)
{
    _task_list.push_back(task);
}