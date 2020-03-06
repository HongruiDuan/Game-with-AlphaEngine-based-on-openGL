#pragma once
/* Project:		GSMWin
File Name:	help.h
Author:dhr
Date:
Purpose:		主界面显示
*/
#ifndef _help
#define _help

//------------------------------------------------------------------------------
// Typedef:
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// Public Consts:
//------------------------------------------------------------------------------
enum TYPE3
{
	// 游戏对象类型列表
	TYPE3_IMAGE = 0,
	TYPE3_BUTTON = 1,

	TYPE3_NUM
};
//------------------------------------------------------------------------------
// Public Structures:
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// Public Variables:
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// Public Functions:
//------------------------------------------------------------------------------

void Load6(void);
void Ini6(void);
void Update6(void);
void Draw6(void);
void Free6(void);
void Unload6(void);

#endif#pragma once
