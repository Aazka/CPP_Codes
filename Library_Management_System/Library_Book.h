#pragma once
class Library_Book
{
	char*title;
	char*author;
	int ID;
public:
	Library_Book(void);
	Library_Book(char*,char*,int);
	void set_ID(int);
	int get_ID();
	void set_title(char*);
	char*get_title()const;
	void set_author(char*);
	char* get_author()const;
	~Library_Book(void);
};

