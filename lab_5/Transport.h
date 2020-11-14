#include <iostream> 

class Transport {
public:
    virtual void showTime() = 0;
    virtual void showCost() = 0;
    virtual void setTime(double) = 0;
    virtual void setCost(int) = 0;
    virtual double getTime() = 0;
    virtual int getCost() = 0;
};

class Auto : public Transport {
    double time;
    int cost;
public:
    Auto(double time_, int cost_) : time(time_), cost(cost_) {};
    void showTime();
    void showCost();
    void setTime(double);
    void setCost(int);
    double getTime();
    int getCost();
    friend std::ostream& operator<< (std::ostream&, Auto*);
    friend std::istream& operator>> (std::istream&, Auto*);
};

class Bicycle : public Transport {
    double time;
    int cost;
public:
    Bicycle(double time_, int cost_) : time(time_), cost(cost_) {};
    void showTime();
    void showCost();
    void setTime(double);
    void setCost(int);
    double getTime();
    int getCost();
    friend std::ostream& operator<< (std::ostream&, Bicycle*);
    friend std::istream& operator>> (std::istream&, Bicycle*);
};

class Cart : public Transport {
    double time;
    int cost;
public:
    Cart(double time_, int cost_) : time(time_), cost(cost_) {};
    void showTime();
    void showCost();
    void setTime(double);
    void setCost(int);
    double getTime();
    int getCost();
    friend std::ostream& operator<< (std::ostream&, Cart*);
    friend std::istream& operator>> (std::istream&, Cart*);
};
