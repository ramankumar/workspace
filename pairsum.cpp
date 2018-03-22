/* find the pair of two values whose value is X */
#include<iostream>
#include<map>
#include<iterator>
using namespace std;

int pairsum(int *array, int k, int size);
int pairsum(int *array, int k, int size)
{
	map <int, int> hashmap;
	for(int i=0; i<size; i++)
	{
		hashmap.insert(pair <int, int> (array[i], 1));
	}
	//map <int, int> :: iterator itr;
	for(int i=0; i < size; i++)
	{
		if(hashmap.find(k - array[i]) == 1)
			cout << "("<< k<<"," << array[i] <<")" << endl;
	}
}
int main(int argc, char *argv[])
{
	int array = {4,2,5,6,8,9,1}
	pairsum(array, 10, 7);
}

