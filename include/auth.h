#ifndef AUTH_H
#define AUTH_H

#include "common.h"

/**
 * 初始化用户模块，例如加载用户文件
 */
void auth_init();

/**
 * 用户注册
 * @return 1 成功, 0 失败(用户名已存在等)
 */
int register_user(const char* username, const char* password);

/**
 * 用户登录
 * @param current_user 指向当前用户结构体的指针，登录成功后填充信息
 * @return 1 成功, 0 失败
 */
int login_user(const char* username, const char* password, User* current_user);

/**
 * 显示用户引导信息 (图中的相关引导)
 */
void show_user_guide();

#endif