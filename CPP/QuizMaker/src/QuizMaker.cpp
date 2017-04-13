//============================================================================
// Name        : QuizMaker.cpp
// Author      : BurakSonmez
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <ctype.h>

using namespace std;


//It is the base class
class Questions {
    public:
    virtual string getQuestion() = 0;
    virtual int getQuestionNumber() = 0;
    private:
    protected:
};

//derived from Question class
class MultipleChoiceQuestions : public Questions {

public:

    string getQuestion() {
        return question;
    }

    string getOption1() {
        return option1;
    }

    string getOption2() {
        return option2;
    }

    string getOption3() {
        return option3;
    }

    string getOption4() {
        return option4;
    }

    string getAnswer() {
        return answer;
    }
    int getQuestionNumber() {
        return questionNumber;
    }
    string getQuestionAdress() {

        return questionAdress;
    }

    void setQuestion(string a) {
        question = a;
    }

    void setOption1(string a) {
        option1 = a;
    }
    void setOption2(string a) {
        option2 = a;
    }

    void setOption3(string a) {
        option3 = a;
    }

    void setOption4(string a) {
        option4 = a;
    }

    void setAnswer(string a) {
        answer = a;
    }

    void setQuestionNumber(int a) {
        questionNumber = a;
    }

    void setQuestionAdress(string a) {
        questionAdress = a;
    }

protected:

private:
    string question;
    string option1;
    string option2;
    string option3;
    string option4;
    string answer;
    int questionNumber;
    string questionAdress;


};

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
