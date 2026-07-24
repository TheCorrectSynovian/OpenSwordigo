/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0065d768
 * Function: FUN_0065d768
 * Signature: undefined FUN_0065d768(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_0065d768(long param_1,long param_2,long param_3)

{
  char cVar1;
  
  cVar1 = FUN_0061f654(param_1 + 0x68);
  if (cVar1 == '\0') {
    if ((param_2 == 0) && (param_3 == 0)) {
      *(undefined8 *)(param_1 + 0xa0) = 1;
    }
    else if ((param_2 != 0) && (0 < param_3)) {
      *(long *)(param_1 + 0x98) = param_2;
                    /* try { // try from 0065d7cc to 0075d7d3 has its CatchHandler @ 0065d7dc */
      *(long *)(param_1 + 0xa0) = param_3;
                    /* try { // try from 0065d7d4 to 0075d7df has its CatchHandler @ 0065d684 */
      return param_1;
    }
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0065d710 with catch @ 0065d7a8
                        */
  return param_1;
}


