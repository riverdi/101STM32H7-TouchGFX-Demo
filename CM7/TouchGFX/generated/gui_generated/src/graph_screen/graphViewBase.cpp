/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/graph_screen/graphViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

graphViewBase::graphViewBase() :
    buttonCallback(this, &graphViewBase::buttonCallbackHandler)
{

    __background.setPosition(0, 0, 1280, 800);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    box4.setPosition(0, 0, 1280, 800);
    box4.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));

    Image19.setXY(0, 0);
    Image19.setBitmap(touchgfx::Bitmap(BITMAP_GRAPH_SCREEN_ID));

    box2.setPosition(0, 0, 297, 800);
    box2.setColor(touchgfx::Color::getColorFromRGB(247, 247, 247));

    box3.setPosition(297, 0, 983, 63);
    box3.setColor(touchgfx::Color::getColorFromRGB(23, 143, 207));

    Image17.setXY(13, 729);
    Image17.setBitmap(touchgfx::Bitmap(BITMAP_LOGO_SIDEBAR_ID));

    google_edit.setXY(989, 719);
    google_edit.setBitmap(touchgfx::Bitmap(BITMAP_EDIT3_ID));
    google_edit.setAlpha(0);

    edit2.setXY(83, 9);
    edit2.setBitmap(touchgfx::Bitmap(BITMAP_EDIT1_ID));
    edit2.setAlpha(0);

    edit3.setXY(1060, 15);
    edit3.setBitmap(touchgfx::Bitmap(BITMAP_EDIT2_ID));
    edit3.setAlpha(0);

    dee.setXY(319, 17);
    dee.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    dee.setLinespacing(0);
    dee.setTypedText(touchgfx::TypedText(T___SINGLEUSE_W8XL));

    main_page.setXY(0, 122);
    main_page.setBitmaps(touchgfx::Bitmap(BITMAP_MAIN_ID), touchgfx::Bitmap(BITMAP_MAIN2_ID));
    main_page.setAction(buttonCallback);

    map_1.setXY(0, 181);
    map_1.setBitmaps(touchgfx::Bitmap(BITMAP_MAP_ID), touchgfx::Bitmap(BITMAP_MAP2_ID));
    map_1.setAction(buttonCallback);

    graphs.setXY(0, 240);
    graphs.setBitmaps(touchgfx::Bitmap(BITMAP_GRAPH2_ID), touchgfx::Bitmap(BITMAP_GRAPH2_ID));

    cameras.setXY(0, 299);
    cameras.setBitmaps(touchgfx::Bitmap(BITMAP_CAMERAS_ID), touchgfx::Bitmap(BITMAP_CAMERAS2_ID));
    cameras.setAction(buttonCallback);

    configuration.setXY(0, 538);
    configuration.setBitmaps(touchgfx::Bitmap(BITMAP_CONFIGURATION_ID), touchgfx::Bitmap(BITMAP_CONFIGURATION2_ID));
    configuration.setAction(buttonCallback);

    notifications.setXY(0, 656);
    notifications.setBitmaps(touchgfx::Bitmap(BITMAP_NOTIFICATIONS_ID), touchgfx::Bitmap(BITMAP_NOTIFICATIONS2_ID));
    notifications.setAction(buttonCallback);

    settings.setXY(0, 597);
    settings.setBitmaps(touchgfx::Bitmap(BITMAP_SETTINGS_ID), touchgfx::Bitmap(BITMAP_SETTINGS2_ID));
    settings.setAction(buttonCallback);

    google.setXY(989, 719);
    google.setBitmaps(touchgfx::Bitmap(BITMAP_GOOGLE2_ID), touchgfx::Bitmap(BITMAP_GOOGLE_ID));

    conf.setXY(1076, 8);
    conf.setBitmaps(touchgfx::Bitmap(BITMAP_CONF_ICON2_ID), touchgfx::Bitmap(BITMAP_CONF_ICON_ID));

    name.setXY(13, 9);
    name.setBitmaps(touchgfx::Bitmap(BITMAP_NAME_ICON2_ID), touchgfx::Bitmap(BITMAP_NAME_ICON_ID));

    digitalClock1.setPosition(175, 19, 100, 25);
    digitalClock1.setColor(touchgfx::Color::getColorFromRGB(62, 169, 174));
    digitalClock1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_N962));
    digitalClock1.displayLeadingZeroForHourIndicator(true);
    digitalClock1.setDisplayMode(touchgfx::DigitalClock::DISPLAY_24_HOUR);
    digitalClock1.setTime24Hour(9, 34, 0);

    add(__background);
    add(box4);
    add(Image19);
    add(box2);
    add(box3);
    add(Image17);
    add(google_edit);
    add(edit2);
    add(edit3);
    add(dee);
    add(main_page);
    add(map_1);
    add(graphs);
    add(cameras);
    add(configuration);
    add(notifications);
    add(settings);
    add(google);
    add(conf);
    add(name);
    add(digitalClock1);
}

void graphViewBase::setupScreen()
{

}

void graphViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &main_page)
    {
        //Interaction1
        //When main_page clicked change screen to main
        //Go to main with no screen transition
        application().gotomainScreenNoTransition();
    }
    else if (&src == &map_1)
    {
        //Interaction2
        //When map_1 clicked change screen to map
        //Go to map with no screen transition
        application().gotomapScreenNoTransition();
    }
    else if (&src == &cameras)
    {
        //Interaction3
        //When cameras clicked change screen to camera
        //Go to camera with no screen transition
        application().gotocameraScreenNoTransition();
    }
    else if (&src == &configuration)
    {
        //Interaction4
        //When configuration clicked change screen to configuration
        //Go to configuration with no screen transition
        application().gotoconfigurationScreenNoTransition();
    }
    else if (&src == &notifications)
    {
        //Interaction6
        //When notifications clicked change screen to nofitications
        //Go to nofitications with no screen transition
        application().gotonofiticationsScreenNoTransition();
    }
    else if (&src == &settings)
    {
        //Interaction5
        //When settings clicked change screen to settings
        //Go to settings with no screen transition
        application().gotosettingsScreenNoTransition();
    }
}