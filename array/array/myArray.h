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

	//�������Ϊ���򷵻�true
	bool isEmpty()
	{
		return size == 0;
	}

	//̽Ѱ��Ԫ��
	bool isEmpty(int index)
	{
		return p[index] == NULL;
	}

	//��ȡ����Ԫ�ظ���
	int getSize()
	{
		return size;
	}

	//�������Ԫ��
	void add(int e)
	{
		if (size > length)
		{
			std::cout << "��������" << std::endl;
			return;
		}
		p[size] = e;
		size++;
	}
	//��index�����Ԫ��
	void add(int index, int e)
	{
		//����Խ���ж�
		if (index > length)
		{
			std::cout << "Array index overflow" << std::endl;
			return;
		}
		//�ж�������Ԫ���Ƿ�Ϊ��
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

	//��ȡ����index����Ԫ��
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
