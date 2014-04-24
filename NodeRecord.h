#pragma once
#ifndef NODERECORD_H
#define NODERECORD_H

#include "Node.h"

class NodeRecord
{
	public:
		NodeRecord();
		~NodeRecord();
	private:
		Node *node;
		NodeRecord *parent;
};

#endif
