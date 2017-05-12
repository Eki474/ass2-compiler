#include "../include/Node.h"

Node::Node(std::string t, std::string v) : tag(t), value(v) { id = counter++; }
Node::Node() { tag="uninitialised"; value="uninitialised"; } // Bison needs this.
long Node::counter = 1;

void Node::dump(int depth) 
{
	for(int i=0; i<depth; i++)
		std::cout << " ";
	std::cout << tag << ":" << value << std::endl;
	for(auto i=children.begin(); i!=children.end(); i++)
		(*i).dump(depth+1);
}

void Node::tree(std::ofstream& myfile) 
{
	for(auto i=children.begin(); i!=children.end(); i++){
		myfile << "{" << id << " [label=\"" << tag << "_" << value << "\"]}->" << "{" << (*i).id << " [label=\"" << (*i).tag << "_" << (*i).value << "\"]};\n";
		(*i).tree(myfile);
	}
}