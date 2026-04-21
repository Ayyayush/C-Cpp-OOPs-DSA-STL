#include <iostream>
using namespace std;

class Score
{
  int roll_no, right, wrong, net_score;        // non-static members
  static int right_weightage, wrong_weightage; // static members

public:
  // Setters
  void setRoll_no(int r) { roll_no = r; }

  void setRight(int r) { right = r; }

  void setWrong(int w) { wrong = w; }

  void setNet_score() // net score calculate karenge weightages se
  {
    net_score = (right * right_weightage) - (wrong * wrong_weightage);
  }

  // Static setters
  static void setRight_weightage(int rw)
  {
    right_weightage = rw;
  }

  static void setWrong_weightage(int ww)
  {
    wrong_weightage = ww;
  }

  // Getters
  int getRoll_no() { return roll_no; }

  int getRight() { return right; }

  int getWrong() { return wrong; }

  int getNet_score() { return net_score; }

  static int getRight_weightage() { return right_weightage; }

  static int getWrong_weightage() { return wrong_weightage; }
};

// Static members ko class ke bahar initialize karna padta hai
int Score::right_weightage = 0;
int Score::wrong_weightage = 0;

int main()
{
  Score s1;

  Score::setRight_weightage(4); // static member set karna
  Score::setWrong_weightage(1);

  s1.setRoll_no(101);
  s1.setRight(15);
  s1.setWrong(3);
  s1.setNet_score(); // net score calculate

  cout << "Roll No: " << s1.getRoll_no() << endl;
  cout << "Correct Answers: " << s1.getRight() << endl;
  cout << "Wrong Answers: " << s1.getWrong() << endl;
  cout << "Net Score: " << s1.getNet_score() << endl;

  return 0;
}
