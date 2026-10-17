#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct Task
{
    char Title[100];
    struct Task* next;
};


struct Task *create_task(char* task_name);

int main(){

    struct Task *head = NULL;

    struct Task *task1 = create_task("Zen Browser");



}


struct Task *create_task(char* task_name){

    struct Task * new_task = malloc(sizeof(struct Task));

    if(new_task == NULL){

        printf("Some error happened");

        return NULL;
    }
    else{
        strcpy(new_task->Title, task_name);
        new_task->next = NULL;
        return new_task;
    }
}
