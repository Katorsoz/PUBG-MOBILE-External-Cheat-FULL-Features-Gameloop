#include "hrdwr.h"
#include <atlsecurity.h> 
std::string hrdwr::gethr ()
{

		ATL::CAccessToken accessToken;
		ATL::CSid currentUserSid;
		if (accessToken.GetProcessToken(TOKEN_READ | TOKEN_QUERY) &&
			accessToken.GetUser(&currentUserSid))
			return std::string(CT2A(currentUserSid.Sid()));
	
}