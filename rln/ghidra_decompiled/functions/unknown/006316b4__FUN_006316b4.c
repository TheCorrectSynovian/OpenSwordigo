/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006316b4
 * Function: FUN_006316b4
 * Signature: undefined FUN_006316b4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int FUN_006316b4(undefined1 *param_1,ulong param_2,long param_3,uint param_4,char param_5)

{
  long lVar1;
  ulong uVar2;
  undefined1 *puVar3;
  
                    /* catch() { ... } // from try @ 0063134c with catch @ 006316b4 */
  puVar3 = param_1;
  if (param_5 == '\0') {
                    /* catch() { ... } // from try @ 00630f08 with catch @ 00631704 */
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
                    /* try { // try from 006316d8 to 00731aab has its CatchHandler @ 00631e9c */
      puVar3 = puVar3 + -1;
      *puVar3 = *(undefined1 *)(param_3 + param_2 % 10 + 4);
      param_2 = uVar2;
    } while (uVar2 != 0);
  }
  return (int)param_1 - (int)puVar3;
}


