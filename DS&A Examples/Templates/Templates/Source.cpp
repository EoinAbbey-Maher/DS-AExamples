#include <iostream>
#include <array>
#include <algorithm>

#include "Adder.h"

//Template function to find the sum of some numbers
template <typename T>
T sum(T const* pArray, int const ELEMENTS) {
	T sum = 0;
	for (int index = 0; index < ELEMENTS; index++) {
		sum += pArray[index] * pArray[index];
	}
	return sum;
}

//Template function to find the largest Number
template<typename T>
T largestValue(T const * t_array, int const t_elements)
{
	T largest = 0;
	for (int i = 0; i < t_elements; i++)
	{
		if (i == 0)
		{
			largest = t_array[i];
		}
		else
		{
			if(t_array[i] > largest)
				{
				largest = t_array[i];
				}
		}
	}

	return largest;
}

//template to find the smallest number
template<typename T>
T smallestNumber(T const *pArray, int const t_elements)
{
	T smallest = 0;

	for (int i = 0; i < t_elements; i++)
	{
		if (i = 0)
		{
			smallest == pArray[i];
		}
		else
		{
			if (pArray[i] < smallest)
			{
				smallest = pArray[i];
			}
		}
	}
	return smallest;
}


//template 
template <typename T, T size>
T processArray(std::array<T, size> & arr)
{
	T smallest = arr[0];
	//Loop that goes through each element of the array
	std::for_each(std::begin(arr), //start of the array
				  std::end(arr), //end of the array
				  [&](T & const elem) //Lamda function
				{
					if (elem < smallest)
					{
						smallest = elem;
					}
	});
	return smallest;

}

//Program entry point
int main() {

	//Using adder template function
	Adder<int> adder(0);
	adder.sum(10);
	adder.sum(20);

	//Setting up arrays to use for Largest and Smallest function
	int const ELEMENTS = 10;
	int intArray[] = { 1,2,3,4,5,6,7,8,9,10 };
	float floatArray[] =
	{ 1.1f,2.2f,3.3f,4.4f,5.5f,6.6f,7.7f,8.8f,9.9f,10.1f };
	std::cout << "Sum of squares of integer array: " <<
		sum(intArray, ELEMENTS) << std::endl;
	std::cout << "Sum of squares of float array: " <<
		sum(floatArray, ELEMENTS) << std::endl;
		
	//Setting up and passing standard array throuogh template functions
	std::array<int, 5> stdArray = { 1,4,-1,-4,5};
	
	std::cout << "smallest number in array is :" << processArray<int, 5>(stdArray) << std::endl;
	
	std::cout << "Largest number is :" << largestValue(floatArray, ELEMENTS) << std::endl;

	/*bool boolArray[] = { true,true ,true ,true ,true ,false,false ,false ,false ,false };
	std::cout << "sum of bools: " << sum(boolArray, ELEMENTS);
	*/
	std::system("pause");
}