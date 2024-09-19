#include <iostream>
#include<glm/glm.hpp>
#include<json/json.h>
using namespace std;


int main(int argc, char* argv[])
{
	cout << "Hello, World!" << endl;
	glm::vec3 a(1, 2, 3);
	glm::vec3 b(4, 5, 6);
	//no homo
	auto sum = a + b;

	cout << "sum is(" << sum.x << ',' << sum.y << ',' << sum.z << ')' << endl;
	return EXIT_SUCCESS;
}