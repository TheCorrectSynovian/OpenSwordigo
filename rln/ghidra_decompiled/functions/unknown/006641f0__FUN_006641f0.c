/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006641f0
 * Function: FUN_006641f0
 * Signature: undefined FUN_006641f0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006641f0(long *param_1,long *param_2,undefined8 *param_3,uint param_4)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = param_1 + 1;
  lVar2 = param_2[1];
  *param_1 = lVar2;
  lVar2 = *(long *)(lVar2 + -0x18);
  *(long *)((long)param_1 + lVar2) = param_2[2];
  FUN_006219c8((long)param_1 + lVar2,0);
  lVar2 = *param_2;
  *param_1 = lVar2;
  *(long *)((long)param_1 + *(long *)(lVar2 + -0x18)) = param_2[3];
  FUN_00662010(plVar1);
  FUN_006219c8((long)param_1 + *(long *)(*param_1 + -0x18),plVar1);
  lVar2 = FUN_00663bdc(plVar1,*param_3,param_4 | 0x10);
  if (lVar2 != 0) {
    FUN_006215c0((long)param_1 + *(long *)(*param_1 + -0x18),0);
    return;
  }
                    /* try { // try from 006642a8 to 00764307 has its CatchHandler @ 006642a8
                       catch() { ... } // from try @ 006642a8 with catch @ 006642a8
                       catch() { ... } // from try @ 00664310 with catch @ 006642a8
                       catch() { ... } // from try @ 0066439c with catch @ 006642a8
                       catch() { ... } // from try @ 00664408 with catch @ 006642a8
                       catch() { ... } // from try @ 00664500 with catch @ 006642a8 */
  lVar2 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_006215c0(lVar2,*(uint *)(lVar2 + 0x20) | 4);
  return;
}


