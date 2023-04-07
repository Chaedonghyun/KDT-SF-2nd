#include <iostream>

using namespace std;

class character
{
	string name;
	int level;
	int item_num;
	int hp;
	string monster;
public:
	
	character(string name) {
		this->name = name;
	}

	int getHp() {
		return hp;
	}

	void setHp(int hp) {
		this->hp = hp;
		cout << hp << " ";
	}
	

	int getLevel() {
		//cout << "level:" << level;
		return level;
	}

	void setLevel(int level) {
		this->level = level;
		cout << "level:" << level <<" ";
	}

	int getItem() {
		//cout << "level:" << level;
		return item_num;
	}

	void setItem(int item_num) {
		this->item_num = item_num;
		cout << "item숫자" << item_num;
	}

	string getName() {
		//cout << "level:" << level;
		return name;
	}

	void setName(string name) {
		this->name = name;
		cout << "새로 지은 이름" << name;
	}

	string getMonster() {
		return monster;
	}

	void setMonster(string monster) {
		this->monster = monster;
		cout << monster << "를 공격합니다";
	}
	
	/*void levelUp() {
		cout << "레벨업!";
		++level;
	}*/
};



int main()
{
	string name;
	
	cout << "이름을 입력해주세요";
	cin >> name;
	cout << name<<"입니다\n";

	int num=1;
	int level = 0;
	int item_num = 0;
	int hp = 100;
	string monster ;

	
	character c(name);
	while (true)
	{
		cout << "어떤 동작을 실현 실행시키겠습니까? (0:종료)\n";
		cin >> num;

		if (num == 0)
		{
			cout << "게임 종료";
			break;
			
		}
		else if (num==1)
		{
			cout << "새이름을 입력해주세요:\n";
			cin >> name;
			c.setName(name);
		}
		else if (num==2)
		{
			cout << "level up!\n";
			c.setLevel(++level);
			c.setHp(hp =hp+50);

		}
		else if (num == 3)
		{
			cout << "아이템줍기\n";
			c.setItem(++item_num);
		}
		else if (num == 4) {
			cout << "아이템 사용하기\n";
			if (c.getItem() == 0)
			{
				cout << "아이템이 없음\n";
			}
			else {
				c.setItem(--item_num);
			}
			
		}
		else if (num == 5) {
			cout << "몬스터를 선택하세요";
			cin >> monster;
			//c.setHp(hp - 10);
			c.setLevel(++level);
		}
		else if (num==6) {
            cout << "이름" << c.getName() << endl;
			cout << "레벨" << c.getLevel() << endl;
			cout << "hp" << c.getHp() << endl;
			cout << "아이템수" << c.getItem() << endl;
		}

		
		
		
		
	}
    
}

