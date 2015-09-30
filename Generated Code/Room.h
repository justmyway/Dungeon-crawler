class Room
{

private:
	Corridor corridors;
	LinkedList enemies;
	Item items;
	HashMap<definition, RoomSpecification> specifications;
	Boolean visited;

public:
	Boolean getVisited();
};
