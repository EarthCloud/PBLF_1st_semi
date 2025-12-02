#ifndef COMMON_H
#define COMMON_H

#include <stdio.h>
#include <stdlib.h>

// 定义一些常量
#define MAX_USERNAME 50
#define MAX_PASSWORD 50
#define MAX_INPUT 1024
#define MAX_RESPONSE 2048

// 用户结构体
typedef struct {
    char username[MAX_USERNAME];
    char password[MAX_PASSWORD];
    int is_logged_in;
} User;

// 待办事项结构体
typedef struct {
    int id;
    char title[100];
    char content[500];
    int is_completed;
} TodoItem;

#endif