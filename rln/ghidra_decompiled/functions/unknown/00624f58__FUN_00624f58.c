/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00624f58
 * Function: FUN_00624f58
 * Signature: undefined FUN_00624f58(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00624f58(long *param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = *(long *)(*param_1 + -0x18);
                    /* try { // try from 00624f64 to 00724f8f has its CatchHandler @ 00625198 */
  if (param_2 == 8) {
    *(uint *)((long)param_1 + lVar1 + 0x18) =
         *(uint *)((long)param_1 + lVar1 + 0x18) & 0xffffffb5 | 0x40;
                    /* try { // try from 00624fcc to 00724fdf has its CatchHandler @ 00625140 */
    return;
  }
  if (param_2 != 10) {
    uVar2 = 8;
    if (param_2 != 0x10) {
      uVar2 = 0;
    }
    *(uint *)((long)param_1 + lVar1 + 0x18) =
         uVar2 | *(uint *)((long)param_1 + lVar1 + 0x18) & 0xffffffb5;
    return;
  }
  *(uint *)((long)param_1 + lVar1 + 0x18) = *(uint *)((long)param_1 + lVar1 + 0x18) & 0xffffffb5 | 2
  ;
  return;
}


