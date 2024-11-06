#include <iostream>
#include <speechapi_cxx.h>

int main()
{
    // Create a speech config with your Microsoft Azure Speech subscription key and region.
    auto config = Microsoft::CognitiveServices::Speech::SpeechConfig::FromSubscription("YourSubscriptionKey", "YourRegion");

    // Create a speech recognizer using the speech config.
    auto recognizer = Microsoft::CognitiveServices::Speech::SpeechRecognizer::FromConfig(config);

    // Define a function to recognize speech using the recognizer.
    auto recognize_speech = [&recognizer]()
    {
        Microsoft::CognitiveServices::Speech::SpeechRecognitionResult result;
        try
        {
            std::cout << "Listening...\n";
            result = recognizer->RecognizeOnceAsync().get();
            std::cout << "Recognized: " << result->Text << std::endl;
        }
        catch (const std::exception& e)
        {
            std::cout << "Error in recognizing your speech, please try again...\n";
        }
        return result->Text;
    };

    // Define a function to execute commands based on the recognized text.
    auto execute_command = [](const std::string& command)
    {
        // Add your command execution logic here.
    };

    // Main program loop.
    while (true)
    {
        auto command = recognize_speech();
        if (!command.empty())
        {
            execute_command(command);
        }
    }

    return 0;
}
 