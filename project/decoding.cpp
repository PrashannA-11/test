#include <iostream>
#include "huffman.h"
using namespace std;

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		cout << "Failed to detect files." << endl;
		exit(1);
	}
	huffman h(argv[1], argv[2]);
	h.recreate_huffman_tree();
	h.decoding_s();
	cout <<"Your file has been decompressed successfully"<< endl;
	return 0;
}