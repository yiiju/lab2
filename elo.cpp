#include"elo.h"
Elo::Elo(){ ek=0; eR_a=0; eR_b=0; }
Elo::Elo(float k,float R_a,float R_b){
	set(k,R_a,R_b);
}
void Elo::set(float k,float R_a,float R_b){
	ek=k;
	eR_a=R_a;
	eR_b=R_b;
}
void Elo::set_sa(float S_a){
	eS_a=S_a;
}
float Elo::getk(){
	return ek;
}
float Elo::getRa(){
	return round(eR_a);
}
float Elo::getRb(){
	return round(eR_b);
}
float Elo::getSa(){
	return eS_a;
}
void Elo::Ea(){
	E_a=1/(1+pow(10,(getRb()-getRa())/400));
}
void Elo::Eb(){
	E_b=1/(1+pow(10,(getRa()-getRb())/400));
}
void Elo::Ra(){
	eR_a+=getk()*(getSa()-E_a);
}
void Elo::Rb(){
	if(getSa()==1) eS_b=0;
	else if(getSa()==0.5) eS_b=0.5;
	else eS_b=1;
	eR_b+=getk()*((eS_b)-E_b);
}
