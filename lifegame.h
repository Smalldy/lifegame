#ifndef LIFEGAME_H_INCLUDED
#define LIFEGAME_H_INCLUDED

/**
*生命状态枚举LIFE STATE
*HP代表是HP数值决定的状态,AP表示是AP值决定的状态
*hp决定的状态的中文名称为:濒死,重伤III,重伤II,重伤I,轻伤II,轻伤I 6个阶段
*ap决定的状态的中文名称为:精疲力竭,深度疲劳,劳累,活跃,亢奋       5个阶段
*/
enum LIFE_STATE{
LS_HP6,
LS_HP5,
LS_HP4,
LS_HP3,
LS_HP2,
LS_HP1,
LS_AP5,
LS_AP4,
LS_AP3,
LS_AP2,
LS_AP1
};


#endif // LIFEGAME_H_INCLUDED
