#pragma once
#include "CodeAnalysis.h"
#include <string>

class Accessibility : public CodeAnalysis {
private:
	int cursorPosition;
	std::string ttsMessage;
	std::string voiceInputText;
	bool isRunning;

public:
	Accessibility() {
		cursorPosition = 0;
		ttsMessage = "";
		voiceInputText = "";
		isRunning = false;
	}

	void getKeyboardInput();
	bool textToSpeech(std::string errorMessage);
	void getVoiceCommand();
	bool speechToText();
};