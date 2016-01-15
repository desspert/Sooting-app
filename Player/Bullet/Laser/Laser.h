#include "../../../Share.h"
#include "../Bullet.h"

class Laser : public Bullet{
private:
	float speed;
	float angle;
public:
	Laser(Vec2f pos, Vec2f size);
	void Update(Vec2f enemy_pos);
	void Draw();
};