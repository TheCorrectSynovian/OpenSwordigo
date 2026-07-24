/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00668098
 * Function: FUN_00668098
 * Signature: undefined FUN_00668098(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00668098(long *param_1,char param_2,ulong param_3)

{
  char *pcVar1;
  ulong uVar2;
  long lVar3;
  
                    /* catch() { ... } // from try @ 00667848 with catch @ 0066809c */
  lVar3 = *(long *)(*param_1 + -0x18);
                    /* catch() { ... } // from try @ 00667a58 with catch @ 006680a8 */
  if (lVar3 != 0) {
    uVar2 = lVar3 - 1;
                    /* catch() { ... } // from try @ 00667948 with catch @ 006680b8 */
    if (uVar2 < param_3) {
      param_3 = uVar2;
    }
    do {
                    /* catch() { ... } // from try @ 0066745c with catch @ 006680d0 */
      if (param_3 == 0xffffffffffffffff) {
                    /* catch() { ... } // from try @ 0066765c with catch @ 006680dc */
        return;
      }
      pcVar1 = (char *)(*param_1 + param_3);
                    /* catch() { ... } // from try @ 00667474 with catch @ 006680c4 */
      param_3 = param_3 - 1;
    } while (*pcVar1 != param_2);
  }
  return;
}


