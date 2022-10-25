#include <string>

class Tips
{
public:
	Tips();

	void Foo();
protected:
	std::string m_advice[3] = { "one", "two", "three" };
private:
};
