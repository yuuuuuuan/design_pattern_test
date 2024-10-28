#include "ConfigurationManager.h"

int main() {
    try {
        // Load configurations from a file
        ConfigurationManager::getInstance().loadConfig("config.txt");

        // Retrieve a configuration value
        std::string value = ConfigurationManager::getInstance().getConfig("some_key");
        std::cout << "Value: " << value << std::endl;

        // Set a configuration value
        ConfigurationManager::getInstance().setConfig("new_key", "new_value");

        // Retrieve the new value
        std::string newValue = ConfigurationManager::getInstance().getConfig("new_key");
        std::cout << "New Value: " << newValue << std::endl;

    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
