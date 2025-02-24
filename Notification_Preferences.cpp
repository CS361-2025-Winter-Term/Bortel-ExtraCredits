#include <string>

class NotificationPreferences {
    // Attributes
    private: 
    std::string frequency;
    bool isEnabled;

    // Constructor
    public: 
    NotificationPreferences(std::string frequency, bool isEnabled);

    // Methods
    public: 
    std::string getFrequency() const;
    bool isEnabled() const;
}