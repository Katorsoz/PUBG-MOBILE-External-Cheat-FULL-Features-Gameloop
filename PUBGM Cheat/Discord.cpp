#include "Discord.h"
#include "data.h"
#include <string>
#include "Utility.h"
#include <chrono>
#include "Setting.h"
#include "Arabic/Arabic.h"
static int64_t eptime = std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::now().time_since_epoch()).count();
void Discord::Initialize()
{
    DiscordEventHandlers Handle;
    memset(&Handle, 0, sizeof(Handle));
    Discord_Initialize("1", &Handle, 1, NULL);  //API APP
}

void Discord::Update()
{
    DiscordRichPresence discordPresence;
    memset(&discordPresence, 0, sizeof(discordPresence));
    if (Data::NetDriver > 0)
    {
        std::string Enr = "WEAPON : [" + (Data::Weapon)+"] - ""KILLS : [" + to_string(Data::Kills) + "]";
        int minutes = Data::TimeRemind / 60;
	
        string GameTime = (to_string(minutes % 60) + ".MIN - ").append(to_string(Data::TimeRemind % 60) + ".SEC");
        std::string Alive = "MAP : [" + (Data::LocalPawn)+"] [" + (Data::GameType)+"]" + " - ""Time : " + GameTime; 
        discordPresence.details = Enr.c_str();
        discordPresence.state = Alive.c_str();
    }
    else
    {
        discordPresence.details = "Waiting In Lobby";
    }
	discordPresence.startTimestamp = eptime;
    discordPresence.largeImageKey = "https://media3.giphy.com/media/v1.Y2lkPTc5MGI3NjExY243b21nZjAwcnA3enRjdnEydHRyMjlwMno3bHV0ZTJ1ZmJ6dGx1MSZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/kuuS6H5y4LAWs/giphy.gif";
    discordPresence.largeImageText = "PUBG Mobile Bypass";
    discordPresence.smallImageKey = "small";
    discordPresence.smallImageText = "0% Ban";
    discordPresence.instance = 1;	
    Discord_UpdatePresence(&discordPresence);
}