/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef MAINVIEWBASE_HPP
#define MAINVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/main_screen/mainPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/ToggleButton.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <touchgfx/containers/clock/DigitalClock.hpp>
#include <touchgfx/containers/Slider.hpp>

class mainViewBase : public touchgfx::View<mainPresenter>
{
public:
    mainViewBase();
    virtual ~mainViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Box box1;
    touchgfx::Image Image20;
    touchgfx::Image Image4;
    touchgfx::Box box2;
    touchgfx::Box box3;
    touchgfx::ToggleButton toogle_kitchen;
    touchgfx::ToggleButton toogle_bedroom;
    touchgfx::ToggleButton toogle_living;
    touchgfx::ToggleButton toogle_bathroom;
    touchgfx::ToggleButton toogle_garage;
    touchgfx::TextArea kitchen;
    touchgfx::TextArea bedroom;
    touchgfx::TextArea living;
    touchgfx::TextArea bathroom;
    touchgfx::TextArea garage;
    touchgfx::ToggleButton lampka_kuchnia;
    touchgfx::ToggleButton lampka_bedroom;
    touchgfx::ToggleButton lampka_living;
    touchgfx::ToggleButton lampka_bathroom;
    touchgfx::ToggleButton lampka_garage;
    touchgfx::Image Image17;
    touchgfx::Button google;
    touchgfx::Button name;
    touchgfx::Button conf;
    touchgfx::TextArea dee;
    touchgfx::Button main_page;
    touchgfx::Button map;
    touchgfx::Button graphs;
    touchgfx::Button cameras;
    touchgfx::Button configuration;
    touchgfx::Button notifications;
    touchgfx::Button settings;
    touchgfx::ToggleButton toggleButton1;
    touchgfx::DigitalClock digitalClock1;
    touchgfx::Slider slider1;
    touchgfx::TextArea bathroom_1;
    touchgfx::TextArea bathroom_1_1;
    touchgfx::TextArea bathroom_1_1_1;
    touchgfx::Slider slider1_1;
    touchgfx::TextArea bathroom_1_2;
    touchgfx::TextArea bathroom_1_1_2;
    touchgfx::TextArea bathroom_1_1_1_1;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<mainViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // MAINVIEWBASE_HPP
