class Player
{

private:
	Armour armour;
	Room currentRoom;
	Integer focus;
	Integer health;
	Item items;
	Integer level;
	String name;
	Integer strength;
	Weapon weapon;
	Integer xp;

public:
	void dropArmour();

	void dropWeapon();

	void pickupArmour();

	void pickupWeapon();

	void player(int Room);
};
