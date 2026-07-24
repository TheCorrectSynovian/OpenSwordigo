/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ee4b0
 * Function: FUN_005ee4b0
 * Signature: undefined FUN_005ee4b0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005ee4b0(long param_1,undefined8 *param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  
  lVar3 = *(long *)(param_1 + 0x20);
  *param_2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 **)(lVar3 + 0x28) = param_2;
  bVar4 = *(byte *)((long)param_2 + 9);
  if ((bVar4 & 7) == 0) {
    if (*(char *)(lVar3 + 0x21) == '\x01') {
      bVar4 = bVar4 | 4;
      *(byte *)((long)param_2 + 9) = bVar4;
      if ((int)((long *)param_2[2])[1] < 4) {
        return;
      }
      lVar3 = *(long *)param_2[2];
      if ((*(byte *)(lVar3 + 9) & 3) == 0) {
        return;
      }
      lVar2 = *(long *)(param_1 + 0x20);
      if (*(char *)(lVar2 + 0x21) == '\x01') {
        FUN_005ee364(lVar2,lVar3);
        return;
      }
      bVar1 = *(byte *)(lVar2 + 0x20);
    }
    else {
      bVar1 = *(byte *)(lVar3 + 0x20);
    }
    *(byte *)((long)param_2 + 9) = bVar4 & 0xf8 | bVar1 & 3;
  }
  return;
}


