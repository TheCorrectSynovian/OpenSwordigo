/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f3ec8
 * Function: FUN_005f3ec8
 * Signature: undefined FUN_005f3ec8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005f3ec8(undefined8 param_1,long param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  if (param_3 == 0) {
    puVar2 = &LAB_0069a2a0;
    uVar6 = 0;
    lVar3 = 0;
    *(undefined1 **)(param_2 + 0x20) = &LAB_0069a2a0;
  }
  else {
    iVar1 = FUN_005eee4c(param_3 + -1);
    uVar6 = iVar1 + 1;
    if (0x19 < iVar1) {
      FUN_005eb320(param_1,"table overflow");
    }
    iVar1 = 1 << (ulong)(uVar6 & 0x1f);
    if (iVar1 < -1) {
      puVar2 = (undefined1 *)FUN_005eede0(param_1);
    }
    else {
      puVar2 = (undefined1 *)FUN_005eed74(param_1,0,0,(long)iVar1 * 0x28);
    }
    *(undefined1 **)(param_2 + 0x20) = puVar2;
    if (uVar6 == 0x1f) {
      lVar3 = -0x80000000;
    }
    else {
      lVar4 = 0;
      lVar5 = 0;
      lVar3 = (long)iVar1;
      do {
        *(undefined8 *)(puVar2 + lVar4 + 0x20) = 0;
        *(undefined4 *)(puVar2 + lVar4 + 0x18) = 0;
        *(undefined4 *)(puVar2 + lVar4 + 8) = 0;
        puVar2 = *(undefined1 **)(param_2 + 0x20);
        lVar5 = lVar5 + 1;
        lVar4 = lVar4 + 0x28;
      } while (lVar5 < lVar3);
    }
  }
  *(char *)(param_2 + 0xb) = (char)uVar6;
  *(undefined1 **)(param_2 + 0x28) = puVar2 + lVar3 * 0x28;
  return;
}


