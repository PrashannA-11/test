#include <iostream>
#include "huffman.h"
using namespace std;

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		cout << "Failed to detect files" << endl;
		exit(1);
	}
	huffman h(argv[1], argv[2]);
	h.create_pq();
	h.create_huffman_tree();
	h.huffman_codes();
	h.encoding_s();
	cout << "Compressed successfully"<<endl;
	return 0;
}