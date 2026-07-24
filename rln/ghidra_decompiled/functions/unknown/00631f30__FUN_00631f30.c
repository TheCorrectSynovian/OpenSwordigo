/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00631f30
 * Function: FUN_00631f30
 * Signature: undefined FUN_00631f30(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int FUN_00631f30(undefined1 *param_1,ulong param_2,long param_3,uint param_4,char param_5)

{
  long lVar1;
  ulong uVar2;
  undefined1 *puVar3;
  
  puVar3 = param_1;
  if (param_5 == '\0') {
    if ((param_4 & 0x4a) == 0x40) {
      do {
        uVar2 = param_2 & 7;
        param_2 = param_2 >> 3;
        puVar3 = puVar3 + -1;
        *puVar3 = *(undefined1 *)(param_3 + uVar2 + 4);
      } while (param_2 != 0);
    }
    else {
      lVar1 = 0x14;
      if ((param_4 & 0x4000) == 0) {
        lVar1 = 4;
      }
      do {
        uVar2 = param_2 & 0xf;
        param_2 = param_2 >> 4;
        puVar3 = puVar3 + -1;
        *puVar3 = *(undefined1 *)(param_3 + lVar1 + uVar2);
      } while (param_2 != 0);
    }
  }
  else {
    do {
      uVar2 = param_2 / 10;
      puVar3 = puVar3 + -1;
      *puVar3 = *(undefined1 *)(param_3 + param_2 % 10 + 4);
      param_2 = uVar2;
    } while (uVar2 != 0);
  }
  return (int)param_1 - (int)puVar3;
}


