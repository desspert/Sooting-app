#include "../../../Share.h"
#include "../Bullet.h"

class Spread : public Bullet{
private:
	float speed;
	float angle;
	int amount;
public:
	Spread(Vec2f pos, Vec2f size,int amount);
	void Update(Vec2f enemy_pos);
	void Draw();
};