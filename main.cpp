#include "Node.h"

int main()
{
	Node::Node(1, 2, 3, "eka");
	Node::Node(2, 5, 10, "toka");
	Node::Node(3, 11, 22, "kolmas");

	std::cout << "Nodeja loytyny " << " kappaletta." << std::endl;

	return 0;
}
