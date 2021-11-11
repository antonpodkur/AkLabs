#include <iostream>
#include <vector>
#include <string>
#include <tuple>
using namespace std;

tuple<char, string, string> arguments[]{{'h', "help", "help parameter"}, {'v', "version", "version parameter"}, {'r', "recursive", "recursive parameter"}, {'a', "all", "all parameter"}};

int main(int argc, char *args[])
{
	for(int i = 1; i < argc; i++)
	{
		string arg(args[i]);
		if(arg.size()<2)
		{
			cout<<arg<<" "<<"is not recognized"<<endl;
		}
		else if(arg[0] == '-' && arg[1] != '-')
		{
			for(int i = 1; i < arg.size(); i++)
			{
				if(arg[i] == get<0>(arguments[0]))
                {
                    cout<<get<2>(arguments[0])<<endl;
                }
                else if(arg[i] == get<0>(arguments[1]))
                {
                    cout<<get<2>(arguments[1])<<endl;
                }
                else if(arg[i] == get<0>(arguments[2]))
                {
                    cout<<get<2>(arguments[2])<<endl;
                }
                else if(arg[i] == get<0>(arguments[3]))
                {
                    cout<<get<2>(arguments[3])<<endl;
                }
                else
                {
                    cout << "Unknown argument"<<endl;
                }
			}
        }

        else if(arg[0] == '-' && arg[1] == '-')
		{
                arg.erase(arg.begin(), arg.begin()+2);


				if(arg == get<1>(arguments[0]))
                {
                    cout<<get<2>(arguments[0])<<endl;
                }
                else if(arg == get<1>(arguments[1]))
                {
                    cout<<get<2>(arguments[1])<<endl;
                }
                else if(arg == get<1>(arguments[2]))
                {
                    cout<<get<2>(arguments[2])<<endl;
                }
                else if(arg == get<1>(arguments[3]))
                {
                    cout<<get<2>(arguments[3])<<endl;
                }
                else
                {
                    cout << "Unknown argument"<<endl;
                }

		}

	}
	return 0;
}
