#ifndef BOT_CORE_H
#define BOT_CORE_H

#include "common.h"

/**
 * 核心处理函数：接收用户输入，返回系统响应
 * 逻辑：
 * 1. 分析 input 字符串
 * 2. 在关键词库中查找匹配
 * 3. 如果是指令（如 "add task"），则调用相应模块
 * 4. 如果没匹配，返回默认回复 (Eliza风格)
 */
void bot_process_input(User* user, char* input);

/**
 * 从文件中加载关键词匹配规则
 */
void load_keywords();

#endif