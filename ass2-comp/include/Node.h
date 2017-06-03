#include <list>
#include <iostream>
#include <sstream>
#include <fstream>

#ifndef NODE_H
#define NODE_H

class Node {
	public:
		std::string tag, value;
		long id;
		std::list<Node> children;
		Node(std::string t, std::string v);
		Node(); // Bison needs this.
		static long counter;

		void dump(int depth=0);

		void tree(std::ofstream& myfile);
};
#endif