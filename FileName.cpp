#include <iostream>
using namespace std;

// Charactor ��ɫ������

class Charactor
{
private:
	float CharactorGrade;
public:
	Charactor(){}
	Charactor(float charactor):CharactorGrade(charactor){}

	float putCharactorGrade() { return CharactorGrade; }
};

// Enemy ����������

class Enemy
{
private:
	float EnemyGrade;
public:
	Enemy(){}
    Enemy(float enemyGrade):EnemyGrade(enemyGrade){}

	float putEnemyGrade() { return EnemyGrade; }
};

// Pressing force ѹ����������

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

	              // ��ɫ�ȼ�+20
     //	        //��������������������  =  �ȼ�ѹ��
	            // ��ɫ�ȼ�+���˵ȼ�+40


	//�ȼ�ѹ�ƺ�ԭ�˺�ֱ�ӳ��㣬���㷽ʽ��ԭ�˺�*�ȼ�ѹ��

	//�ȼ�ѹ�� < 50%�����ֵ���ѹ�ƽ�ɫ  �˺�����
	//�ȼ�ѹ�� > 50%�����ֽ�ɫѹ�Ƶ���  �˺�����
}

//Pressing_force ���⺯��

Pressing_force::Pressing_force()
{
	int charactorGrade,enemyGrade;
	cout << "�����ɫ�ȼ���";
	cin >> charactorGrade;
	cout << "������˵ȼ���";
	cin >> enemyGrade;
	cout << "--------------------------" << endl;
    Pressing_force(charactorGrade, enemyGrade);
}
Pressing_force::Pressing_force(float charactorGrade, float enemyGrade)
	:Charactor(charactorGrade),Enemy(enemyGrade)
{
	Grade_suppression=(putCharactorGrade() + 20.f) / (putCharactorGrade() + putEnemyGrade() + 40.f);
	cout << "�ȼ�ѹ��=" << Grade_suppression << endl;
}