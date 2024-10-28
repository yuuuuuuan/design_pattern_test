#ifndef CONFIGURATION_MANAGER_H
#define CONFIGURATION_MANAGER_H

#include <string>
#include <map>
#include <fstream>
#include <iostream>
#include <stdexcept>

class ConfigurationManager {
public:
    // Deleted copy constructor and assignment operator to prevent copies
    ConfigurationManager(const ConfigurationManager&) = delete;
    ConfigurationManager& operator=(const ConfigurationManager&) = delete;

    // Get the instance of the ConfigurationManager
    static ConfigurationManager& getInstance() {
        static ConfigurationManager instance; // Guaranteed to be destroyed.
        return instance;
    }

    // Load configurations from a file
    void loadConfig(const std::string& filename) {
        std::ifstream file(filename);
        if (!file.is_open()) {
            throw std::runtime_error("Could not open config file.");
        }
        
        std::string key, value;
        while (file >> key >> value) {
            configurations[key] = value;
        }
        file.close();
    }

    // Get configuration value by key
    std::string getConfig(const std::string& key) {
        if (configurations.find(key) != configurations.end()) {
            return configurations[key];
        } else {
            throw std::runtime_error("Configuration key not found.");
        }
    }

    // Set configuration value by key
    void setConfig(const std::string& key, const std::string& value) {
        configurations[key] = value;
    }

private:
    // Private constructor to prevent instantiation
    ConfigurationManager() {}

    // Map to store configurations
    std::map<std::string, std::string> configurations;
};

#endif // CONFIGURATION_MANAGER_H
