#include "NodeRecord.h"

NodeRecord::NodeRecord()
{
	node = NULL;
	parent = NULL;
}

NodeRecord::~NodeRecord()
{
	delete parent;
}
