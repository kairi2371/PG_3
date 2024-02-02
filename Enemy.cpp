#include "Enemy.h"
#include <Windows.h>
#include <stdio.h>


void (Enemy::* Enemy::fhaseTable[])() = {
	&Enemy::Approach, //0
	&Enemy::Shooting, //1
	&Enemy::Leave	  //2
};


void Enemy::Update()
{

	(this->*fhaseTable[static_cast<size_t>(phase_)])();

}

void Enemy::Approach()
{
	printf("�G���ڋ߂��Ă����B\n");

	Sleep(3 * 1000);

	phase_ = Phase::SHOOTING;

}

void Enemy::Shooting()
{
	printf("�G�������Ă����B\n");

	Sleep(3 * 1000);

	phase_ = Phase::LEAVE;

}

void Enemy::Leave()
{
	printf("�G�����E�����B\n");

	count = true;

}