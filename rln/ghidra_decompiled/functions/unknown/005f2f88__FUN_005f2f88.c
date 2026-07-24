/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f2f88
 * Function: FUN_005f2f88
 * Signature: undefined FUN_005f2f88(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_005f2f88(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  
  lVar2 = FUN_005eed74(param_1,0,0,0xb8);
  FUN_005ee48c(param_1,lVar2,8);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
                    /* catch() { ... } // from try @ 005f2dc0 with catch @ 005f2fcc */
  *(undefined2 *)(lVar2 + 100) = 0x100;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined4 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0xa8) = 0;
  *(undefined8 *)(lVar2 + 0xb0) = 0;
  *(undefined8 *)(lVar2 + 0x68) = 0;
  *(undefined8 *)(lVar2 + 0x70) = 0;
  *(undefined8 *)(lVar2 + 0x98) = 0;
  *(undefined1 *)(lVar2 + 10) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined4 *)(lVar2 + 0x80) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x20) = uVar5;
  *(undefined8 *)(lVar2 + 0x5c) = 0;
                    /* catch() { ... } // from try @ 005f2dac with catch @ 005f300c */
  lVar3 = FUN_005eed74(param_1,0,0,0x140);
                    /* catch() { ... } // from try @ 005f2d08 with catch @ 005f3010 */
  *(long *)(lVar2 + 0x28) = lVar3;
  *(long *)(lVar2 + 0x48) = lVar3 + 0x118;
  *(long *)(lVar2 + 0x50) = lVar3;
  *(undefined4 *)(lVar2 + 0x5c) = 8;
  lVar4 = FUN_005eed74(param_1,0,0,0x2d0);
  plVar6 = *(long **)(lVar2 + 0x28);
  *(undefined4 *)(lVar2 + 0x58) = 0x2d;
  lVar3 = lVar4 + 0x10;
  *(long *)(lVar2 + 0x38) = lVar4 + 0x270;
  *(long *)(lVar2 + 0x40) = lVar4;
  plVar6[1] = lVar4;
  *(long *)(lVar2 + 0x10) = lVar3;
  *(undefined4 *)(lVar4 + 8) = 0;
  *plVar6 = lVar3;
  *(long *)(lVar2 + 0x18) = lVar3;
  plVar6[2] = lVar4 + 0x150;
  *(undefined8 *)(lVar2 + 0x78) = *(undefined8 *)(param_1 + 0x78);
  *(undefined4 *)(lVar2 + 0x80) = *(undefined4 *)(param_1 + 0x80);
                    /* catch() { ... } // from try @ 005f2cf4 with catch @ 005f3080 */
  *(undefined1 *)(lVar2 + 100) = *(undefined1 *)(param_1 + 100);
                    /* catch() { ... } // from try @ 005f2c8c with catch @ 005f3084 */
  uVar1 = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(lVar2 + 0x68) = uVar1;
  uVar5 = *(undefined8 *)(param_1 + 0x70);
  *(undefined4 *)(lVar2 + 0x6c) = uVar1;
  *(undefined8 *)(lVar2 + 0x70) = uVar5;
  return lVar2;
}


