/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061f31c
 * Function: FUN_0061f31c
 * Signature: undefined FUN_0061f31c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


char * FUN_0061f31c(uint param_1)

{
                    /* try { // try from 0061f320 to 0071f32b has its CatchHandler @ 0061f694 */
                    /* try { // try from 0061f338 to 0071f33b has its CatchHandler @ 0061f59c */
  switch(param_1 & 0x3d) {
  case 1:
  case 0x11:
                    /* try { // try from 0061f388 to 0071f3af has its CatchHandler @ 0061f4f0 */
    return "a";
  default:
    return (char *)0x0;
  case 5:
  case 0x15:
    return "ab";
  case 8:
                    /* try { // try from 0061f3dc to 0071f3ef has its CatchHandler @ 0061f544 */
    return "r";
  case 9:
  case 0x19:
                    /* try { // try from 0061f360 to 0071f367 has its CatchHandler @ 0061f54c */
    return "a+";
  case 0xc:
    return "rb";
  case 0xd:
  case 0x1d:
    return "a+b";
  case 0x10:
  case 0x30:
    return "w";
  case 0x14:
  case 0x34:
    return "wb";
  case 0x18:
    return "r+";
  case 0x1c:
    return "r+b";
  case 0x38:
                    /* try { // try from 0061f3cc to 0071f3db has its CatchHandler @ 0061f548 */
    return "w+";
  case 0x3c:
    return "w+b";
  }
}


