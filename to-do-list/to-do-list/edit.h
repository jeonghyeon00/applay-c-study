#ifndef EDIT_H
#define EDIT_H
#include <stdio.h>
#include "task.h"
#include <string.h>

void addTask(struct Task* task);
void removeTask(struct Task* task);
extern int lastIndex;


#endif 