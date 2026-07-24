/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063c9c4
 * Function: FUN_0063c9c4
 * Signature: undefined FUN_0063c9c4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0063c9c4(long param_1,undefined1 *param_2,char param_3)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  *param_2 = 0x25;
  if ((uVar1 >> 0xb & 1) == 0) {
    puVar3 = param_2 + 1;
  }
  else {
    puVar3 = param_2 + 2;
    param_2[1] = 0x2b;
  }
                    /* try { // try from 0063c9dc to 0073ca03 has its CatchHandler @ 0063cf10 */
  puVar4 = puVar3;
  if ((uVar1 >> 10 & 1) != 0) {
    puVar4 = puVar3 + 1;
    *puVar3 = 0x23;
  }
  *puVar4 = 0x2e;
  puVar4[1] = 0x2a;
  puVar3 = puVar4 + 2;
  if (param_3 != '\0') {
                    /* try { // try from 0063ca04 to 0073cc2f has its CatchHandler @ 0063bacc */
    puVar3 = puVar4 + 3;
                    /* catch() { ... } // from try @ 0063bf24 with catch @ 0063ca08 */
    puVar4[2] = param_3;
  }
                    /* catch() { ... } // from try @ 0063bf0c with catch @ 0063ca0c */
                    /* catch() { ... } // from try @ 0063bef0 with catch @ 0063ca10 */
  if ((uVar1 & 0x104) != 4) {
    if ((uVar1 & 0x104) != 0x100) {
      uVar2 = 0x47;
      if ((uVar1 & 0x4000) == 0) {
        uVar2 = 0x67;
      }
      *puVar3 = uVar2;
      puVar3[1] = 0;
      return;
    }
    uVar2 = 0x45;
    if ((uVar1 & 0x4000) == 0) {
      uVar2 = 0x65;
    }
    *puVar3 = uVar2;
    puVar3[1] = 0;
    return;
  }
  *puVar3 = 0x66;
                    /* catch() { ... } // from try @ 0063bed4 with catch @ 0063ca84 */
  puVar3[1] = 0;
                    /* catch() { ... } // from try @ 0063bd84 with catch @ 0063ca88 */
  return;
}


