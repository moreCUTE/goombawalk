#include<iostream>
using namespace std;


class Goomba {
private:
	int xpos;
	int ypos;
	char dir;
public:
	Goomba(int x, int y);
	void walk();
	void print();
};


int main() {
	
	
	Goomba g1(400, 400);

	while (1) {
		g1.walk();
		g1.print();
		system("pause");
	}
	
}

Goomba::Goomba(int x, int y) {
	xpos = x;
	ypos = y;
	dir = 'l';

}

void Goomba::walk()
{
	if (xpos <= 0)
		dir = 'r';
	if (xpos >= 400)
		dir = 'l';
	if (dir == 'r')
		xpos += 10;
	if (dir == 'l')
		xpos -= 10;
}

void Goomba::print()
{
	cout << "i goomba i be at " << xpos << ", " << ypos << endl;
}
