#include "app/baseapp.h"
#include "agar/agar.h"

#include <iostream>

class GameApp : public app::GameApp {
  public:
  GameApp(int w, int h)
      : app::GameApp(w, h) {
  }

 private:
  void Initialize() override {
    render::LoadResource("resources/v.jpg", "auf");
  }
  void ProcessInput(const Uint8* keyboard, const MouseState& mouse) override {
  }
  void Render() override {
  }
  void Update(Uint32 millis) override {
  }
};

#undef main
int main() {
  try{
    GameApp(800, 800).Run();
  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }
    return 0;
}