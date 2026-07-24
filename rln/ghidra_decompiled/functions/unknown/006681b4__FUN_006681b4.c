/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006681b4
 * Function: FUN_006681b4
 * Signature: undefined FUN_006681b4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_006681b4(long *param_1,byte param_2,ulong param_3)

{
  void *pvVar1;
  long lVar2;
  
                    /* catch() { ... } // from try @ 00668198 with catch @ 006681bc */
  lVar2 = *param_1;
  if (*(ulong *)(lVar2 + -0x18) <= param_3) {
                    /* try { // try from 006681e0 to 0076821f has its CatchHandler @ 006681e0
                       catch() { ... } // from try @ 006681e0 with catch @ 006681e0
                       catch() { ... } // from try @ 006682dc with catch @ 006681e0
                       catch() { ... } // from try @ 00668358 with catch @ 006681e0 */
    return -1;
  }
  pvVar1 = memchr((void *)(lVar2 + param_3),(uint)param_2,*(ulong *)(lVar2 + -0x18) - param_3);
  lVar2 = (long)pvVar1 - lVar2;
  if (pvVar1 == (void *)0x0) {
    lVar2 = -1;
  }
  return lVar2;
}


