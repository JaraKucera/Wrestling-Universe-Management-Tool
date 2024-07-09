#include <string>
#include "Affinity.cpp"
#include "Brand.cpp"

class Wrestler {
private:
	std::string name;
	Affinity affinity;
	Brand brand;
public:
	Wrestler(std::string input_name, Affinity input_affinity, Brand input_brand) {
		name = input_name;
		affinity = input_affinity;
		brand = input_brand;
	}
	std::string get_name() { return this->name; }
	std::string to_string() { return this->name + " : "+ (ToString(this->affinity)) + " : " + (ToString(this->brand)) + "\n"; }
	void print() { printf((this->name + " : " + (ToString(this->affinity)) + " : " + (ToString(this->brand)) + "\n").c_str());}
	


};
