#ifndef KNOWLEDGE_H
#define KNOWLEDGE_H

// 添加一个新的关键词-回复对到数据库
void kb_add_keyword(const char* keyword, const char* response);

// 删除关键词
void kb_delete_keyword(const char* keyword);

// 修改关键词对应的回复
void kb_modify_response(const char* keyword, const char* new_response);

// 查找关键词是否存在 (用于调试或管理)
void kb_check_keyword(const char* keyword);

#endif