/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f3230
 * Function: FUN_005f3230
 * Signature: undefined FUN_005f3230(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005f3230(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  
                    /* catch() { ... } // from try @ 005f2be0 with catch @ 005f323c */
  lVar5 = *(long *)(param_1 + 0x20);
  lVar1 = FUN_005eed74(param_1,0,0,0x140);
  *(long *)(param_1 + 0x28) = lVar1;
  *(long *)(param_1 + 0x48) = lVar1 + 0x118;
  *(long *)(param_1 + 0x50) = lVar1;
  *(undefined4 *)(param_1 + 0x5c) = 8;
  lVar2 = FUN_005eed74(param_1,0,0,0x2d0);
  plVar4 = *(long **)(param_1 + 0x28);
  lVar1 = lVar2 + 0x10;
  *(long *)(param_1 + 0x38) = lVar2 + 0x270;
  *(long *)(param_1 + 0x40) = lVar2;
  *(undefined4 *)(param_1 + 0x58) = 0x2d;
  plVar4[1] = lVar2;
  *(long *)(param_1 + 0x10) = lVar1;
  *(undefined4 *)(lVar2 + 8) = 0;
                    /* catch() { ... } // from try @ 005f2bd4 with catch @ 005f32a8 */
                    /* catch() { ... } // from try @ 005f2b58 with catch @ 005f32ac */
  *plVar4 = lVar1;
  *(long *)(param_1 + 0x18) = lVar1;
  plVar4[2] = lVar2 + 0x150;
  uVar3 = FUN_005f3db4(param_1,0,2);
  lVar1 = *(long *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x78) = uVar3;
  *(undefined4 *)(param_1 + 0x80) = 5;
  uVar3 = FUN_005f3db4(param_1,0,2);
  *(undefined8 *)(lVar1 + 0xa0) = uVar3;
  *(undefined4 *)(lVar1 + 0xa8) = 5;
  FUN_005f3464(param_1,0x20);
  FUN_005f4e10(param_1);
  FUN_006006c4(param_1);
  lVar1 = FUN_005f356c(param_1,"not enough memory",0x11);
                    /* catch() { ... } // from try @ 005f2b44 with catch @ 005f331c */
                    /* catch() { ... } // from try @ 005f2bc0 with catch @ 005f3320
                       catch() { ... } // from try @ 005f2c38 with catch @ 005f3320
                       catch() { ... } // from try @ 005f2ce4 with catch @ 005f3320
                       catch() { ... } // from try @ 005f2d9c with catch @ 005f3320 */
  *(byte *)(lVar1 + 9) = *(byte *)(lVar1 + 9) | 0x20;
  *(long *)(lVar5 + 0x70) = *(long *)(lVar5 + 0x78) << 2;
                    /* try { // try from 005f3340 to 006f3367 has its CatchHandler @ 005f3370 */
  return;
}


