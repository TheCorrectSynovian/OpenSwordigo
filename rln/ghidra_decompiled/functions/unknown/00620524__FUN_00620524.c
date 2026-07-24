/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00620524
 * Function: FUN_00620524
 * Signature: undefined FUN_00620524(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


wctype_t FUN_00620524(undefined8 param_1,byte param_2)

{
  wctype_t wVar1;
  
  if (param_2 == 8) {
    wVar1 = wctype("space");
    return wVar1;
  }
  if (param_2 < 9) {
    if (param_2 == 3) {
      wVar1 = wctype("alpha");
      return wVar1;
    }
    if (param_2 < 4) {
      if (param_2 == 1) {
        wVar1 = wctype("upper");
        return wVar1;
      }
                    /* catch() { ... } // from try @ 00620390 with catch @ 00620590 */
      if (param_2 == 2) {
        wVar1 = wctype("lower");
        return wVar1;
      }
    }
    else {
      if (param_2 == 4) {
        wVar1 = wctype("digit");
        return wVar1;
      }
      if (param_2 == 7) {
        wVar1 = wctype("alnum");
        return wVar1;
      }
    }
  }
  else {
    if (param_2 == 0x20) {
                    /* try { // try from 00620608 to 00720613 has its CatchHandler @ 006202ec */
      wVar1 = wctype("cntrl");
      return wVar1;
    }
    if (param_2 < 0x21) {
      if (param_2 == 0x10) {
                    /* catch() { ... } // from try @ 006205b4 with catch @ 00620610 */
        wVar1 = wctype("punct");
        return wVar1;
      }
      if (param_2 == 0x17) {
                    /* try { // try from 006205b4 to 00720607 has its CatchHandler @ 00620610 */
        wVar1 = wctype("graph");
        return wVar1;
      }
    }
    else {
      if (param_2 == 0x44) {
        wVar1 = wctype("xdigit");
        return wVar1;
      }
      if (param_2 == 0x97) {
                    /* catch() { ... } // from try @ 00620350 with catch @ 00620578 */
                    /* catch() { ... } // from try @ 0062033c with catch @ 0062057c */
                    /* catch() { ... } // from try @ 00620348 with catch @ 00620580
                       catch() { ... } // from try @ 00620490 with catch @ 00620580 */
        wVar1 = wctype("print");
        return wVar1;
      }
    }
  }
  return 0;
}


