#include <string>
#include <Notification_Preferences.cpp>
#include <UserProfile.cpp>

class LoginView {
    // Attributes
    private:

    public:
    // Methods
    std::string readPasswordTextbox();
    std::string readUsernameTextbox();
    std::string readEmailTextbox();

    NotificationPreferences readNotificationPreferences();

    void registerUser(UserProfile userProfile, std::string password);
    void displayError(std::string error);
    void transitionToHomeView(UserProfile userProfile);
}
