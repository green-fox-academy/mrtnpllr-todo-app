#include "Task.h"

std::ostream &operator<<(std::ostream &os, const Task &task)
{
    if (task.IsChecked()) {

    }

    return os;
}

Task::Task(bool isChecked) : _isChecked(isChecked)
{}

bool Task::IsChecked() const
{
    return _isChecked;
}

Task::Task()
= default;
