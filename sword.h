#pragma once
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <dos.h>
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
void prologue(void);		//���ѷα�
void title(void);		//����
void menu(void);		//�޴�
void gotoxy(int x, int y);	//��ǥ
void side(void);		//�⺻�׵θ�
void store(void);		//����
void store_side(void);		//���� - �׵θ�
void round(void);		//���� ����
void dungeon(void);		//����
void dungeon_ent(void);		//���� ����
void dungeon_title(void);	//���� ����
void dungeon_side(void);	//���� - �׵θ�
							//���� ���� �ɼ� ���
void MONSTER_D(void);
void MONSTER_C(void);
void MONSTER_B(void);
void MONSTER_A(void);
void get_wood(void);
void bang(void);
void upgrade(void);		//��ȭ��
void upgrade_side(void);	//��ȭ�� - �׵θ�
void reinforce(void);	//��ȭ
void sword_dot1(void);
void talk(void);	//�������̿� �̾߱�
void result(void);
					//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
int key;
int i = 0;
int k, u, y, o, p, t;
int h = 0;
int a;				//���� ���� �Է�
char j[20];			//���ΰ� �̸�
int wood = 1;			//���� ����� - ���� ����, ���
int gold = 5;			//���
int sword = 0;			//��
int Level = 0;			//��ȭ ��ġ
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
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color); //�� �Է� �Լ�
}
void gotoxy(int x, int y)
{
	COORD Pos = { x - 1, y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
