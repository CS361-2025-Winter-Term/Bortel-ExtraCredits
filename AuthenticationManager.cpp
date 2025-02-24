#include <string>
#include <Notification_Preferences.cpp>
#include <UserProfile.cpp>

class AuthenticationManager {
        //Attributes
    private:
        std::string hashedPassword;   
    public:
        //Constructor
        AuthenticationManager();

        //Methods
        bool validateUsername(std::string username);
        bool validatePassword(std::string password);
        std::string hashPassword(std::string password);
        bool validateEmail(std::string email);
        void saveNewUser(UserProfile userProfile, std::string password);
};