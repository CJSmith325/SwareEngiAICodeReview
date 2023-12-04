#include "Accessibility.h"
#include <string>
#include <wchar.h>
#include <sapi.h>
#include <Windows.h>
using namespace std;

void Accessibility::getKeyboardInput() {
	// Left Control + R Keybind
	if (GetAsyncKeyState(VK_LCONTROL) && (GetAsyncKeyState((unsigned int)'R') & 0x8000)) {
		// Start Code Reader
	}
}

bool Accessibility::textToSpeech(string errorMessage) {
	// Initialize voice
	ISpVoice* pVoice = NULL;

	// Unable to initialize default
	if (FAILED(CoInitialize(NULL)))
		return false;

	// Create an instance of the voice
	HRESULT hr = CoCreateInstance(CLSID_SpVoice, NULL, CLSCTX_ALL, IID_ISpVoice, (void**)&pVoice);

	// Instance was successfully created
	if (SUCCEEDED(hr)) {
		// Convert message to wstring
		wstring wsMessage = wstring(errorMessage.begin(), errorMessage.end());
		// Transfer to wchar_t pointer for the Speak function
		const wchar_t* message = wsMessage.c_str();

		// Play message with Text to Speech
		hr = pVoice->Speak(message, 0, NULL);

		pVoice->Release();
		pVoice = NULL;
	}

	// Uninitialize function once finished
	CoUninitialize();
	return true;
}

void Accessibility::getVoiceCommand() {

}

bool Accessibility::speechToText() {

	return true;
}