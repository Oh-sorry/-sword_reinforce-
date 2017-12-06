#pragma once
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <dos.h>
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
void prologue(void);		//프롤로그
void title(void);		//제목
void menu(void);		//메뉴
void gotoxy(int x, int y);	//좌표
void side(void);		//기본테두리
void store(void);		//상점
void store_side(void);		//상점 - 테두리
void round(void);		//던전 라운드
void dungeon(void);		//던전
void dungeon_ent(void);		//던전 입장
void dungeon_title(void);	//던전 제목
void dungeon_side(void);	//던전 - 테두리
							//던전 라운드 옵션 목록
void MONSTER_D(void);
void MONSTER_C(void);
void MONSTER_B(void);
void MONSTER_A(void);
void get_wood(void);
void bang(void);
void upgrade(void);		//강화소
void upgrade_side(void);	//강화소 - 테두리
void reinforce(void);	//강화
void sword_dot1(void);
void talk(void);	//대장장이와 이야기
void result(void);
					//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
int key;
int i = 0;
int k, u, y, o, p, t;
int h = 0;
int a;				//라운드 난수 입력
char j[20];			//주인공 이름
int wood = 1;			//나무 막대기 - 상점 구매, 드랍
int gold = 5;			//골드
int sword = 0;			//검
int Level = 0;			//강화 수치
char yorn[5];			//yes or no

enum {
	BLACK,
	DARK_BLUE,
	DARK_GREEN,
	DARK_SKY_BLUE,
	DARK_RED,
	DARK_VOILET,
	DARK_YELLOW,
	GRAY,
	DARK_GRAY,
	BLUE,
	GREEN,
	SKY_BLUE,
	RED,
	VIOLET,
	YELLOW,
	WHITE,
};
void CursorVisible(int blnCursorVisible)
{
	CONSOLE_CURSOR_INFO cursorInfo;
	GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
	cursorInfo.bVisible = blnCursorVisible;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}
void SetColor(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color); //색 입력 함수
}
void gotoxy(int x, int y)
{
	COORD Pos = { x - 1, y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
