#include "../../../Share.h"
#include "../Bullet.h"

class Raser : public Bullet{
private:
	float speed;
	float angle;
public:
	Raser(Vec2f pos, Vec2f size);
	void Update(Vec2f enemy_pos);
	void Draw();
};