#include <iostream>
using namespace std;

// Charactor 角色类主体

class Charactor
{
private:
	float CharactorGrade;
public:
	Charactor(){}
	Charactor(float charactor):CharactorGrade(charactor){}

	float putCharactorGrade() { return CharactorGrade; }
};

// Enemy 敌人类主体

class Enemy
{
private:
	float EnemyGrade;
public:
	Enemy(){}
    Enemy(float enemyGrade):EnemyGrade(enemyGrade){}

	float putEnemyGrade() { return EnemyGrade; }
};

// Pressing force 压制力类主体

class Pressing_force:public Charactor,public Enemy
{
private:
	float Grade_suppression;
public:
	Pressing_force();
	Pressing_force(float charactorGrade, float enemyGrade);
};

int main()
{
	Pressing_force pressing;
	cout << "---------------------" << endl;

	system("pause");

	              // 角色等级+20
     //	        //——————————  =  等级压制
	            // 角色等级+敌人等级+40


	//等级压制和原伤害直接乘算，计算方式：原伤害*等级压制

	//等级压制 < 50%：表现敌人压制角色  伤害更低
	//等级压制 > 50%：表现角色压制敌人  伤害更高
}

//Pressing_force 类外函数

Pressing_force::Pressing_force()
{
	int charactorGrade,enemyGrade;
	cout << "输入角色等级：";
	cin >> charactorGrade;
	cout << "输入敌人等级：";
	cin >> enemyGrade;
	cout << "--------------------------" << endl;
    Pressing_force(charactorGrade, enemyGrade);
}
Pressing_force::Pressing_force(float charactorGrade, float enemyGrade)
	:Charactor(charactorGrade),Enemy(enemyGrade)
{
	Grade_suppression=(putCharactorGrade() + 20.f) / (putCharactorGrade() + putEnemyGrade() + 40.f);
	cout << "等级压制=" << Grade_suppression << endl;
}