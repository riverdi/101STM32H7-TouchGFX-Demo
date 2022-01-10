#ifndef NOFITICATIONSVIEW_HPP
#define NOFITICATIONSVIEW_HPP

#include <gui_generated/nofitications_screen/nofiticationsViewBase.hpp>
#include <gui/nofitications_screen/nofiticationsPresenter.hpp>

class nofiticationsView : public nofiticationsViewBase
{
public:
    nofiticationsView();
    virtual ~nofiticationsView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // NOFITICATIONSVIEW_HPP
