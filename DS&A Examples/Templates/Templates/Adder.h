#pragma once

template <typename T>
class Adder
{
public:
	Adder(T value);

	void sum(T value);

private:
	T m_sum;
};

