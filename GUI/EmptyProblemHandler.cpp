#include "EmptyProblemHandler.h"
#include "GUIUtils.h"
#include <string>
using namespace std;
using namespace MiniGUI;

namespace {
    /* Graphics Constants. */
    const Font kFont(FontFamily::SERIF, FontStyle::BOLD_ITALIC, 36, Color(0x80, 0x00, 0x80));
    const Color kBackgroundColor = Color::fromHex(0x400040);

    const string kToDisplay = "Choose which demo to run.";
}

void EmptyProblemHandler::repaint() {
    /* Clear the window. */
    clearDisplay(window(), kBackgroundColor);

    /* Draw some text! */
    auto text = TextRender::construct(kToDisplay, {
                                          0, 0, window().getCanvasWidth(), window().getCanvasHeight()
                                      }, kFont);
    text->alignCenterVertically();
    text->alignCenterHorizontally();
    text->draw(window());
}
