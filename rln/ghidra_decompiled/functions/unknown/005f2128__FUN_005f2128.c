/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f2128
 * Function: FUN_005f2128
 * Signature: undefined FUN_005f2128(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005f2128(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_00600a74();
                    /* try { // try from 005f2148 to 006f246f has its CatchHandler @ 005f2518 */
  FUN_005f1154(param_1,param_2,0);
                    /* catch() { ... } // from try @ 005f1968 with catch @ 005f2154 */
                    /* catch() { ... } // from try @ 005f1960 with catch @ 005f2158 */
  FUN_005feacc(*(undefined8 *)(param_1 + 0x30),param_2);
                    /* catch() { ... } // from try @ 005f197c with catch @ 005f215c
                       catch() { ... } // from try @ 005f19c0 with catch @ 005f215c */
  if (*(int *)(param_1 + 0x10) != 0x5d) {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    uVar1 = FUN_0060072c(param_1,0x5d);
    uVar1 = FUN_005ef3d4(uVar2,"\'%s\' expected",uVar1);
                    /* catch() { ... } // from try @ 005f1a7c with catch @ 005f2194 */
    FUN_00600968(param_1,uVar1);
  }
  FUN_00600a74(param_1);
  return;
}


