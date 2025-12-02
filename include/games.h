#ifndef GAMES_H
#define GAMES_H

// 启动游戏菜单
void game_menu();

// 简单的计算器功能
void game_calculator();

// 数独游戏 (可以使用简易版，或者只做生成器)
void game_sudoku();

/**
 * 贪吃蛇游戏
 * 注意：Windows下可能需要 <conio.h>，Linux下需要 ncurses
 * 如果时间不够，建议最后实现
 */
void game_snake();

#endif