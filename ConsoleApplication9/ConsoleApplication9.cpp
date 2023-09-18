#include<iostream>
using namespace std;
class Man {
private:
	int hungry;
public:
	void setHugry(int newhungry) {
		if (newhungry >= 0) {
			hungry = newhungry;
		}
	}
	int getHungry() {
		return hungry;
	}
	string name;
	const int number_of_hands = 2;
	const int number_of_eyes = 2;
public:
	void Pick_Up(Mobile_phone& what) {
		cout << "Телефон в руках)" << endl;
	}
public:
	string eye_color = "grean";
	string fur_color = "black";

public:
	void Dance() {
		if (hungry >= 70) {
			cout << "Я голодный!" << endl;
		}
		if (hungry < 70) {
			cout << name << "танцюэ" << endl;
		}
	}
public:
	void StopDance() {
		cout << "Микита припинив танцювати" << endl;
	}
public:
	void Walk() {
		cout << "Микита пiшов" << endl;
	}
public:
	void DoHomework() {
		cout << "Микита почав виконувати домашне завдання" << endl;
	}
public:
	void Musick(string executor) {
		cout << "Микта почав слухати музику" << executor << endl;
	}
};
class Room {
private:
	int bed_condition;
public:
	void set_bed_conddition(int newbed_condition) {
		if (newbed_condition >= 0) {
			bed_condition = newbed_condition;
		}
	}
	int get_bad_condition() {
		return bed_condition;
	}
	int Computer = 1;
	int Doors = 1;
	int Windows = 3;
	int Bed = 1;
	string wallpaper_color = "blue";
	int chairs = 4;
public:
	void OpenTheDoor(Man& who) {
		cout << "Дверi вiдчиняются" << endl;
	}
public:
	void Turn_on_the_computer() {
		cout << "Чутно як ввiмкнувся комп`ютер" << endl;
	}
public:
	void Lie_on_the_bed() {
		if (bed_condition < 30) {
			cout << "Кровать сломалась!!!" << endl;
		}
		if (bed_condition >= 30) {
			cout << "Поздравляю вы легли на кровать!!!" << endl;
		}
	}
public:
	void Open_the_window() {
		cout << "Вiкно вiдчинено" << endl;
	}
public:
	void Sit_on_a_chair() {
		cout << "Стул был с подвохом и вы упали" << endl;
	}

};
class Mobile_phone {
private:
	int power;
	int brightness;
public:
	int getpower() {
		return power;
	}
	void setPower(int newPower) {
		if (newPower >= 0 && newPower <= 100) {
			power = newPower;
		}
	}
	const int sidebotton = 1;
	const int front_camera = 1;
	const int back_camera = 3;
	string model;
	string collor = "Black";
public:
	void Interaction(Man& who) {
		cout << "Началось взаимодействие с кем-то" << endl;
	}
public:
	double diagonal = 6.06;//дюймiв
public:
	void On_Phone(Man& who) {
		if (power >= 5) {
			cout << "Телефон почав ввiмкатись" << endl;
		}
		if (power < 5) {
			cout << "Треба ввiмкнути зарядку!" << endl;
		}
	}
public:
	void Do_selfie(Man& who) {
		cout << "Ввiмкнулась фронтальна камера та вилетiла пташка" << endl;
	}
public:
	void make_a_call() {
		cout << "Чутно гудки..." << endl;
	}
public:
	void Play_the_game() {
		cout << "Ввiмкнулась гра" << endl;
	}
public:
	void Post_a_photo(Man& who) {
		cout << "Спочатку треба завантажити iнстаграмчик!" << endl;
	}
};
class Monkey {
private:
	int eyes;
	int hands;
	int ears;
public:
	int gethands() {
		return hands;
	}
	void sethands(int newhands) {
		if (newhands >= 0 && newhands <= 0) {
			hands = newhands;
		}
	}
	double wool_length = 0.4;
	string Nick = "Arnold";
public:
	void Eat(string food) {
		cout << "Беремо смачний" << food << "та починаемо iсти" << endl;
	}
public:
	void Noise(Man& who) {
		cout << "Привiтатися" << endl;
	}
public:
	void Sleep() {
		cout << "Арнольд в пошуках мiстечка для дрьому" << endl;
	}
public:
	void Play() {
		if (hands = 2) {
			cout << "Арнольд починае гратися с друзями" << endl;
		}
		if (hands < 2) {
			cout << "Арнольд не в настроi!" << endl;
		}
	}
public:
	void Dance() {
		cout << "Арнольд показуе дуже класснi рухи" << endl;
	}
};
class Car {
private:
	int Wheels = 6;
	int doors = 4;
	int Number_of_seats = 7;
public:
	int getWeels() {
		return Wheels;
	}
	void setweels(int newweels) {
		if (newweels >= 0) {
			Wheels = newweels;
		}
	}
	string Color = "White";
	int Steering_wheel = 1;
public:
	void We_start_the_engine(Man& who) {
		if (Wheels = 6) {
			cout << "Слышен рёв этого зверя" << endl;
		}
		if (Wheels < 6) {
			cout << "Походу ночью кто-то скрутил колёса)" << endl;
		}
	}
public:
	void Need_to_fix_urgently() {
		cout << "На панели засвтился бензин, машине пора кушать" << endl;
	}
public:
	void Fasten_seat_belts() {
		cout << "Машина напоминает нам о мере безопасности, и что нужно присегнуть ремни" << endl;
	}
public:
	void Nead_to_fix() {
		cout << "Машина чуствует себя не хорошо, нужно заехать на СТО" << endl;
	}
public:
	void Ride_back() {
		cout << "Машина начинает движение назад" << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "");
	Man m;
	Mobile_phone p;
	Room r;
	Monkey mo;
	Car c;
	m.name = "Nikita";
	p.model = "Iphone";
	r.OpenTheDoor(m);
	m.Pick_Up(p);
	p.Interaction(m);
	p.Do_selfie(m);
	mo.Noise(m);
	mo.Dance();
	c.We_start_the_engine(m);
	c.Fasten_seat_belts();
	c.Ride_back();
	p.Post_a_photo(m);
}