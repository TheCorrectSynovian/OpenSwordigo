/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0065421c
 * Function: FUN_0065421c
 * Signature: undefined FUN_0065421c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_0065421c(undefined4 *param_1,ulong param_2,long param_3,uint param_4,char param_5)

{
  long lVar1;
  ulong uVar2;
  undefined4 *puVar3;
  
  puVar3 = param_1;
  if (param_5 == '\0') {
    if ((param_4 & 0x4a) == 0x40) {
      do {
        uVar2 = param_2 & 7;
        param_2 = param_2 >> 3;
        puVar3 = puVar3 + -1;
        *puVar3 = *(undefined4 *)(param_3 + (uVar2 + 4) * 4);
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
        *puVar3 = *(undefined4 *)(param_3 + (uVar2 + lVar1) * 4);
      } while (param_2 != 0);
    }
  }
  else {
    do {
      uVar2 = param_2 / 10;
      puVar3 = puVar3 + -1;
      *puVar3 = *(undefined4 *)(param_3 + (param_2 % 10 + 4) * 4);
      param_2 = uVar2;
    } while (uVar2 != 0);
  }
  return (ulong)((long)param_1 - (long)puVar3) >> 2;
}


