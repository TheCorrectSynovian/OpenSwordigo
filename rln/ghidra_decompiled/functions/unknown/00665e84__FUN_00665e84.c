/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00665e84
 * Function: FUN_00665e84
 * Signature: undefined FUN_00665e84(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00665e84(long *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = (long)(PTR_DAT_007e5de8 + 0x18);
  switch(param_3) {
  case 1:
    FUN_0066918c(param_1,"Future already retrieved",0x18);
    return param_1;
  case 2:
    FUN_0066918c(param_1,"Promise already satisfied",0x19);
    return param_1;
  case 3:
    FUN_0066918c(param_1,"No associated state",0x13);
    return param_1;
  case 4:
    FUN_0066918c(param_1,"Broken promise",0xe);
    return param_1;
  default:
                    /* try { // try from 00665ec0 to 00765ecf has its CatchHandler @ 0066629c */
    FUN_0066918c(param_1,"Unknown error",0xd);
                    /* try { // try from 00665ed0 to 007662bf has its CatchHandler @ 00665968 */
    return param_1;
  }
}


