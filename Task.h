#ifndef MRTNPLLR_TODO_APP_TASK_H
#define MRTNPLLR_TODO_APP_TASK_H


#include <ostream>
#include "Functions.h"

class Task
{
public:
    Task();

    explicit Task(bool isChecked);

    friend std::ostream &operator<<(std::ostream &os, const Task &task);

    bool IsChecked() const;

private:
    bool _isChecked;
    std::vector<Task> _tasks;

};


#endif //MRTNPLLR_TODO_APP_TASK_H
