/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/configuration_screen/configurationViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

configurationViewBase::configurationViewBase() :
    buttonCallback(this, &configurationViewBase::buttonCallbackHandler)
{

    __background.setPosition(0, 0, 1280, 800);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    box4.setPosition(0, 0, 1280, 800);
    box4.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));

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
    dee.setTypedText(touchgfx::TypedText(T___SINGLEUSE_NXWE));

    main_page.setXY(0, 122);
    main_page.setBitmaps(touchgfx::Bitmap(BITMAP_MAIN_ID), touchgfx::Bitmap(BITMAP_MAIN2_ID));
    main_page.setAction(buttonCallback);

    map_1.setXY(0, 181);
    map_1.setBitmaps(touchgfx::Bitmap(BITMAP_MAP_ID), touchgfx::Bitmap(BITMAP_MAP2_ID));
    map_1.setAction(buttonCallback);

    graphs.setXY(0, 240);
    graphs.setBitmaps(touchgfx::Bitmap(BITMAP_GRAPH_ID), touchgfx::Bitmap(BITMAP_GRAPH2_ID));
    graphs.setAction(buttonCallback);

    cameras.setXY(0, 299);
    cameras.setBitmaps(touchgfx::Bitmap(BITMAP_CAMERAS_ID), touchgfx::Bitmap(BITMAP_CAMERAS2_ID));
    cameras.setAction(buttonCallback);

    configuration_1.setXY(0, 538);
    configuration_1.setBitmaps(touchgfx::Bitmap(BITMAP_CONFIGURATION2_ID), touchgfx::Bitmap(BITMAP_CONFIGURATION2_ID));

    notifications.setXY(0, 656);
    notifications.setBitmaps(touchgfx::Bitmap(BITMAP_NOTIFICATIONS_ID), touchgfx::Bitmap(BITMAP_NOTIFICATIONS2_ID));

    settings.setXY(0, 597);
    settings.setBitmaps(touchgfx::Bitmap(BITMAP_SETTINGS_ID), touchgfx::Bitmap(BITMAP_SETTINGS2_ID));
    settings.setAction(buttonCallback);

    textArea1.setXY(651, 361);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_CYYR));

    google.setXY(989, 719);
    google.setBitmaps(touchgfx::Bitmap(BITMAP_GOOGLE2_ID), touchgfx::Bitmap(BITMAP_GOOGLE_ID));

    conf.setXY(1076, 8);
    conf.setBitmaps(touchgfx::Bitmap(BITMAP_CONF_ICON2_ID), touchgfx::Bitmap(BITMAP_CONF_ICON_ID));

    name.setXY(13, 9);
    name.setBitmaps(touchgfx::Bitmap(BITMAP_NAME_ICON2_ID), touchgfx::Bitmap(BITMAP_NAME_ICON_ID));

    digitalClock1.setPosition(175, 19, 100, 25);
    digitalClock1.setColor(touchgfx::Color::getColorFromRGB(62, 169, 174));
    digitalClock1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_M7DS));
    digitalClock1.displayLeadingZeroForHourIndicator(true);
    digitalClock1.setDisplayMode(touchgfx::DigitalClock::DISPLAY_24_HOUR);
    digitalClock1.setTime24Hour(9, 34, 0);

    add(__background);
    add(box4);
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
    add(configuration_1);
    add(notifications);
    add(settings);
    add(textArea1);
    add(google);
    add(conf);
    add(name);
    add(digitalClock1);
}

void configurationViewBase::setupScreen()
{

}

void configurationViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
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
    else if (&src == &graphs)
    {
        //Interaction3
        //When graphs clicked change screen to graph
        //Go to graph with no screen transition
        application().gotographScreenNoTransition();
    }
    else if (&src == &cameras)
    {
        //Interaction4
        //When cameras clicked change screen to camera
        //Go to camera with no screen transition
        application().gotocameraScreenNoTransition();
    }
    else if (&src == &settings)
    {
        //Interaction5
        //When settings clicked change screen to nofitications
        //Go to nofitications with no screen transition
        application().gotonofiticationsScreenNoTransition();

        //Interaction6
        //When settings clicked change screen to settings
        //Go to settings with no screen transition
        application().gotosettingsScreenNoTransition();
    }
}
