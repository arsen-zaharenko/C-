class Transport {
protected:
    int speed = 50;
    int cost = 20;
public:
    virtual void getData() = 0;
};

class Auto : public Transport {
public:
    void getData();
};

class Bicycle : public Transport {
public:
    void getData();
};

class Cart : public Transport {
public:
    void getData();
};