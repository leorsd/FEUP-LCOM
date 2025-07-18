#include <lcom/lcf.h>

#include <stdint.h>

int(util_get_LSB)(uint16_t val, uint8_t *lsb) {
  *lsb = (uint8_t) (val & 0xFF);
  return 0;
}

int(util_get_MSB)(uint16_t val, uint8_t *msb) {
  *msb = (uint8_t) ((val>>8) & 0xFF);
  return 0;
}

int (util_sys_inb)(int port, uint8_t *value) {
  uint32_t val;
  if(sys_inb(port,&val) != 0) {
    printf("Failed in call sys_inb.\n");
    return 1;
  }
  *value = (uint8_t)(val & 0xFF);
  return 0;
}
