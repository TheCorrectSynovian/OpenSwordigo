/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006009e0
 * Function: FUN_006009e0
 * Signature: undefined FUN_006009e0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006009e0(undefined8 param_1,uint *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  byte *pbVar6;
  
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  *(undefined8 *)(param_2 + 0xe) = param_1;
  *(undefined8 *)(param_2 + 0x10) = param_3;
  *(undefined8 *)(param_2 + 0x14) = param_4;
  *(undefined1 *)(param_2 + 0x16) = 0x2e;
  param_2[8] = 0x11f;
  param_2[1] = 1;
  param_2[2] = 1;
  uVar2 = FUN_005eed74(param_1,**(undefined8 **)(param_2 + 0x12),
                       (*(undefined8 **)(param_2 + 0x12))[2],0x20);
  puVar4 = *(undefined8 **)(param_2 + 0x12);
  *puVar4 = uVar2;
  puVar4[2] = 0x20;
  plVar3 = *(long **)(param_2 + 0x10);
  lVar5 = *plVar3;
  *plVar3 = lVar5 + -1;
  if (lVar5 == 0) {
    uVar1 = FUN_005f8650();
  }
  else {
    pbVar6 = (byte *)plVar3[1];
    plVar3[1] = (long)(pbVar6 + 1);
    uVar1 = (uint)*pbVar6;
  }
  *param_2 = uVar1;
  return;
}


