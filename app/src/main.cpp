#include <zephyr/kernel.h>
#include <zephyr/logging/log.h>

LOG_MODULE_REGISTER(main, CONFIG_LOG_DEFAULT_LEVEL);

using namespace OF;

int main() {
  LOG_INF("main");
  while (true) {
    k_sleep(K_MSEC(1000));
  }
}
