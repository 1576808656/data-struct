#pragma once
#ifndef myArray

class Array
{
private:
	int* p;
	int size;
	int length;

public:
	Array(int length = 10)
	{
		p = new int[length];
		this->length = length;
		for (int i = 0; i < length; i++)
			p[i] = NULL;
		size = 0;
	}

	~Array()
	{
		std::cout << "deleting the array..." << std::endl;
		delete[] p;
	}

	//如果数组为空则返回true
	bool isEmpty()
	{
		return size == 0;
	}

	//探寻空元素
	bool isEmpty(int index)
	{
		return p[index] == NULL;
	}

	//获取数组元素个数
	int getSize()
	{
		return size;
	}

	//添加数组元素
	void add(int e)
	{
		if (size > length)
		{
			std::cout << "数组已满" << std::endl;
			return;
		}
		p[size] = e;
		size++;
	}
	//在index处添加元素
	void add(int index, int e)
	{
		//索引越界判断
		if (index > length)
		{
			std::cout << "Array index overflow" << std::endl;
			return;
		}
		//判断索引处元素是否为空
		if (p[index] != NULL)
		{
			for (int i = index; i < length; i++)
			{
				if (isEmpty(i))
				{
					for (int j = i; j > index; j--)
					{
						p[j] = p[j - 1];
					}
					p[index] = e;
					size++;
					return;
				}
			}
			std::cout << "There are no empty elements to move" << std::endl;
			return;
		}
		else
		{
			p[index] = e;
			size++;
		}
	}

	//获取索引index处的元素
	int get(int index)
	{
		if (index >= length)
		{
			std::cout << "array index overflow" << std::endl;
			return -1;
		}
		return p[index];
	}

	void remove(int index)
	{
		p[index] == NULL;
		size--;
		return;
	}
};


#endif
