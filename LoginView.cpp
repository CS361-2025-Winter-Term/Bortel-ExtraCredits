#include <string>
#include <Notification_Preferences.cpp>
#include <UserProfile.cpp>

class LoginView {
    // Attributes
    private:
    static LoginView login;

    public:
    // Methods
    static LoginView getInstance();

    std::string readPasswordTextbox();
    std::string readUsernameTextbox();
    std::string readEmailTextbox();

    NotificationPreferences readNotificationPreferences();

    void registerUser(UserProfile userProfile, std::string password);
    void displayError(std::string error);
    void transitionToHomeView(UserProfile userProfile);
}
