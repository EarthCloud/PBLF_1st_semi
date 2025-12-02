#ifndef TODO_H
#define TODO_H

#include "common.h"

// 添加待办事项
void todo_add(User* user, const char* title, const char* content);

// 列出所有待办
void todo_list(User* user);

// 根据关键词查询待办 (对应图中“把标题作为关键词进行查询”)
void todo_search(User* user, const char* keyword);

// 标记完成或删除
void todo_complete(User* user, int id);

#endif