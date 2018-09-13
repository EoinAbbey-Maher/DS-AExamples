#include "Adder.h"

template <typename T>
Adder<T>::Adder(T value) : m_sum(value)
{

}

template <typename T>
void Adder<T>::sum(T value)
{
	m_sum += value;
}

//explicit template instanciation
//Only needed if splitting between Header and CPP files
template class Adder<int>;
template class Adder<float>;
