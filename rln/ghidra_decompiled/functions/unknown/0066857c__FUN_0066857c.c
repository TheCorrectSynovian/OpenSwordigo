/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066857c
 * Function: FUN_0066857c
 * Signature: undefined FUN_0066857c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_0066857c(long *param_1,char param_2,ulong param_3)

{
  char *pcVar1;
  long lVar2;
  
                    /* try { // try from 0066857c to 00768587 has its CatchHandler @ 00668778 */
  lVar2 = *param_1;
                    /* try { // try from 0066858c to 00768607 has its CatchHandler @ 00668784 */
  if (param_3 < *(ulong *)(lVar2 + -0x18)) {
    pcVar1 = (char *)(lVar2 + param_3);
    while( true ) {
      if (*pcVar1 != param_2) {
        return param_3;
      }
      param_3 = param_3 + 1;
      if (*(ulong *)(lVar2 + -0x18) <= param_3) break;
      param_2 = *(char *)(lVar2 + param_3);
    }
  }
  return 0xffffffffffffffff;
}


