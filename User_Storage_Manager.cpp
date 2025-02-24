#include <string>
#include <UserProfile.cpp>


class UserStorageManager {
    // Attributes
    private:

    public:
    // Constructor
    UserStorageManager();

    // Methods
    UserProfile findUserByUsername(std::string username);
    void saveUserToDatabase(UserProfile userProfile, std::string password);
}
