/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006273e0
 * Function: FUN_006273e0
 * Signature: undefined FUN_006273e0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_006273e0(long *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  char local_8 [8];
  
                    /* catch() { ... } // from try @ 006270f4 with catch @ 006273e0 */
                    /* catch() { ... } // from try @ 00626ffc with catch @ 006273e4 */
                    /* catch() { ... } // from try @ 00626de8 with catch @ 006273e8 */
                    /* catch() { ... } // from try @ 00626f8c with catch @ 006273ec */
                    /* catch() { ... } // from try @ 00626dc0 with catch @ 006273f0 */
                    /* catch() { ... } // from try @ 00626a3c with catch @ 006273f4 */
  param_1[1] = 0;
                    /* catch() { ... } // from try @ 00626a1c with catch @ 006273f8 */
                    /* catch() { ... } // from try @ 00626c6c with catch @ 006273fc */
  lVar3 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_006215c0(lVar3,*(uint *)(lVar3 + 0x20) & 0xfffffffd);
  FUN_00625fe4(local_8,param_1,1);
  if (local_8[0] == '\0') {
                    /* catch() { ... } // from try @ 00626c64 with catch @ 00627460 */
    return param_1;
  }
  lVar3 = (long)param_1 + *(long *)(*param_1 + -0x18);
  plVar2 = *(long **)(lVar3 + 0xe8);
  if (plVar2 != (long *)0x0) {
    uVar4 = plVar2[2];
    if ((ulong)plVar2[1] < uVar4) {
      iVar1 = *(int *)(uVar4 - 4);
      plVar2[2] = uVar4 - 4;
    }
    else {
      iVar1 = (**(code **)(*plVar2 + 0x58))(plVar2,0xffffffff);
    }
    if (iVar1 != -1) {
      return param_1;
    }
    lVar3 = (long)param_1 + *(long *)(*param_1 + -0x18);
  }
                    /* try { // try from 00627484 to 00727673 has its CatchHandler @ 0062767c */
  FUN_006215c0(lVar3,*(uint *)(lVar3 + 0x20) | 1);
  return param_1;
}


