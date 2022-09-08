#include <iostream>
#include <string> //program uses C++ standard string class
using namespace std;

//GradeBook class definition
class GradeBook
{
public:
    //function that sets the course name
    void setCourseName(string name)
    {
        courseName=name; //store the course name in the object
    } // end function setCourseName

    //function that gets the course name
    string getCourseName() const
    {
        return courseName; // return the object's courseName
    } //end function getCourseName

    //function that displays a welcome message
    void displayMessage() const
    {
        cout<<"Welcome to the grade book for\n"<<getCourseName() <<"!"<<endl;
    } // end function displayMessage
private:
    string courseName;
};

//function main begins program execution
int main()
{
    string nameOfCourse;
    GradeBook myGradeBook;
    //display initial value of courseName
    cout<<"Initial course name is: "<<myGradeBook.getCourseName()<<endl;

    //prompt for,input and set course name
    cout<<"\nPlease enter the course name:"<<endl;
    getline(cin,nameOfCourse);//read a course name with blanks
    myGradeBook.setCourseName(nameOfCourse);//set the course name

    cout<<endl;
    myGradeBook.displayMessage();
} // end main

