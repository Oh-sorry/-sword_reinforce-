#include "sword.h"

int main() {
	system("mode con cols=120 lines=30"); //레이아웃 창 크기 설정
										  //cols = 칸/행 (가로)  lines = 줄/열 (세로)
	CursorVisible(0);
	prologue();
	title();
	menu();

	return 0;
}
void prologue(void) {

	SetColor(15);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\t\t모험을 떠날 용사. 당신의 이름은 무엇인가? :    ");
	scanf("%s", &j);
	system("cls");
	gotoxy(80, 3); printf("Press enter key to skip");
	printf("\n\n\n\n\n\n\n\n\n\n\n\t\t극히 평범한 15, 소년 %s의 모험이 시작된다.\n", j);
	getc(stdin);
	system("cls");
	gotoxy(80, 3); printf("Press enter key to skip");
	printf("\n\n\n\n\n\n\n\n\n\n\n\t\t어느 평범하고 한적한 산골 마을 ...\n");
	getc(stdin);
	system("cls");
	gotoxy(80, 3); printf("Press enter key to skip");
	printf("\n\n\n\n\n\n\n\n\n\n\n\t\t농사집안의 첫째로 태어난 %s...\n", j);
	getc(stdin);
	system("cls");
	gotoxy(80, 3); printf("Press enter key to skip");
	printf("\n\n\n\n\n\n\n\n\n\n\n\t\t용사가 되...\n");
	getc(stdin);
	system("cls");
	gotoxy(80, 3); printf("Press enter key to skip");
	printf("\n\n\n\n\n\n\n\n\n\n\n\t\t고 싶지만 가난한 농부의 아들인 %s는 검이 없다...\n", j);
	getc(stdin);
	system("cls");
	gotoxy(80, 3); printf("Press enter key to skip");
	printf("\n\n\n\n\n\n\n\n\n\n\n\t\t나무 막대기를 검으로 만들어 보자,,,\n");
	getc(stdin);
	system("cls");
}
void title() {

	side();

	//ㄱ
	SetColor(4);
	gotoxy(12, 8); printf("■");
	gotoxy(14, 8); printf("■");
	gotoxy(16, 8); printf("■");
	gotoxy(18, 8); printf("■");
	gotoxy(18, 9); printf("■");
	gotoxy(16, 10); printf("■");
	gotoxy(14, 11); printf("■");

	//ㅓ
	gotoxy(20, 9); printf("■");
	gotoxy(22, 8); printf("■");
	gotoxy(22, 9); printf("■");
	gotoxy(22, 10); printf("■");
	gotoxy(22, 11); printf("■");

	//ㅁ
	gotoxy(16, 13); printf("■");
	gotoxy(18, 13); printf("■");
	gotoxy(20, 13); printf("■");
	gotoxy(22, 13); printf("■");
	gotoxy(16, 14); printf("■");
	gotoxy(16, 15); printf("■");
	gotoxy(18, 15); printf("■");
	gotoxy(20, 15); printf("■");
	gotoxy(22, 15); printf("■");
	gotoxy(22, 14); printf("■");

	//ㅋ
	SetColor(6);
	gotoxy(32, 9); printf("■");
	gotoxy(34, 9); printf("■");
	gotoxy(36, 9); printf("■");
	gotoxy(38, 9); printf("■");
	gotoxy(40, 9); printf("■");
	gotoxy(40, 10); printf("■");
	gotoxy(40, 11); printf("■");
	gotoxy(36, 11); printf("■");
	gotoxy(38, 11); printf("■");
	gotoxy(40, 12); printf("■");
	gotoxy(40, 13); printf("■");

	//ㅣ
	gotoxy(44, 8); printf("■");
	gotoxy(44, 9); printf("■");
	gotoxy(44, 10); printf("■");
	gotoxy(44, 11); printf("■");
	gotoxy(44, 12); printf("■");
	gotoxy(44, 13); printf("■");
	gotoxy(44, 14); printf("■");
	gotoxy(44, 15); printf("■");

	//별
	SetColor(2);
	gotoxy(60, 11); printf("☆");

	//ㅇ
	SetColor(1);
	gotoxy(76, 9); printf("■");
	gotoxy(76, 10); printf("■");
	gotoxy(78, 8); printf("■");
	gotoxy(80, 8); printf("■");
	gotoxy(82, 8); printf("■");
	gotoxy(84, 8); printf("■");
	gotoxy(86, 8); printf("■");
	gotoxy(88, 9); printf("■");
	gotoxy(88, 10); printf("■");
	gotoxy(78, 11); printf("■");
	gotoxy(80, 11); printf("■");
	gotoxy(82, 11); printf("■");
	gotoxy(84, 11); printf("■");
	gotoxy(86, 11); printf("■");

	//ㅜ
	gotoxy(74, 14); printf("■");
	gotoxy(76, 14); printf("■");
	gotoxy(78, 14); printf("■");
	gotoxy(80, 14); printf("■");
	gotoxy(82, 14); printf("■");
	gotoxy(84, 14); printf("■");
	gotoxy(86, 14); printf("■");
	gotoxy(88, 14); printf("■");
	gotoxy(90, 14); printf("■");
	gotoxy(82, 15); printf("■");
	gotoxy(82, 16); printf("■");

	//ㄱ
	SetColor(5);
	gotoxy(98, 9); printf("■");
	gotoxy(100, 9); printf("■");
	gotoxy(102, 9); printf("■");
	gotoxy(104, 9); printf("■");
	gotoxy(106, 9); printf("■");
	gotoxy(106, 10); printf("■");
	gotoxy(106, 11); printf("■");
	gotoxy(106, 12); printf("■");
	gotoxy(106, 13); printf("■");

	//ㅣ
	gotoxy(110, 8); printf("■");
	gotoxy(110, 9); printf("■");
	gotoxy(110, 10); printf("■");
	gotoxy(110, 11); printf("■");
	gotoxy(110, 12); printf("■");
	gotoxy(110, 13); printf("■");
	gotoxy(110, 14); printf("■");
	gotoxy(110, 15); printf("■");

	SetColor(7);
	gotoxy(44, 25);
	printf(" Copyright(C)2017. by 원민.");
	gotoxy(36, 26);
	printf(" Copyright(C)2017. All rights reserved by 원민. ");

	while (1) {
		if (_kbhit()) {
			key = _getch();
			if (key == 27) {
				exit(0);
			}
			else
				break;
		}
		gotoxy(44, 19); printf(" < PRESS ENTER TO START >");
		Sleep(400);
		gotoxy(44, 19); printf("                            ");
		Sleep(400);

	}
	system("cls");
	return 0;
}
void menu() {

	int i;
	int h = 0;

	system("cls");

	do {
		side();

		SetColor(15);
		gotoxy(52, 8); printf("┌──────────────────┐\n");
		gotoxy(52, 9); printf("│                                    │\n");
		gotoxy(52, 10); printf("│                                    │\n");
		gotoxy(52, 11); printf("│          1. 상점으로 간다.         │\n");
		gotoxy(52, 12); printf("│                                    │\n");
		gotoxy(52, 13); printf("│                                    │\n");
		gotoxy(52, 14); printf("│          2. 던전으로 간다.         │\n");
		gotoxy(52, 15); printf("│                                    │\n");
		gotoxy(52, 16); printf("│                                    │\n");
		gotoxy(52, 17); printf("│          3. 강화소로 간다.         │\n");
		gotoxy(52, 18); printf("│                                    │\n");
		gotoxy(52, 19); printf("│                                    │\n");
		gotoxy(52, 20); printf("│          4. 나간다.                │\n");
		gotoxy(52, 21); printf("│                                    │\n");
		gotoxy(52, 22); printf("│                                    │\n");
		gotoxy(52, 23); printf("└──────────────────┘\n");
		gotoxy(80, 4); printf("Lv : %d", Level);
		gotoxy(90, 4); printf("나무 : %d", wood);
		gotoxy(100, 4); printf("골드 : %d", gold);
		gotoxy(12, 18); printf(" 나무 3 골드 15가 지급됩니다.");
		gotoxy(12, 15); printf(" 메뉴를 입력하세요 : ");
		scanf("%d", &i);
	} while (i < 1 || i > 5);

	switch (i) {
	case 1:
		store();
		break;
	case 2:
		dungeon();
		break;
	case 3:
		upgrade();
		break;
	default:
	    system("cls");
		exit(0);
	}
	return;
}
void side(void) {


	int k;

	SetColor(3);
	gotoxy(2, 2);
	for (k = 0; k<59; k++) {
		printf("■");
	}
	gotoxy(2, 29);
	for (k = 0; k<59; k++) {
		printf("■");
	}
	gotoxy(2, 4);
	for (k = 0; k < 27; k++) {
		gotoxy(2, k + 3);
		printf("■");
	}
	gotoxy(118, 4);
	for (k = 0; k < 27; k++) {
		gotoxy(118, k + 3);
		printf("■");
	}
}
void store() {
	system("cls");

	store_side();

	SetColor(15);
	gotoxy(48, 8); printf("WELCOME! THIS IS STORE! Sir");

	gotoxy(47, 15); printf("1");

	gotoxy(52, 15); printf(" 나무 막대기를 산다");

	gotoxy(47, 19); printf("2");

	gotoxy(52, 19); printf(" 나무 막대기를 판다");

	gotoxy(47, 23); printf("3");

	gotoxy(58, 23); printf(" 나간다");
	gotoxy(80, 4); printf("Lv : %d", Level);
	gotoxy(90, 4); printf("나무 : %d", wood);
	gotoxy(100, 4); printf("골드 : %d", gold);

	SetColor(15);
	gotoxy(52, 10); printf("메뉴를 선택하세요! : ");
	scanf("%d", &i);

	if (i == 1) {
		system("cls");

		store_side();

		SetColor(12);
		gotoxy(52, 15); printf("[ 나무 막대기를 산다 ]");
		SetColor(15);
		gotoxy(52, 19); printf(" 나무 막대기를 판다 ");
		SetColor(15);
		gotoxy(58, 23); printf(" 나간다");

		if (gold < 5) {
			system("cls");
			store_side();
			SetColor(15);
			gotoxy(52, 15); printf("골드가 부족합니다.");
			Sleep(1000);
			return store();
		}
		else {
			wood++;
			gold = gold - 5;
		}

		gotoxy(90, 4); printf("나무 : %d", wood);
		gotoxy(100, 4); printf("골드 : %d", gold);

		Sleep(2000);
		return store();
	}
	if (i == 2) {
		system("cls");

		store_side();

		SetColor(15);
		gotoxy(52, 15); printf(" 나무 막대기를 산다 ");
		SetColor(12);
		gotoxy(52, 19); printf("[ 나무 막대기를 판다 ] ");
		SetColor(15);
		gotoxy(58, 23); printf(" 나간다");

		if (wood < 1) {
			system("cls");
			store_side();
			SetColor(15);
			gotoxy(52, 15); printf("나무가 부족합니다.");
			Sleep(1000);
			return store();
		}
		else {
			wood = wood - 1;
			gold = gold + 5;
		}

		gotoxy(90, 4); printf("나무 : %d", wood);
		gotoxy(100, 4); printf("골드 : %d", gold);

		Sleep(2000);
		return store();
	}
	if (i == 3) {
		system("cls");

		store_side();

		SetColor(12);
		gotoxy(58, 23); printf("[ 나간다 ]");
		SetColor(15);
		gotoxy(52, 15); printf(" 나무 막대기를 산다");
		SetColor(15);
		gotoxy(52, 19); printf(" 나무 막대기를 판다 ");

		gotoxy(90, 4); printf("나무 : %d", wood);
		gotoxy(100, 4); printf("골드 : %d", gold);

		Sleep(2000);
	}

	getc(stdin);
	return menu();
}
void store_side() {

	SetColor(2);
	gotoxy(2, 2);
	for (i = 0; i<59; i++) {
		printf("■");
	}
	gotoxy(2, 29);
	for (i = 0; i<59; i++) {
		printf("■");
	}
	gotoxy(2, 4);
	for (i = 0; i < 27; i++) {
		gotoxy(2, i + 3);
		printf("■");
	}
	gotoxy(118, 4);
	for (i = 0; i < 27; i++) {
		gotoxy(118, i + 3);
		printf("■");
	}
}
void dungeon() {
	h = 0;
	dungeon_ent();
	round();
}
void dungeon_ent() {
	system("cls");

	char enter[25] = "Entering the dungeon...";

	int enter_key = 0;

	dungeon_side();

	SetColor(15);
	gotoxy(44, 19);
	for (enter_key = 0; enter_key < 25; enter_key++) {
		printf("%c", enter[enter_key]);
		Sleep(100);
	}
	Sleep(2000);
	gotoxy(50, 26); printf("DDu Dun!");
	Sleep(2000);
}
void round() {

	srand((unsigned)time(NULL));

	while (h < 10) {
		a = rand() % 6;

		switch (a) {
		case 0:
			MONSTER_D();
			break;
		case 1:
			MONSTER_C();
			break;
		case 2:
			MONSTER_B();
			break;
		case 3:
			MONSTER_A();
			break;
		case 4:
			get_wood();
			break;
		case 5:
			bang();
			break;
		default:
			return 1;
		}
	}return menu();
}
void dungeon_title() {

	system("cls");

	dungeon_side();

	SetColor(4);
	gotoxy(2, 24);
	for (k = 0; k < 58; k++) {
		printf("■");
	}

	//v
	SetColor(12);
	gotoxy(44, 6); printf("■");
	gotoxy(44, 7); printf("■");
	gotoxy(46, 8); printf("■");
	gotoxy(48, 9); printf("■");
	gotoxy(50, 10); printf("■");
	gotoxy(52, 11); printf("■");
	gotoxy(54, 12); printf("■");
	gotoxy(56, 11); printf("■");
	gotoxy(58, 10); printf("■");
	gotoxy(60, 9); printf("■");
	gotoxy(62, 8); printf("■");
	gotoxy(64, 7); printf("■");
	gotoxy(64, 6); printf("■");

	//s
	SetColor(12);
	gotoxy(66, 14); printf("■");
	gotoxy(64, 13); printf("■");
	gotoxy(62, 12); printf("■");
	gotoxy(60, 12); printf("■");
	gotoxy(58, 12); printf("■");
	gotoxy(56, 13); printf("■");
	gotoxy(54, 14); printf("■");
	gotoxy(56, 15); printf("■");
	gotoxy(58, 16); printf("■");
	gotoxy(60, 16); printf("■");
	gotoxy(62, 16); printf("■");
	gotoxy(64, 17); printf("■");
	gotoxy(66, 18); printf("■");
	gotoxy(64, 19); printf("■");
	gotoxy(62, 20); printf("■");
	gotoxy(60, 20); printf("■");
	gotoxy(58, 20); printf("■");
	gotoxy(56, 19); printf("■");
	gotoxy(54, 18); printf("■");

	//사람 모양
	SetColor(14);
	gotoxy(12, 13); printf("■");
	gotoxy(14, 12); printf("■");
	gotoxy(16, 11); printf("■");
	gotoxy(18, 10); printf("■");
	gotoxy(18, 10); printf("■");
	gotoxy(20, 11); printf("■");
	gotoxy(22, 11); printf("■");
	gotoxy(22, 10); printf("■");
	gotoxy(22, 9); printf("■");
	gotoxy(22, 8); printf("■");
	gotoxy(20, 8); printf("■");
	gotoxy(20, 7); printf("■");
	gotoxy(20, 6); printf("■");
	gotoxy(22, 6); printf("■");
	gotoxy(24, 6); printf("■");
	gotoxy(24, 7); printf("■");
	gotoxy(24, 8); printf("■");
	gotoxy(24, 11); printf("■");
	gotoxy(26, 10); printf("■");
	gotoxy(28, 9); printf("■");
	gotoxy(30, 8); printf("■");
	gotoxy(32, 7); printf("■");
	gotoxy(22, 12); printf("■");
	gotoxy(22, 13); printf("■");
	gotoxy(22, 14); printf("■");
	gotoxy(20, 15); printf("■");
	gotoxy(18, 16); printf("■");
	gotoxy(16, 17); printf("■");
	gotoxy(14, 17); printf("■");
	gotoxy(24, 14); printf("■");
	gotoxy(26, 13); printf("■");
	gotoxy(28, 12); printf("■");
	gotoxy(30, 13); printf("■");
	gotoxy(30, 14); printf("■");
	gotoxy(30, 15); printf("■");
	gotoxy(30, 16); printf("■");

	SetColor(15);
	gotoxy(16, 20); printf(" < 용사 > %s", j);
	gotoxy(80, 4); printf("Lv : %d", Level);
	gotoxy(90, 4); printf("나무 : %d", wood);
	gotoxy(100, 4); printf("골드 : %d", gold);

	getc(stdin); getc(stdin);
}
void dungeon_side() {

	SetColor(4);
	gotoxy(2, 2);
	for (i = 0; i<59; i++) {
		printf("■");
	}
	gotoxy(2, 29);
	for (i = 0; i<59; i++) {
		printf("■");
	}
	gotoxy(2, 4);
	for (i = 0; i < 27; i++) {
		gotoxy(2, i + 3);
		printf("■");
	}
	gotoxy(118, 4);
	for (i = 0; i < 27; i++) {
		gotoxy(118, i + 3);
		printf("■");
	}
}
void MONSTER_D() {

	system("cls");

	int n = 0;
	int m = 0;
	int h = 0;

	dungeon_title();

	//D
	SetColor(15);
	char monsterd[15][15] = {
		{ 0,0,0,0,0,0,1,1,1,0,0,0,0,0,0 },
		{ 0,0,0,0,0,1,0,0,0,1,0,0,0,0,0 },
		{ 0,0,0,0,1,1,0,0,0,1,1,0,0,0,0 },
		{ 0,0,0,1,1,0,0,0,0,0,1,1,0,0,0 },
		{ 0,0,1,0,0,0,0,0,1,1,0,0,1,0,0 },
		{ 0,1,1,0,0,0,0,0,1,1,0,0,1,1,0 },
		{ 0,1,1,0,0,0,0,0,0,0,0,0,1,1,0 },
		{ 0,1,1,0,0,0,1,1,1,0,0,0,1,1,0 },
		{ 0,1,0,0,0,0,1,1,1,0,0,0,0,1,0 },
		{ 0,1,0,0,0,0,1,1,1,0,0,0,0,1,0 },
		{ 0,0,1,0,0,0,0,0,0,0,0,0,1,0,0 },
		{ 0,0,0,1,0,0,0,0,0,0,0,1,0,0,0 },
		{ 0,0,0,0,1,1,0,0,0,1,1,0,0,0,0 },
		{ 0,0,0,0,0,1,1,1,1,1,0,0,0,0,0 },
		{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 }
	};

	for (n = 0; n < 15; n++) {
		gotoxy(80, 6 + n);
		for (m = 0; m < 15; m++) {
			if (monsterd[n][m] == 1) {
				printf("■");
			}
			if (monsterd[n][m] == 0) {
				printf("  ");
			}
		}
		printf("\n");
	}
	SetColor(15);
	gotoxy(16, 27); printf(" 1. 싸운다	2. 도망친다");
	gotoxy(16, 26); printf(" 야생의 몬스터 [알] (이)가 습격해왔다.(다른 키를 누를 시 던전을 나간다)  :  ");
	scanf("%d", &u);
	Sleep(1000);

	if (u == 1) {
		if (Level < 5) {
			SetColor(15);
			gotoxy(16, 26); printf(" 몬스터 [알] (을)를 쓰러트리지 못했다.(강화수치가 낮습니다.)");
			gotoxy(16, 27); printf(" 2 GOLD를 잃습니다.           ");
			gold = gold - 2;
			if (gold < 0) {
				gold = 0;
			}
			Sleep(2000);
		}
		else {
			SetColor(15);
			gotoxy(16, 27); printf(" 5 GOLD 가 드랍되었습니다.          ");
			gotoxy(16, 26); printf(" 몬스터 [알] 를 쓰러트렸다!!                                        ");
			gold = gold + 5;
			Sleep(2000);
		}
		h++;
		return round;
	}
	else if(u == 2) {
		SetColor(15);
		gotoxy(16, 27); printf("무사히 도망쳤다....           ");
		gotoxy(16, 26); printf("............................            ");
		Sleep(2000);

		h++;
		return round();
	}
	else {
        return menu();
	}
}
void MONSTER_C() {

	int n = 0;
	int m = 0;

	system("cls");

	dungeon_title();

	//c
	SetColor(15);
	char monsterd[15][15] = {
		{ 0,0,0,0,0,1,1,1,1,1,1,0,0,0,0 },
		{ 0,0,0,0,1,0,0,0,0,0,0,1,0,0,0 },
		{ 0,1,1,1,0,0,0,0,1,1,0,0,1,0,0 },
		{ 1,0,0,0,0,0,0,0,0,1,1,0,1,0,0 },
		{ 1,0,0,0,0,0,0,0,1,1,1,0,1,0,0 },
		{ 1,0,0,0,0,1,1,0,0,0,0,0,1,0,0 },
		{ 0,1,1,1,1,0,0,0,0,0,0,0,1,0,0 },
		{ 0,1,0,0,0,0,0,1,1,0,0,1,0,0,0 },
		{ 0,0,1,1,1,1,1,0,1,1,0,1,0,0,0 },
		{ 0,1,0,0,1,0,0,1,0,0,0,0,1,0,0 },
		{ 0,1,1,1,1,0,0,1,1,1,1,0,1,0,0 },
		{ 0,0,0,0,1,1,0,0,0,0,1,0,0,1,0 },
		{ 0,0,1,1,0,0,1,1,1,1,0,0,0,1,0 },
		{ 0,1,0,1,0,0,1,0,1,0,1,0,1,0,1 },
		{ 0,1,1,1,1,1,1,0,1,1,1,1,1,1,1 }
	};

	for (n = 0; n < 15; n++) {
		gotoxy(80, 6 + n);
		for (m = 0; m < 15; m++) {
			if (monsterd[n][m] == 1) {
				printf("■");
			}
			if (monsterd[n][m] == 0) {
				printf("  ");
			}
		}
		printf("\n");
	}

	SetColor(15);
	gotoxy(16, 27); printf(" 1. 싸운다	2. 도망친다");
	gotoxy(16, 26); printf(" 야생의 새끼 몬스터가 습격해왔다.(다른 키를 누를 시 던전을 나간다) : ");
	scanf("%d", &y);
	Sleep(1000);

	if (y == 1) {
		if (Level < 10) {
			SetColor(15);
			gotoxy(16, 27); printf("3 GOLD 잃습니다.          ");
			gotoxy(16, 26); printf("새끼 몬스터를 쓰러트리지 못했다.(강화수치가 낮습니다.)              ");
			gold = gold - 3;
			if (gold < 0) {
				gold = 0;
			}
			Sleep(2000);
		}
		if (Level >= 10) {
			SetColor(15);
			gotoxy(16, 27); printf("7 GOLD 가 드랍되었습니다.          ");
			gotoxy(16, 26); printf("새끼 몬스터를 쓰러트렸다!!                                          ");
			gold = gold + 7;
			Sleep(2000);
		}
		h++;
		return round;
	}
	else if (y == 2) {
		SetColor(15);
		gotoxy(16, 27); printf("무사히 도망쳤다....           ");
		gotoxy(16, 26); printf("............................            ");
		Sleep(2000);

		h++;
		return round();
	}
	else {
        return menu();
	}
}
void MONSTER_B() {

	int n = 0;
	int m = 0;

	system("cls");

	dungeon_title();

	//B
	SetColor(15);
	char monsterd[15][15] = {
		{ 0,0,0,0,1,1,1,1,1,0,0,1,1,1,0 },
		{ 1,1,0,1,1,1,1,1,1,1,1,1,1,1,0 },
		{ 1,1,1,1,1,1,0,0,1,1,1,1,1,0,0 },
		{ 1,1,1,1,1,0,0,1,1,1,1,1,0,0,0 },
		{ 1,1,1,0,1,1,1,1,1,0,1,0,0,0,0 },
		{ 0,1,0,0,1,1,1,0,0,0,1,0,0,0,0 },
		{ 0,0,1,1,0,0,0,0,0,0,0,1,0,0,0 },
		{ 0,0,0,1,1,1,0,0,0,1,0,1,0,0,0 },
		{ 0,0,1,1,0,0,0,1,1,0,0,0,1,0,0 },
		{ 0,1,0,1,0,0,1,0,0,0,0,0,1,1,1 },
		{ 0,1,0,1,0,0,1,0,0,0,1,0,1,0,1 },
		{ 0,0,1,1,0,0,0,1,1,1,0,0,1,0,1 },
		{ 0,1,1,1,0,0,0,0,0,1,0,0,0,1,0 },
		{ 1,0,1,0,1,1,1,1,1,0,1,0,1,0,1 },
		{ 1,1,1,1,1,1,0,0,0,0,1,1,1,1,1 }
	};
	for (n = 0; n < 15; n++) {
		gotoxy(80, 6 + n);
		for (m = 0; m < 15; m++) {
			if (monsterd[n][m] == 1) {
				printf("■");
			}
			if (monsterd[n][m] == 0) {
				printf("  ");
			}
		}
		printf("\n");
	}

	SetColor(15);
	gotoxy(16, 27); printf(" 1. 싸운다	2. 도망친다");
	gotoxy(16, 26); printf(" 야생의 큰 몬스터가 습격해왔다.(다른 키를 누를 시 던전을 나간다) : ");
	scanf("%d", &o);
	Sleep(1000);

	if (o == 1) {
		if (Level < 15) {
			SetColor(15);
			gotoxy(16, 27); printf("5 GOLD 를 잃습니다.               ");
			gotoxy(16, 26); printf("큰 몬스터를 쓰러트리지 못했다.(강화수치가 낮습니다.)            ");
			gold = gold - 10;
			if (gold < 0) {
				gold = 0;
			}
			Sleep(2000);
		}
		if (Level >= 15) {
			SetColor(15);
			gotoxy(16, 27); printf("10 GOLD 가 드랍되었습니다.          ");
			gotoxy(16, 26); printf("큰 몬스터를 쓰러트렸다!!                                         ");
			gold = gold + 10;
			Sleep(2000);
		}
		h++;
		return round;
	}
	else if (o == 2) {
		SetColor(15);
		gotoxy(16, 27); printf("무사히 도망쳤다....           ");
		gotoxy(16, 26); printf("............................            ");
		Sleep(2000);
		h++;
		return round();
	}
	else {
        return menu();
	}
}
void MONSTER_A() {

	int n = 0;
	int m = 0;

	system("cls");

	dungeon_title();

	//A
	SetColor(15);
	char monsterd[15][15] = {
		{ 0,0,1,1,0,0,0,0,0,0,0,0,1,1,0 },
		{ 0,0,1,0,1,0,1,1,1,1,1,1,0,1,0 },
		{ 0,0,0,1,1,1,1,1,1,1,0,0,0,1,0 },
		{ 0,0,1,1,1,1,1,0,0,1,1,1,1,0,0 },
		{ 0,1,1,1,1,1,0,0,1,1,1,1,0,0,0 },
		{ 1,0,1,1,1,1,1,1,1,1,1,1,1,1,1 },
		{ 0,1,0,1,1,1,1,1,1,0,0,1,0,0,1 },
		{ 1,0,1,1,0,0,0,0,0,0,1,0,0,1,0 },
		{ 1,0,0,1,1,1,1,1,1,1,0,1,1,0,1 },
		{ 1,0,1,1,1,0,0,1,0,0,0,1,0,0,1 },
		{ 0,1,1,0,1,1,1,0,1,1,0,1,1,1,0 },
		{ 1,0,0,1,0,1,0,0,0,1,1,0,1,1,1 },
		{ 1,1,1,1,1,0,1,1,1,0,0,1,0,0,1 },
		{ 0,0,1,0,1,0,1,0,1,1,1,0,1,1,0 },
		{ 0,0,1,1,1,1,1,1,1,1,1,1,1,1,0 }
	};
	for (n = 0; n < 15; n++) {
		gotoxy(80, 6 + n);
		for (m = 0; m < 15; m++) {
			if (monsterd[n][m] == 1) {
				printf("■");
			}
			if (monsterd[n][m] == 0) {
				printf("  ");
			}
		}
		printf("\n");
	}

	SetColor(15);
	gotoxy(16, 27); printf(" 1. 싸운다	2. 도망친다");
	gotoxy(16, 26); printf(" 야생의 엄청 큰 몬스터가 습격해왔다.(다른 키를 누를 시 던전을 나간다) : ");
	scanf("%d", &p);
	Sleep(1000);

	if (p == 1) {
		if (Level < 20) {
			SetColor(15);
			gotoxy(16, 27); printf("7 GOLD를 잃습니다.  ㅠㅠ        ");
			gotoxy(16, 26); printf("엄청 큰 몬스터에게 당했습니다.(강화수치가 낮습니다.)              ");
			gold = gold - 7;
			if (gold < 0) {
				gold = 0;
			}
			Sleep(2000);
		}
		if (Level >= 20) {
			SetColor(15);
			gotoxy(16, 27); printf("30 GOLD 가 드랍되었습니다.          ");
			gotoxy(16, 26); printf("엄청 큰 몬스터를 쓰러트렸다!!                                   ");
			gold = gold + 30;
			Sleep(2000);
		}
		h++;
		return round;
	}
	else if (p == 2) {
		SetColor(15);
		gotoxy(16, 27); printf("무사히 도망쳤다....           ");
		gotoxy(16, 26); printf("............................                                          ");
		Sleep(2000);
		h++;
		return round();
	}
	else {
        return menu();
	}
}
void get_wood() {

	dungeon_title();

	int n = 0;
	int m = 0;

	char wood_dot[4][17] = {
		{ 1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,1,0 },
		{ 1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1 },
		{ 0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1 },
		{ 0,1,0,1,0,0,0,1,0,0,0,1,0,0,1,1,0 }
	};
	for (n = 0; n < 4; n++) {
		gotoxy(76, 12 + n);
		for (m = 0; m < 17; m++) {
			if (wood_dot[n][m] == 1) {
				printf("■");
			}
			if (wood_dot[n][m] == 0) {
				printf("  ");
			}
		}
		printf("\n");
	}
	SetColor(10);
	gotoxy(16, 27); printf(" 나무를 주웟다!!!              ");
	gotoxy(16, 26); printf("                                 ");

	wood++;

	Sleep(2000);

	h++;
	return round;
}
void bang() {

	dungeon_title();

	int n = 0;
	int m = 0;

	char bang_dot[5][18] = {
		{ 1,1,0,0,1,1,1,0,1,0,0,0,1,0,1,1,1,1 },
		{ 1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,0,0,0 },
		{ 1,1,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,1 },
		{ 1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1 },
		{ 1,1,0,0,1,0,1,0,1,0,0,1,1,0,1,1,1,1 }
	};
	for (n = 0; n < 5; n++) {
		gotoxy(76, 12 + n);
		for (m = 0; m < 18; m++) {
			if (bang_dot[n][m] == 1) {
				printf("■");
			}
			if (bang_dot[n][m] == 0) {
				printf("  ");
			}
		}
		printf("\n");
	}
	SetColor(12);
	gotoxy(16, 27); printf(" 꽝~~~ 골드를 잃습니다.        ");
	gotoxy(16, 26); printf("                                 ");

	gold = gold - 1;
	if (gold < 0) {
		gold = 0;
	}
	Sleep(2000);

	h++;
	return round;
}
void upgrade() {
	system("cls");

	upgrade_side();

	SetColor(8);
	gotoxy(2, 24);
	for (k = 0; k < 58; k++) {
		printf("■");
	}
	SetColor(15);
	gotoxy(44, 26); printf("강화소에 오신 걸 환영하네~");
	getc(stdin);

	system("cls");
	upgrade_side();
	SetColor(15);
	gotoxy(80, 4); printf("Lv : %d", Level);
	gotoxy(90, 4); printf("나무 : %d", wood);
	gotoxy(100, 4); printf("골드 : %d", gold);
	gotoxy(22, 13); printf("1. 검을 강화한다!");
	gotoxy(44, 13); printf("2. 대장장이와 이야기한다.");
	gotoxy(74, 13); printf("3. 나간다..");
	gotoxy(44, 26); printf("원하는 메뉴를 선택하게나 : ");
	scanf("%d", &t);

	switch (t) {
	case 1:
	    if (Level == 0) {
            wood = wood - 1;
            if (wood < 0) {
                system("cls");
                upgrade_side();
                gotoxy(40, 15); printf("나무가 부족합니다. 상점 또는 던전에서 얻을 수 있습니다.");
                Sleep(1000);
                wood = 0;
            }
	    }
		reinforce();
		break;
	case 2:
		talk();
		break;
	case 3:
		return menu();
	default:
		return upgrade();
	}
	getc(stdin);

	return menu();
}
void upgrade_side() {


	int i;

	SetColor(8);
	gotoxy(2, 2);
	for (i = 0; i<59; i++) {
		printf("■");
	}
	gotoxy(2, 29);
	for (i = 0; i<59; i++) {
		printf("■");
	}
	gotoxy(2, 4);
	for (i = 0; i < 27; i++) {
		gotoxy(2, i + 3);
		printf("■");
	}
	gotoxy(118, 4);
	for (i = 0; i < 27; i++) {
		gotoxy(118, i + 3);
		printf("■");
	}
}
void reinforce() {

	system("cls");

	upgrade_side();

	if(Level < 5) {
        sword_dot1();
	}
	else if (Level >= 5 && Level < 10) {
        sword_dot2();
	}
	else if (Level >= 10 && Level < 15) {
        sword_dot3();
	}
	else {
        sword_dot4();
	}

	gotoxy(45, 27); printf("강화 하시겠습니까? (yes or no) : ");
	scanf("%s", yorn);

	if (!strcmp(yorn, "no")) {
		return upgrade();
	}
	else if (!strcmp(yorn, "yes")) {
        if(Level < 5) {
            c = 2;
            result();
        }
        else if (5 <= Level &&  10 > Level) {
            c = 3;
            result();
        }
        else if (10 <= Level &&  15 > Level) {
            c = 4;
            result();
        }
        else{
            c = 5;
            result();
        }
	}
	else {
		return reinforce();
	}
}
void sword_dot1() {

	int n = 0;
	int m = 0;

	SetColor(15);
	char sword1[19][19] = {
		{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1 },
		{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1 },
		{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0 },
		{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0 },
		{ 0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0 },
		{ 0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0 },
		{ 0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0 },
		{ 0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0 },
		{ 0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0 },
		{ 0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0 },
		{ 0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0 },
		{ 0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0 },
		{ 0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0 },
		{ 0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0 },
		{ 0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0 },
		{ 0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
		{ 0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
		{ 1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
		{ 1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 }
	};
	for (n = 0; n < 19; n++) {
		gotoxy(49, 4 + n);
		for (m = 0; m < 19; m++) {
			if (sword1[n][m] == 1) {
				printf("/");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
	SetColor(15);
	gotoxy(80, 4); printf("Lv : %d", Level);
	gotoxy(90, 4); printf("나무 : %d", wood);
	gotoxy(100, 4); printf("골드 : %d", gold);
	gotoxy(50, 25); printf("< 나무 막대기+ %d>", Level);
}
void sword_dot2() {

	int n = 0;
	int m = 0;

	SetColor(15);
	char sword2[19][19] = {
		{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1 },
		{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1 },
		{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0 },
		{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0 },
		{ 0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0 },
		{ 0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0 },
		{ 0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0 },
		{ 0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0 },
		{ 0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0 },
		{ 0,0,1,1,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0 },
		{ 0,0,0,1,1,0,0,1,1,1,0,0,0,0,0,0,0,0,0 },
		{ 0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0 },
		{ 0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0 },
		{ 0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0 },
		{ 0,0,0,1,0,1,0,1,1,0,0,0,0,0,0,0,0,0,0 },
		{ 0,0,1,0,1,0,0,0,1,1,0,0,0,0,0,0,0,0,0 },
		{ 0,1,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0 },
		{ 1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
		{ 1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 }
	};
	for (n = 0; n < 19; n++) {
		gotoxy(49, 4 + n);
		for (m = 0; m < 19; m++) {
			if (sword2[n][m] == 1) {
				printf("/");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
	SetColor(15);
	gotoxy(80, 4); printf("Lv : %d", Level);
	gotoxy(90, 4); printf("나무 : %d", wood);
	gotoxy(100, 4); printf("골드 : %d", gold);
	gotoxy(50, 25); printf("< 나무 막대기+ %d>", Level);
}
void sword_dot3() {

	int n = 0;
	int m = 0;

	SetColor(15);
	char sword3[19][19] = {
		{ 0,0,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,1,1 },
		{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1 },
		{ 0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,1,1,1,0 },
		{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0 },
		{ 0,0,0,0,0,0,1,0,0,0,0,0,0,1,1,1,0,0,0 },
		{ 1,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,1 },
		{ 0,0,0,0,0,0,0,1,0,0,0,1,1,1,0,0,0,0,0 },
		{ 0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0 },
		{ 0,1,0,0,0,0,0,0,0,1,1,1,0,0,0,0,1,0,0 },
		{ 0,0,1,1,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0 },
		{ 0,0,1,1,1,0,0,1,1,1,0,0,0,0,0,0,0,0,0 },
		{ 0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,0 },
		{ 0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0 },
		{ 0,0,0,0,1,1,1,1,0,0,0,0,0,0,1,0,0,0,0 },
		{ 0,0,0,1,0,1,1,1,1,0,0,0,0,0,0,0,0,1,0 },
		{ 0,0,1,0,1,0,0,1,1,1,0,0,0,0,0,0,0,0,0 },
		{ 0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,0,0 },
		{ 1,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0 },
		{ 1,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0 }
	};
	for (n = 0; n < 19; n++) {
		gotoxy(49, 4 + n);
		for (m = 0; m < 19; m++) {
			if (sword3[n][m] == 1) {
				printf("/");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
	SetColor(15);
	gotoxy(80, 4); printf("Lv : %d", Level);
	gotoxy(90, 4); printf("나무 : %d", wood);
	gotoxy(100, 4); printf("골드 : %d", gold);
	gotoxy(50, 25); printf("< 나무 막대기+ %d>", Level);
}
void sword_dot4() {

	int n = 0;
	int m = 0;

	SetColor(15);
	char sword4[19][19] = {
		{ 0,0,0,1,0,0,0,1,0,0,0,0,0,1,0,0,1,1,1 },
		{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1 },
		{ 0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,1,1,1,1 },
		{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0 },
		{ 0,0,0,0,0,0,1,0,0,0,0,0,1,1,1,1,1,0,0 },
		{ 1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,1 },
		{ 0,0,0,0,0,0,0,1,0,0,1,1,1,1,1,0,0,0,0 },
		{ 1,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0 },
		{ 1,1,0,0,0,0,0,0,1,1,1,1,1,0,0,0,1,0,0 },
		{ 0,1,1,1,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0 },
		{ 0,0,1,1,1,1,0,1,1,1,1,0,0,0,0,0,0,0,0 },
		{ 0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,1,0 },
		{ 0,0,1,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0 },
		{ 1,0,0,0,1,1,1,1,1,0,0,0,0,0,1,0,0,0,0 },
		{ 0,0,0,1,0,1,1,1,1,0,0,0,0,0,0,0,0,1,0 },
		{ 1,0,1,0,1,0,0,1,1,1,0,0,0,0,0,0,0,0,0 },
		{ 0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,0,0 },
		{ 1,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,1,0,0 },
		{ 0,1,0,0,0,0,0,1,0,0,1,1,0,0,0,0,0,0,0 }
	};
	for (n = 0; n < 19; n++) {
		gotoxy(49, 4 + n);
		for (m = 0; m < 19; m++) {
			if (sword4[n][m] == 1) {
				printf("/");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
	SetColor(15);
	gotoxy(80, 4); printf("Lv : %d", Level);
	gotoxy(90, 4); printf("나무 : %d", wood);
	gotoxy(100, 4); printf("골드 : %d", gold);
	gotoxy(50, 25); printf("< 나무 막대기+ %d>", Level);
}
void talk() {
	int n = 0;
	int m;

	system("cls");

	upgrade_side();
	SetColor(15);
	char talk[8][34] = { "Hello welcome~", "i'm J.J", "i'm the owner of here", "and brra~ brra~~...", ".....................","and then.. get your sword upgrade", "follow me! young boy!", "and i'll give you gold" };

	for (n = 0; n < 8; n++) {
		for (m = 0; m < 34; m++) {
			SetColor(15);
			gotoxy(50 + m, 12 + n);
			printf("%c", talk[n][m]);
			Sleep(70);
		}system("cls");
		upgrade_side();
	}
	gold = gold + 1;
	SetColor(15);
	gotoxy(45, 27); printf("대장장이로부터 1골드를 얻었다.");
	Sleep(1000);
	return upgrade();
}
void result() {
	system("cls");
	upgrade_side();
	SetColor(15);
	gotoxy(80, 4); printf("Lv : %d", Level);
	gotoxy(90, 4); printf("나무 : %d", wood);
	gotoxy(100, 4); printf("골드 : %d", gold);
	gotoxy(40, 27); printf("강화 하는데 골드 %d개가 소모됩니다.", c);
	Sleep(2000);
	if (gold < c) {
		system("cls");
		upgrade_side();
		SetColor(15);
		gotoxy(38, 15); printf("골드가 부족합니다. 상점이나 던전에서 얻을 수 잇습니다.");
		Sleep(2000);
		return reinforce();
	}
	else {
		gold = gold - c;

		srand((unsigned)time(NULL));

		b = rand() % 100;

		if (b < 99 - (1.5 * Level)) {
			Level = Level + 1;
			system("cls");
			upgrade_side();
			SetColor(15);
			gotoxy(45, 27); printf("강화에 성공하였습니다. 강화 수치를 얻습니다.");
			if(Level < 5) {
                sword_dot1();
            }
            else if (Level >= 5 && Level < 10) {
                sword_dot2();
            }
            else if (Level >= 10 && Level < 15) {
                sword_dot3();
            }
            else if (Level >= 15 && Level < 25){
                sword_dot4();
            }
            else {
                ending();
            }
			Sleep(2000);
			return reinforce();
		}
		else {
			Level = Level - 1;
			if(Level < 0) {
                Level = 0;
			}
			system("cls");
			upgrade_side();
			SetColor(15);
			gotoxy(45, 27); printf("강화에 실패하였습니다. 강화 수치를 잃습니다.");
			Sleep(2000);
			return reinforce();
		}
	}
    Sleep(2000);
	return reinforce();
}
void ending() {
    system("cls");

    gotoxy(50, 10); printf("++++ CONGRATULATIONS ++++");
    gotoxy(46, 15); printf("검 강화하기를 클리어 하셨습니다.");
    Sleep(5000);

    system("cls");
    gotoxy(50, 5); printf("학교          목포대학교 컴퓨터공학과\n"); Sleep(1000);
    gotoxy(50, 7); printf("강의          컴퓨터 프로그래밍 II\n");Sleep(1000);
    gotoxy(50, 9); printf("              제 2 분반\n");Sleep(1000);
    gotoxy(50, 11); printf("제작          정원민\n");Sleep(1000);
    gotoxy(50, 13); printf("블로그        https://blog.naver.com/dnjsals1998\n");Sleep(1000);
    gotoxy(50, 15); printf("참고 자료     https://github.com/ljh0326/Digimon_Tamagotchi_for_c\n");Sleep(1000);
    gotoxy(50, 17); printf("              https://m.blog.naver.com/PostView.nhn?blogId(생략)");Sleep(1000);
    gotoxy(50, 19); printf("              management.c\n");Sleep(1000);
    gotoxy(50, 21); printf("              maze.c\n");Sleep(1000);

    gotoxy(50, 25); printf("Thank U!");
    Sleep(5000);
    exit(0);
}

