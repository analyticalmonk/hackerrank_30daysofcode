#include <iostream>
#include <vector>
using namespace std;

class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n";
		}

};

class Student : public Person{
	private:
		vector<int> testScores;
	public:
  		// Write your constructor
        Student(string firstName, string lastName, int identification, vector<int> scores) :
        Person(firstName, lastName, identification), testScores(scores) {
        Person(firstName, lastName, id);
        this->testScores = scores;
      }

  		// Write char calculate()
      char calculate() {
        int sum = 0, num_scores = testScores.size();
        float avg;
        for(vector<int>::iterator it = testScores.begin(); it != testScores.end(); ++it){
          sum += *it;
        }
        avg = ((float)sum)/(float)num_scores;

        char grade;
        if (avg < 40){
          grade = 'T';
        }
        else if (avg >= 40 && avg < 55) {
          grade = 'D';
        }
        else if (avg >= 55 && avg < 70) {
            grade = 'P';
        }
        else if (avg >= 70 && avg < 80) {
          grade = 'A';
        }
        else if (avg >= 80 && avg < 90) {
          grade = 'E';
        }
        else if (avg >= 90) {
          grade = 'O';
        }

        return grade;
      }
};

int main() {
	string firstName;
  string lastName;
	int id;
  int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  vector<int> scores;
  for(int i = 0; i < numScores; i++){
	  int tmpScore;
	  cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}
