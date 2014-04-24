#pragma once
#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <stdio.h>

class Node
{
	public:
		Node();
		Node(int id, int x, int y, std::string name);
		~Node();
	private:
		int nodeID, xPos, yPos;
		std::string nodeName;
};

#endif
