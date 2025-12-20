/* { dg-do compile } */
/* { dg-options "-mcpu=arm2 -m26bit" } */

void func() {}

/* { dg-final { scan-assembler "movs" } } */
