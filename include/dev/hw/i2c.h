#ifndef DEV_HW_I2C_H_INCLUDED
#define DEV_HW_I2C_H_INCLUDED

typedef struct i2c_dev {
    uint8_t ready;
    uint8_t port;
} i2c_dev;

void init_i2c1(void) __attribute__((section(".kernel")));
void init_i2c2(void) __attribute__((section(".kernel")));
uint8_t i2c_write(struct i2c_dev *i2c, uint8_t addr, uint8_t *data, uint32_t num);
uint8_t i2c_read(struct i2c_dev *i2c, uint8_t addr);

extern i2c_dev i2c1;
extern i2c_dev i2c2;

struct semaphore;
extern struct semaphore i2c1_semaphore;
extern struct semaphore i2c2_semaphore;

#endif
