#include "classes.h"
#include "task.h"

int Task::_number_of_tasks=0;

Task::Task(int priority, int deadline, int execution_time)
 : _priority(priority), _deadline(deadline), _execution_time(execution_time)
{
    _number_of_tasks++;
}