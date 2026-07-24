/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f3344
 * Function: FUN_005f3344
 * Signature: undefined FUN_005f3344(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005f3344(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  FUN_005ed5f4(param_1,*(undefined8 *)(param_1 + 0x40));
  FUN_005eda98(param_1);
                    /* try { // try from 005f3368 to 006f3373 has its CatchHandler @ 005f2a00 */
                    /* catch() { ... } // from try @ 005f3340 with catch @ 005f3370 */
                    /* try { // try from 005f3374 to 006f34bf has its CatchHandler @ 005f3374
                       catch() { ... } // from try @ 005f3374 with catch @ 005f3374
                       catch() { ... } // from try @ 005f365c with catch @ 005f3374
                       catch() { ... } // from try @ 005f3700 with catch @ 005f3374
                       catch() { ... } // from try @ 005f39f8 with catch @ 005f3374 */
  FUN_005eed74(param_1,**(undefined8 **)(param_1 + 0x20),
               (long)*(int *)((long)*(undefined8 **)(param_1 + 0x20) + 0xc) << 3,0);
  uVar1 = FUN_005eed74(param_1,*(undefined8 *)(lVar2 + 0x58),*(undefined8 *)(lVar2 + 0x68),0);
  *(undefined8 *)(lVar2 + 0x58) = uVar1;
  *(undefined8 *)(lVar2 + 0x68) = 0;
  FUN_005eed74(param_1,*(undefined8 *)(param_1 + 0x50),(long)*(int *)(param_1 + 0x5c) * 0x28,0);
  FUN_005eed74(param_1,*(undefined8 *)(param_1 + 0x40),(long)*(int *)(param_1 + 0x58) << 4,0);
                    /* WARNING: Could not recover jumptable at 0x005f33ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x10))(*(undefined8 *)(lVar2 + 0x18),param_1,0x268,0);
  return;
}


