/*
Ibrahim Lawal



*/

#include <iostream>
#include <vector>
#include <string>
#include "Vector.h"
#include <algorithm>
#include <numeric>

int RunTests()
{
	int InstantiateVectors();
	int VectorAndAlgorithms();
	int VectorAndAlgorithmsAndLambda();
	int VectorFill();
	int Fill0123(std::vector<int> & v);

	VectorFill();
	return 0;
}


#include <iostream>		// cout, endl
#include <vector>		// vector
#include <algorithm>	// sort, count, max_element, for_each
#include <numeric>
#include <random>
#include "Vector.h"// accumulate



int InstantiateVectors()
{
	std::cout << "*** Intantiate Vectors ***" << std::endl;
	std::vector<std::string> v1(10);

	v1.at(0) = "Joe";
	v1[0] = "Jack";
	//v1[100] = "Jill";
	//v1.at(100);

	std::cout << "Size: " << std::endl;
	std::cout << v1.size() << std::endl;
	std::cout << "Elements: " << std::endl;
	for (auto const& r : v1)
		std::cout << r << " ";

	std::cout << std::endl << std::endl;

	std::vector<double> v2{ 1.1, 2.2, -3.3, 4.4, 5.5 };
	v2.push_back(4.4);
	std::cout << "Size: " << std::endl;
	std::cout << v2.size() << std::endl;
	std::cout << "Elements: " << std::endl;
	for (auto const& r : v2)
		std::cout << r << " ";

	std::cout << std::endl << std::endl;

	std::vector<int> v3;
	std::cout << "Size: " << std::endl;
	std::cout << v3.size() << std::endl;
	std::cout << "Elements: " << std::endl;
	for (auto const& r : v3)
		std::cout << r << " ";
	v3.resize(10);
	std::cout << "Size: " << std::endl;
	std::cout << v3.size() << std::endl;
	std::cout << "Elements: " << std::endl;
	for (auto const& r : v3)
		std::cout << r << " ";



	return 0;
}

int VectorsAndAlgorithms()
{
	std::cout << "*** Vectors & Algorithms ***" << std::endl;

	std::vector<int> v{ 1, 9, 4, 5 };

	for (auto const& r : v)
		std::cout << r << " ";
	std::cout << std::endl;

	std::sort(v.begin(), v.end());
	for (auto const& r : v)
		std::cout << r << " ";

	std::cout << "Count:" << std::endl;
	std::cout << std::count(v.begin(), v.end(), 6) << std::endl;

	std::cout << *std::max_element(v.begin(), v.end());

	std::cout << std::endl;
	std::cout << std::accumulate(v.begin(), v.end(), 0);

	return 0;
}

int PrintFunction(int e)
{
	 std::cout << e << " ";
	return 0;
}

int VectorsAndAlgorithmsAndLambdas()
{
	int offset = 10;;

	std::cout << "*** Vectors & Algorithms & Lambdas ***" << std::endl;
	std::vector<int> v{ 1, 2, 3, 4, 5 };
	//Demonstarting for_each with lambda function
	//std::for_each(v.begin(), v.end(), [](const int e) { std::cout << e << " "; });
	//Demonstarting for_each with standard function
	std::for_each(v.begin(), v.end(), PrintFunction); 

	//std::for_each(v.begin(), v.end(), [](int& e) { e++; });
	//std::cout << std::endl;

	//std::for_each(v.begin(), v.end(), [](const int e) { std::cout << e << " "; });


	return 0;
}


int VectorFill()
{
	std::vector<int> v;
	v.resize(10);


	Fill0123(v);
	for (auto const& r : v)
		std::cout << r << " ";

	FillRand(v);
	for (auto const& r : v)
		std::cout << r << " ";

	
	

	
	return 0;
	
	
		



	
}

int Fill0123(std::vector<int> &v)//Pass by reference
{
	//int val = 0;
	//for (auto& r : v)
		//r = val++; //prints the number 0 - 10 using for loop
	
	
	//for_each(v.begin(), v.end(), [](int& e) {static int val = 0; e = val++; }); //prints the number 0 - 10 using for each

	std::iota(v.begin(), v.end(), 0);//same thing
	return 0;
}

int FillRand(std::vector<int>& v)
{
	static std::default_random_engine e;
	static std::uniform_int_distribution <int> u(0, 9);

	for (auto & r : v)
		r = u(e);
	
	return 0;

}

/*int FillRand_Double(double M, double N) 
{
	M = 200;
	N = 20;

	return M + (rand() / (RAND_MAX / (M - N)));
}*/
