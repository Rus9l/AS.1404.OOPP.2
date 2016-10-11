#pragma once
class shadrina
{
public:
	void F1();
	virtual void F2();
	shadrina();
	~shadrina();
};

class elina : public shadrina
{
public:
	elina();
	~elina();
	void F1();
	virtual void F2();
};

