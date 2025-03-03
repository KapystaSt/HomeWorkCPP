#include <iostream>

using namespace std;

class Time 
{
private:
    int hours;
    int minutes;

    void normalize() 
    {
        hours += minutes / 60;
        minutes %= 60;
        if (minutes < 0) 
        {
            minutes += 60;
            hours--;
        }
    }

public:
    Time(int h = 0, int m = 0) : hours(h), minutes(m) 
    {
        normalize();
    }

    Time operator+(const Time& other) const 
    {
        return Time(hours + other.hours, minutes + other.minutes);
    }

    Time operator-(const Time& other) const 
    {
        return Time(hours - other.hours, minutes - other.minutes);
    }

    bool operator==(const Time& other) const 
    {
        return hours == other.hours && minutes == other.minutes;
    }

    friend ostream& operator<<(ostream& os, const Time& t) 
    {
        os << t.hours << "h " << t.minutes << "m";
        return os;
    }
};

int main() 
{
    Time t1(6, 45);
    Time t2(1, 15);

    Time sum = t1 + t2;
    Time diff = t1 - t2;

    cout << "Sum: " << sum << "\n";
    cout << "Difference: " << diff << "\n ";
    cout << "Equality: " << (t1 == t2 ? "Equal" : "Not Equal\n");

    return 0;
}
