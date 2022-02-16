#pragma once
class Money
{
private:
	int first;
	int second;
public:
	int GetFirst() const { return first; }
	unsigned int GetSecond() const { return second; }
	void SetFirst(int value);
	void SetSecond(int value);
	bool Init(int x, int y);
	void Display() const;
	void Read();
	void summa();
};