#include "Input.h"
#include <stdio.h>
#include <conio.h>


enum Key { KEY_UP = 72, KEY_DOWN = 80, KEY_LEFT = 75, KEY_RIGHT = 77, KEY_A = 'a', KEY_B = 'b' };
enum Bool { false = 0, true };//true는 0,false는 1
struct K {
	int Up; int Down; int Left; int Right; int A; int B;
<<<<<<< HEAD

};
struct K Kb[1] = { false,false,false,false,false,false };
=======
};
int Cng = 0;
struct K Kb= { false,false,false,false,false,false };//모든 방향키의 부울값을 false로 초기화

void MakeFalse() {
	switch (Cng) //Cng의 값에 따라 변화할 변수의 값을 지정
	{
	case KEY_UP:
		Kb.Up = false;
		Cng = false;
		printf("UP false\n");
		break;
	case KEY_DOWN:
		Kb.Down = false;
		Cng = false;
		printf("DOWN false\n");
		break;
	case KEY_LEFT:
		Kb.Left = false;
		Cng = false;
		printf("LEFT false\n");
		break;
	case KEY_RIGHT:
		Kb.Right = false;
		Cng = false;
		printf("RIGHT false\n");
		break;
	case KEY_A:
		Kb.A = false;
		Cng = false;
		printf("A KEY false\n");
		break;
	case KEY_B:
		Kb.B = false;
		Cng = false;
		printf("B KEY false\n");
		break;
	}

}
void KeyChange(int a) {//받은 인자에 따라 변경할 구조체 멤버 결정

	switch (a) {
	case KEY_UP:
		Kb.Up = true;
		Cng = KEY_UP;
		break;
	case KEY_DOWN:
		Kb.Down = true;
		Cng = KEY_DOWN;
		break;
	case KEY_LEFT:
		Kb.Left = true;
		Cng = KEY_DOWN;
		break;
	case KEY_RIGHT:
		Kb.Right = true;
		Cng = KEY_DOWN;
		break;
	case KEY_A:
		Kb.A = true;
		Cng = KEY_A;
		break;
	case KEY_B:
		Kb.B = true;
		Cng = KEY_B;
		break;
	}
}
void move() {
	if (Kb.Up == true) {
		printf("UP true \n");
		MakeFalse();
	}
	if (Kb.Down == true) {
		printf("DOWN true\n");
		MakeFalse();
	}
	if (Kb.Left == true) {
		printf("LEFT true\n");
		MakeFalse();
	}
	if (Kb.Right == true) {
		printf("RIHGT true\n");
		MakeFalse();
	}
	if (Kb.A == true) {
		printf("A KEY true\n");
		MakeFalse();
	}
	else if (Kb.B == true) {
		printf("B KEY true\n");
		MakeFalse();
	}

>>>>>>> parent of de92306... �빟媛꾩쓽 �닔�젙

Key KeyPush() {
	int Pkey = _getch();
	//방향키입력받기
	if (Pkey == 0 || Pkey == 224)
	{
		return (Key)KeyPush();
	}
	if (Pkey == KEY_UP || Pkey == KEY_DOWN || Pkey == KEY_LEFT || Pkey == KEY_RIGHT)
	{
		if (Pkey == KEY_UP)
			KeyChange(KEY_UP);
		if (Pkey == KEY_DOWN)
			KeyChange(KEY_DOWN);
		if (Pkey == KEY_LEFT)
			KeyChange(KEY_LEFT);
		else if (Pkey == KEY_RIGHT)
			KeyChange(KEY_RIGHT);
	}
	if (Pkey == 'a' || Pkey == 'A')
		KeyChange('a');
	else if (Pkey == 'b' || Pkey == 'B')
		KeyChange('b');
}

void KeyChange() {

}

void RcvSgn() {
	int i;
	for (i = 0; i < 6; i++)
	{
		if (Kb[i] == true)
	}
}

int main() {
<<<<<<< HEAD
	int x = 0, y = 0;
	struct K key;
	int Push;
=======
	
>>>>>>> parent of de92306... �빟媛꾩쓽 �닔�젙

	while (1)
	{
		KeyPush();
<<<<<<< HEAD
=======
		move();
>>>>>>> parent of de92306... �빟媛꾩쓽 �닔�젙
	};
	return 0;


}