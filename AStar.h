#pragma once
#ifndef ASTAR_H
#define ASTAR_H

#include <vector>
#include "NodeRecord.h"

class AStar
{
	public:
		AStar();
		void addNodeToOpenList(Node *node);
		void addNodeToClosedList(Node *node);
		~AStar();
	private:
		std::vector<NodeRecord*> openList;
		std::vector<NodeRecord*> closedList;
};

#endif
