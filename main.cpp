#include<iostream>
#include<string>
using namespace std;
class Vehicle {
private:
    //tạo các thuộc tính trong private
    string type;
    int maxSpeed;
    string fuelType;
    double weight;
    string color;
public:
    //hàm khởi tạo
    Vehicle(string t, int m, string f, double w, string c): type(t), maxSpeed(m), fuelType(f), weight(w), color(c) {};
    //hàm in gia tốc
    void accelerate() {
        cout<<"The "<< type<<" is accelerating to "<< maxSpeed<<" km/h. \n";
    }
    //hàm trả về loại xe
    string getType() {
        return type;
    }
    //hàm trả về tốc độ lớn nhất
    int getMaxSpeed() {
        return maxSpeed;
    }
    //hàm trả về loại nhiên liệu
    string getFuelType() {
        return fuelType;
    }
    //hàm trả về cân nặng của phương tiện
    double getWeight() {
        return weight;
    }
    //hàm trả về màu của phương tiện
    string getColor() {
        return color;
    }
    //hàm in các thông tin của phương tiện
    void displayInfo() {
        cout<<"Type: "<<type<<'\n';
        cout<<"Max speed: "<<maxSpeed<<" km/h"<<'\n';
        cout<<"Fuel type: "<<fuelType<<'\n';
        cout<<"Weight: "<<weight<<" kg"<<'\n';
        cout<<"Color: "<<color<<'\n';
    }
};
int main() {
    Vehicle car("Car", 200, "Gasoline", 1000, "Blue");
    car.accelerate();
    car.displayInfo();
    
    cout<<'\n';
    
    Vehicle truck("Truck", 150, "Diesel", 15000, "Yellow");
    truck.accelerate();
    truck.displayInfo();
    
    cout<<'\n';
    
    Vehicle motocycle("Motocycle", 399, "Gasoline", 100, "Pink");
    motocycle.accelerate();
    motocycle.displayInfo();
    
    cout<<'\n';
    
    
    vector<Vehicle> vehicle;
    //Nhập số lượng xe
    cout<<"Enter the number of vehicles: ";
    int n; cin>> n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter vehicle: ";
        string type; cin>>type;
        cout<<"Enter max speed of vehicle: ";
        int maxSpeed; cin>>maxSpeed;
        cout<<"Enter fuel type of vehicle: ";
        string fuelType; cin>> fuelType;
        cout<<"Enter weight of vehicle: ";
        double weight; cin>>weight;
        cout<<"Enter color of vehicle: ";
        string color; cin>>color;
        vehicle.push_back(Vehicle(type, maxSpeed, fuelType, weight, color));
    }
    //in các thông tin của từng xe
    for(int i=0;i<vehicle.size();i++)
    {
        vehicle[i].accelerate();
        vehicle[i].displayInfo();
    }
    return 0;
}
