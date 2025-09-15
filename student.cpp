#include <iostream>
#include <string>

class Student
{
private:
	std::string m_name;
	int m_age;
	std::string m_course;
	double m_gpa;
	bool m_isSet{ false };

public:
	Student(std::string name, int age, std::string course, double gpa)
		: m_name(name), m_age(age), m_course(course), m_gpa(gpa) {}


	void setStudentInfo(std::string name, int age, std::string course, double gpa)
	{
		m_name = name;
		if(age < 0)
		{
			std::cout << "Invalid age. Setting age to 0." << std::endl;
			age = 0;
		} 
		else
		{
			m_age = age;
		}
		m_course = course;
		if(gpa < 0.0 || gpa > 5.0)
		{
			std::cout << "Invalid GPA. Setting GPA to 0.0." << std::endl;
			gpa = 0.0;
		}
		else
		{
			m_gpa = gpa;
		}

		m_isSet = true;
	}

	void displayInfo() const
	{
		if(m_isSet == false)
		{
			std::cout << "Student information is not set." << std::endl;
		}
		else
		{
			std::cout << "Student Information:" << std::endl;
			std::cout << "Name: " << m_name << std::endl;
			std::cout << "Age: " << m_age << std::endl;
			std::cout << "Course: " << m_course << std::endl;
			std::cout << "GPA: " << m_gpa << std::endl;
		}
	}

	void updateGPA(double newGPA)
	{
		if(newGPA < 0.0 || newGPA > 5.0)
		{
			std::cout << "Invalid GPA. Please enter a value between 0.0 and 5.0." << std::endl;
			return;
		}
		else
		{
			std::cout << "GPA updated from " << m_gpa << " to " << newGPA << std::endl;
			m_gpa = newGPA;
			std::cout << "GPA updated successfully!" << std::endl;
		}
	}

	void resetStudentInfo()
	{
		m_name = "";
		m_age = 0;
		m_course = "";
		m_gpa = 0.0;
		m_isSet = false;
		std::cout << "Student Information reset successfully!" << std::endl;
	}

	bool isInfoSet() const
	{
		return m_isSet;
	}
};

int main()
{
	Student student1("", 0, "", 0.00);

	std::string name{};
	int age{};
	std::string course{};
	double gpa{};

	int choice{};

	do
	{
		std::cout << "OPTIONS:" << std::endl;
		std::cout << "----------------------------------------------" << std::endl;
		std::cout << "1. Create Student" << std::endl;
		std::cout << "2. Display Student Info" << std::endl;
		std::cout << "3. Update GPA" << std::endl;
		std::cout << "4. Reset Student Info" << std::endl;
		std::cout << "5. Exit" << std::endl;
		std::cout << std::endl;

		std::cout << "Enter your choice (1-5): ";
		std::cout << std::endl;

		std::cin >> choice;
		switch (choice)
		{
			case 1:
			{
				std::cout << "Enter student name: ";
				getline(std::cin >> std::ws, name);
				std::cout << "Enter student age: ";
				std::cin >> age;
				std::cout << "Enter student course: ";
				getline(std::cin >> std::ws, course);
				std::cout << "Enter student GPA: ";
				std::cin >> gpa;
				student1.setStudentInfo(name, age, course, gpa);
				std::cout << "Student created successfully!" << std::endl;
				std::cout << std::endl;
				break;
			}


			case 2:
			{
				student1.displayInfo();
				std::cout << "----------------------------------------------" << std::endl;
				break;
			}


			case 3:
			{
				double newGPA;
				std::cout << "Enter new GPA: ";
				std::cin >> newGPA;
				student1.updateGPA(newGPA);
				break;
			}

			case 4:
			{
				if (student1.isInfoSet())
				{
					std::cout << "Are you sure you want to reset the student information? (y/n): ";
					char confirm;
					std::cin >> confirm;
					if (confirm != 'y' && confirm != 'Y')
					{
						std::cout << "Reset cancelled." << std::endl;
						break;
					}
					else
					{
						student1.resetStudentInfo();
						std::cout << "----------------------------------------------" << std::endl;
					}
				}
				break;
			}

			case 5:	
			{
				std::cout << "Exiting program." << std::endl;
				break;
			}

			default:
				std::cout << "Enter a correct option (1-5)" << std::endl;

		}
	} while (choice != 5);
	


	return 0;
}
