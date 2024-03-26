#include <bits/stdc++.h>

using namespace std;

const string WORD_LIST[]= {
 "angle", "ant", "apple", "arch", "arm", "army",
 "baby", "bag", "ball", "band", "basin", "basket", "bath", "bed", "bee", "bell", "berry", "bird", "blade", "board", "boat", "bone", "book", "boot", "bottle", "box", "boy",
 "brain", "brake", "branch", "brick", "bridge", "brush", "bucket", "bulb", "button",
 "cake", "camera", "card", "cart", "carriage", "chain", "cheese", "chest",
 "chin", "church", "circle", "clock", "cloud", "coat", "collar", "comb", "cord",
 "cow", "cup", "curtain", "cushion",
 "dog", "door", "drain", "drawer", "dress", "drop", "ear", "egg", "engine", "eye",
 "face", "farm", "feather", "finger", "fish", "flag", "floor", "fly",
 "foot", "fork", "fowl", "frame", "garden", "girl", "glove", "goat", "gun",
 "hair", "hammer", "hand", "hat", "head", "heart", "hook", "horn", "horse",
 "hospital", "house", "island", "jewel", "kettle", "key", "knee", "knife", "knot",
 "leaf", "leg", "library", "line", "lip", "lock",
 "map", "match", "monkey", "moon", "mouth", "muscle",
 "nail", "neck", "needle", "nerve", "net", "nose", "nut",
 "office", "orange", "oven", "parcel", "pen", "pencil", "picture", "pig", "pin",
 "pipe", "plane", "plate", "plow", "pocket", "pot", "potato", "prison", "pump",
 "rail", "rat", "receipt", "ring", "rod", "roof", "root",
 "sail", "school", "scissors", "screw", "seed", "sheep", "shelf", "ship", "shirt",
 "shoe", "skin", "skirt", "snake", "sock", "spade", "sponge", "spoon", "spring",
 "square", "stamp", "star", "station", "stem", "stick", "stocking", "stomach",
 "store", "street", "sun", "table", "tail", "thread", "throat", "thumb", "ticket",
 "toe", "tongue", "tooth", "town", "train", "tray", "tree", "trousers", "umbrella",
 "wall", "watch", "wheel", "whip", "whistle", "window", "wire", "wing", "worm",
 };
 
const int WORD_COUNT = sizeof(WORD_LIST) ;


string randTu()
{
	srand(static_cast<unsigned int>(time(0)));
	int chiSoNgauNhien = rand() % 100;
	string tuNgauNhien = WORD_LIST[chiSoNgauNhien];
 	return tuNgauNhien;

}

void giatreoco(int &doanSai,string tu){
	if(doanSai == 0){
		cout << " ----------- \n"
 				" | \n"
 				" | \n"
 				" | \n"
 				" | \n"
 				" | \n"
 				" ----- \n";
	}
	
	if(doanSai == 1){
		cout << " ----------- \n"
 				" |         |\n"
 				" | \n"
 				" | \n"
 				" | \n"
 				" | \n"
 				" ----- \n";
	}
	if(doanSai == 2){
		cout << " ----------- \n"
 				" |         |\n"
 				" |         0\n" 
 				" | \n"
 				" | \n"
 				" | \n"
 				" ----- \n";
	}
	if(doanSai == 3){
		cout << " ----------- \n"
 				" |         |\n"
 				" |         0\n"
 				" |         |\n"
 				" | \n"
 				" | \n"
 				" ----- \n";
	}
	if(doanSai == 4){
		cout << " ----------- \n"
 				" |         |\n"
 				" |         0\n"
 				" |        /| \n"
 				" | \n"
 				" | \n"
 				" ----- \n";
	}
	
	if(doanSai == 5){
		cout << " ----------- \n"
 				" |         |\n"
 				" |         0\n"
 				" |        /|\\n"
 				" | \n"
 				" | \n"
 				" ----- \n";
	}
	if(doanSai == 6){
		cout << " ----------- \n"
 				" |         |\n"
 				" |         0 \n"
 				" |        /|\ \n"
 				" |        / \ \n" 
 				" | \n"
 				" ----- \n";
	}
	
	if(doanSai == 7){
		cout << " ----------- \n"
 				" |         |\n"
 				" |         0\n"
 				" |        /|\ \n"
 				" |        / \ \n" 
 				" | \n"
 				" ----- \n";
 		cout<<"tu dung la: " << tu <<endl;
 		doanSai++;
	}
}

string tuDoanDuoc(string& s,string tu, char doan,int &doanSai){
	
	string k = s;
	
	for(int i = 0;i<tu.length();i++){
		if(tu[i] == doan){
			s[i] = doan;
		}
	}
	
	if(k==s){
		doanSai++;
	}

	
	return s;
}

void doanDung(string &tu,string &s,int &sai)
{
	if(tu == s)
	{
		cout <<"Ban da doan dung voi sai " << sai <<" lan!" << endl;
		cout << "Ban muon choi lai khong  :y/n ";
		string tl;
		cin >> tl;
		if(tl == "y") 
		{
			tu = randTu();
			s="";
			for(int i = 0;i<tu.length();i++){
				s+="_";
			}
			sai = 0;
		}
		else
		{
			return;
		}
	}	
}

int main(){
	cout << " ----------- \n"
 				" | \n"
 				" | \n"
 				" | \n"
 				" | \n"
 				" | \n"
 				" ----- \n";
	string tu = randTu();
	int doanSai = 0;
	
	string s;
	for(int i = 0;i<tu.length();i++){
		s+="_";
	}
	
	while(doanSai<=7&&s!=tu){
		
		cout << "ban doan ii : ";
		char doan; cin >> doan;
		
		cout << tuDoanDuoc(s,tu,doan,doanSai) << endl;
		cout << "so lan doan sai: "<< doanSai << endl<< endl;
		giatreoco(doanSai,tu);cout << endl;
		doanDung(tu,s,doanSai);
	}
	
	
}
