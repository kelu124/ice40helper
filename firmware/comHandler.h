// ----------------------------------------------------------------------------
// 
// 
// ----------------------------------------------------------------------------
#include <stdint.h>

// ----------------------------------------------------------------------------
void comHandler_init();

// ----------------------------------------------------------------------------
void comHandler_task();

// ----------------------------------------------------------------------------
void comHandler_analyse(uint8_t* buf, int32_t len);
