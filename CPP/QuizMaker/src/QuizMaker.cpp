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
//Derived from Questions class
class ClassicalQuestions: public Questions {

public:
    string getQuestion() {
        return question;
    }

    string getAnswer() {
        return answer;
    }
    int getQuestionNumber() {
        return questionNumber;
    }

    void setQuestion(string a) {
        question = a;
    }

    void setAnswer(string a) {
        answer = a;
    }
    void setQuestionNumber (int a) {
        questionNumber = a;
    }
    void setQuestionAdress (string a) {
        questionAdress = a;
    }

protected:

private:
    string question;
    string answer;
    int questionNumber;
    string questionAdress;

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

//Derived from Questions class
class FillBlankQuestions: public Questions {

public:
    string getQuestion() {
        return question;
    }

    string getAnswer() {
        return answer;
    }
    int getQuestionNumber() {
        return questionNumber;
    }

    void setQuestion(string a) {
        question = a;
    }

    void setAnswer(string a) {
        answer = a;
    }
    void setQuestionNumber (int a) {
        questionNumber = a;
    }
    void setQuestionAdress (string a) {
        questionAdress = a;
    }

protected:

private:
    string question;
    string answer;
    int questionNumber;
    string questionAdress;

};

int main() {
	string line;
    string answer;

    //Counter to track true and Falses
    static int trueCount = 0;
    static int falseCount = 0;

    //Multiple question number is 35. and in the file one question is 7 line
    string multipleChoiceQuestions[20][7];

   //Classical question number is 15. and in the file one question is 5 line
    string classicalQuestions[10][5];

    //Fill in the blank question number is 10. and in the file one question is 7 line
    string fillBlankQuestions[10][5];

    string multipleChoiceFileAdress = "test_questions.txt";
    string classicalFileAdress = "classical_questions.txt";
    string answerBlankFileAdress = "answer_blank.txt";
    int questionNumber;

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
