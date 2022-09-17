#include <stdio.h>
#include <Windows.h>

#define DEBUG 0

void setconsolecolour()
{
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(consoleHandle, 15);
}

void setupconsole()
{
    SetConsoleTitle("Samsung Bloatware Remover");
    setconsolecolour();
}

void deletesamsungbloatware() 
{
    printf("\n");

#pragma region Bixby
    system("adb uninstall --user 0 com.samsung.android.bixby.wakeup");
    system("adb uninstall --user 0 com.samsung.android.app.spage");
    system("adb uninstall --user 0 com.samsung.android.app.routines");
    system("adb uninstall --user 0 com.samsung.android.bixby.service");
    system("adb uninstall --user 0 com.samsung.android.visionintelligence");
    system("adb uninstall --user 0 com.samsung.android.bixby.agent");
    system("adb uninstall --user 0 com.samsung.android.bixby.agent.dummy");
    system("adb uninstall --user 0 com.samsung.android.bixbyvision.framework");
#pragma endregion

#if DEBUG == 1
#pragma region General System
    system("adb uninstall --user 0 com.dsi.ant.sample.acquirechannels");
    system("adb uninstall --user 0 com.dsi.ant.service.socket");
    system("adb uninstall --user 0 com.dsi.ant.server");
    system("adb uninstall --user 0 com.dsi.ant.plugins.antplus");
    system("adb uninstall --user 0 com.android.egg");
    system("adb uninstall --user 0 com.sec.android.easyonehand");
    system("adb uninstall --user 0 com.sec.android.widgetapp.samsungapps");
    system("adb uninstall --user 0 com.sec.android.app.launcher");
    system("adb uninstall --user 0 com.samsung.android.mateagent");
    system("adb uninstall --user 0 com.sec.android.easyMover.Agent");
    system("adb uninstall --user 0 com.samsung.android.app.watchmanagerstub");
    system("adb uninstall --user 0 com.sec.android.daemonapp");
    system("adb uninstall --user 0 com.samsung.android.app.social");
#pragma endregion
#endif

#pragma region Samsung Pass/Pay
    system("adb uninstall --user 0 com.samsung.android.samsungpassautofill");
    system("adb uninstall --user 0 com.samsung.android.authfw");
    system("adb uninstall --user 0 com.samsung.android.samsungpass");
    system("adb uninstall --user 0 com.samsung.android.spay");
    system("adb uninstall --user 0 com.samsung.android.spayfw");
#pragma endregion

#pragma region Gimmicky Apps
    system("adb uninstall --user 0 com.samsung.android.aremoji");
    system("adb uninstall --user 0 com.google.ar.core");
    system("adb uninstall --user 0 flipboard.boxer.app");
    system("adb uninstall --user 0 com.samsung.android.wellbeing");
    system("adb uninstall --user 0 com.samsung.android.da.daagent");
    system("adb uninstall --user 0 com.samsung.android.service.livedrawing");
    system("adb uninstall --user 0 com.sec.android.mimage.avatarstickers");
#pragma endregion

#pragma region Facebook
    system("adb uninstall --user 0 com.facebook.katana");
    system("adb uninstall --user 0 com.facebook.system");
    system("adb uninstall --user 0 com.facebook.apadbanager");
    system("adb uninstall --user 0 com.facebook.services");
#pragma endregion

#pragma region Car Mode
    system("adb uninstall --user 0 com.samsung.android.drivelink.stub");
#pragma endregion

#pragma region Printing
    system("adb uninstall --user 0 com.android.bips");
    system("adb uninstall --user 0 com.google.android.printservice.recommendation");
    system("adb uninstall --user 0 com.android.printspooler");
#pragma endregion

#pragma region Samsung Email
    system("adb uninstall --user 0 com.samsung.android.email.provider");
    system("adb uninstall --user 0 com.wsomacp");
#pragma endregion

#pragma region Samsung Game Launcher
    system("adb uninstall --user 0 com.samsung.android.game.gamehome");
    system("adb uninstall --user 0 com.enhance.gameservice");
    system("adb uninstall --user 0 com.samsung.android.game.gametools");
    system("adb uninstall --user 0 com.samsung.android.game.gos");
    system("adb uninstall --user 0 com.samsung.android.gametuner.thin");
#pragma endregion

#pragma region Samsung Browser
    system("adb uninstall --user 0 com.sec.android.app.sbrowser");
    system("adb uninstall --user 0 com.samsung.android.app.sbrowseredge");
#pragma endregion

#pragma region Gear VR
    system("adb uninstall --user 0 com.samsung.android.hmt.vrsvc");
    system("adb uninstall --user 0 com.samsung.android.app.vrsetupwizardstub");
    system("adb uninstall --user 0 com.samsung.android.hmt.vrshell");
    system("adb uninstall --user 0 com.google.vr.vrcore");
#pragma endregion

#pragma region Samsung Kids
    system("adb uninstall --user 0 com.samsung.android.kidsinstaller");
    system("adb uninstall --user 0 com.samsung.android.app.camera.sticker.facearavatar.preload");
#pragma endregion

#pragma region Samsung LED Cover
    system("adb uninstall --user 0 com.samsung.android.app.ledbackcover");
    system("adb uninstall --user 0 com.sec.android.cover.ledcover");
#pragma endregion

#pragma region Edge
    system("adb uninstall --user 0 com.samsung.android.service.peoplestripe");
#pragma endregion

#pragma region Samsung Dex
    system("adb uninstall --user 0 com.sec.android.desktoadbode.uiservice");
    system("adb uninstall --user 0 com.samsung.desktopsystemui");
    system("adb uninstall --user 0 com.sec.android.app.desktoplauncher");
#pragma endregion
}

void getconfirmation()
{
    printf("Are you sure you want to uninstall Samsung's bloatware apps? Doing so may have adverse effects. Y/N: ");

    char input;
    scanf("%c", &input);

    if (input == 'Y')
    {
        deletesamsungbloatware();
        return;
    }
}

int main()
{
    setupconsole();
    getconfirmation();
    return 0;
}