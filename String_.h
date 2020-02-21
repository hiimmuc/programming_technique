class string {
private:
	char* str;
public:
	string();
	string(const char* s);
	~string();
	void set(const char* s);
	const char* set();
};