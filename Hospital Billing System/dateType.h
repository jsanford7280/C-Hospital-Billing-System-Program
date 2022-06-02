//dateType.h

#ifndef dateType_H

#define dateType_H

//Use the class dateType to store the

//Date of Birth, Admin Date, Discharge Date, and the class doctorType to store the attending physician’s name

class dateType

{

public:

    void setDate(int month, int day, int year);

    int getDay() const;

    int getMonth() const;



    int getYear() const;

    void printDate() const;

    dateType(int month = 1, int day = 1, int year = 1900);

private:

    int dMonth;

    int dDay;

    int dYear;

};

#endif