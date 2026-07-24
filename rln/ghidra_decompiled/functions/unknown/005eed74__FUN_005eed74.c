/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005eed74
 * Function: FUN_005eed74
 * Signature: undefined FUN_005eed74(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_005eed74(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  lVar1 = (**(code **)(lVar2 + 0x10))(*(undefined8 *)(lVar2 + 0x18));
                    /* try { // try from 005eeda0 to 006eeda3 has its CatchHandler @ 005eefc4 */
                    /* try { // try from 005eeda4 to 006eedd3 has its CatchHandler @ 005eec7c */
  if ((param_4 != 0) && (lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_005eb814(param_1,4);
  }
  *(long *)(lVar2 + 0x78) = (param_4 - param_3) + *(long *)(lVar2 + 0x78);
                    /* try { // try from 005eedd4 to 006eeddb has its CatchHandler @ 005eef2c */
  return lVar1;
}


