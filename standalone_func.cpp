#include <string>
using namespace std;
class INotifier
{
  public:
    virtual void Notify(const string& message) = 0;
};

class SmsNotifier : public INotifier
{
  public:
    SmsNotifier (const string &number) : _number (number)
    {

    }
    void Notify(const string &message) override
    {
      SendSms (_number, message);
    }
  private:
    const string _number;
};

class EmailNotifier : public INotifier
{
  public:
     EmailNotifier (const string &email) : _email (email)
    {

    }
    void Notify(const string &message) override
    {
      SendEmail (_email, message);
    }
  private:
    const string _email;
};
