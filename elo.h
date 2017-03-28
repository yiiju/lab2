#include<cmath>
using namespace std;
class Elo{
	public:
		Elo();
		Elo(float,float,float);
		void set(float,float,float);
		void set_sa(float);
		float getk();
		float getRa();
		float getRb();
		float getSa();
		void Ea();
		void Eb();
		void Ra();
		void Rb();
	private:
		float ek,eR_a,eR_b;
		float eS_a,eS_b,E_a,E_b;
};
