#include <iostream>

class QualityAssessment : public CodeAnalysis {
private:
	bool unsafe;
	float executionTime;
	std::string bigOnotation;

public:
	QualityAssessment() {
		unsafe = false;
		executionTime = 0.0;
		bigOnotation = "";
	}

	// Function to check coding standards
	void checkStandards() {
		// Implementation to check coding standards
	}

	// Function to display suggestions for found errors
	void showSuggestion(std::string errorFoundString) {
		// Implementation to display suggestions
	}

	// Function to check performance based on Big O notation
	void checkPerformance(std::string bigOnotation) {
		// Implementation to check performance
	}

	// Function to calculate Big O notation
	void calculateBigO() {
		// Implementation to calculate Big O notation
	}
};
