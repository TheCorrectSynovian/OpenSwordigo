/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0065d6f4
 * Function: FUN_0065d6f4
 * Signature: undefined FUN_0065d6f4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_0065d6f4(long param_1,long param_2,long param_3)

{
  char cVar1;
  
                    /* try { // try from 0065d710 to 0075d71b has its CatchHandler @ 0065d7a8 */
  cVar1 = FUN_0061f654(param_1 + 0x68);
  if (cVar1 == '\0') {
                    /* try { // try from 0065d71c to 0075d7cb has its CatchHandler @ 0065d684 */
    if ((param_2 == 0) && (param_3 == 0)) {
      *(undefined8 *)(param_1 + 0xa0) = 1;
    }
    else if ((param_2 != 0) && (0 < param_3)) {
      *(long *)(param_1 + 0x98) = param_2;
      *(long *)(param_1 + 0xa0) = param_3;
      return param_1;
    }
  }
  return param_1;
}


