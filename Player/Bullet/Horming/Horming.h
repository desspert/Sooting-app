#include "../Bullet.h"
#include "../../../Share.h"

class Horming : public Bullet{
private:
	float speed;
	float angle;
	int count;
public:
	Horming(Vec2f pos, Vec2f size);
	void Update(Vec2f enemy_pos);
	void Draw();
};