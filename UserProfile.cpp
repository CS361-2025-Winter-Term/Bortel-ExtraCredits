#include <string>
#include <Notification_Preferences.cpp>

class UserProfile {
    //Attributes
    private:
        std::string username;
        std::string email;
        NotificationPreferences notificationprefs;    
    public:
        // Constructor
        UserProfile(std::string username,std::string email,NotificationPreferences notificationprefs);
    
        // Methods
        std::string getUsername();
        std::string getEmail();
        NotificationPreferences getNotificationPreferences();
    };
    