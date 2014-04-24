#include "Node.h"

Node::Node()
{
	nodeID = 0;
	xPos = 0;
	yPos = 0;
	nodeName = "0";
}

Node::Node(int id, int x, int y, std::string name)
{
	nodeID = id;
	xPos = x;
	yPos = y;
	nodeName = name;
}

Node::~Node()
{}
