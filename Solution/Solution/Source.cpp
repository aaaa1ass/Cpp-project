#include <iostream>
#include "Class Header/Marine.h"
#include "Class Header/Ghost.h"

using namespace std;

void Recovery(Unit * unit)
{
	unit->SetHP(200);
}

int main()
{
	// 업 캐스팅
	Marine marine;
	Ghost ghost;

	Unit* uptr = &marine;
	uptr->Skill();

	uptr = &ghost;
	uptr->Skill();

	Recovery(&marine);
	cout << "Marine HP: " << marine.GetHP() << endl;
	Recovery(&ghost);
	cout << "Ghost HP: " << ghost.GetHP() << endl;

	return 0;
}

