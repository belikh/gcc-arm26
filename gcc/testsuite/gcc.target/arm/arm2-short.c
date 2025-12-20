/* { dg-do compile } */
/* { dg-options "-mcpu=arm2 -m26bit -O2" } */

unsigned short read_short(unsigned short *p) {
    return *p;
}

void write_short(unsigned short *p, unsigned short v) {
    *p = v;
}
