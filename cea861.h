#ifndef _CEA861_H_
#define _CEA861_H_

typedef unsigned short uint16_t;
typedef unsigned int uint32_t;

typedef struct {
    uint16_t hactive;
    uint16_t vactive;
    enum {
        INTERLACED,
        PROGRESSIVE,
    } mode;
    uint16_t htotal;
    uint16_t hblank;
    uint16_t vtotal;
    uint16_t vblank;
    double   hfreq;
    double   vfreq;
    double   pixclk;
} cea861_timing_t;


#endif /* _CEA861_H_ */
