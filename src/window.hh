#ifndef _LIBTUI_WINDOW_HH_
#define _LIBTUI_WINDOW_HH_

#include <ncurses.h>

namespace tui {
  class Window {
  public:
    ~Window();

    void refresh();   // redraws the window
  protected:
    WINDOW *cwin; // curses window
  };
}

#endif /* end of include guard: _LIBTUI_WINDOW_HH_ */