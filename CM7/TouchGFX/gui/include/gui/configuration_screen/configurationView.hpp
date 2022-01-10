#ifndef CONFIGURATIONVIEW_HPP
#define CONFIGURATIONVIEW_HPP

#include <gui_generated/configuration_screen/configurationViewBase.hpp>
#include <gui/configuration_screen/configurationPresenter.hpp>

class configurationView : public configurationViewBase
{
public:
    configurationView();
    virtual ~configurationView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // CONFIGURATIONVIEW_HPP
