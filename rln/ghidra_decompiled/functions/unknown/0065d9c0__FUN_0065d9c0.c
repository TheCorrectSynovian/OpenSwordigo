/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0065d9c0
 * Function: FUN_0065d9c0
 * Signature: undefined FUN_0065d9c0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


uint FUN_0065d9c0(long *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long lVar6;
  
  if ((*(uint *)(param_1 + 0xf) >> 3 & 1) == 0) {
    return 0xffffffff;
  }
  if (*(char *)((long)param_1 + 0xaa) == '\0') {
    uVar4 = param_1[2];
                    /* catch() { ... } // from try @ 0065d8bc with catch @ 0065d9f4 */
                    /* catch() { ... } // from try @ 0065d970 with catch @ 0065d9f8 */
    cVar1 = (char)param_1[0x18];
    if ((ulong)param_1[1] < uVar4) {
      param_1[2] = uVar4 - 1;
      uVar3 = (uint)*(byte *)(uVar4 - 1);
      goto LAB_0065da10;
    }
  }
  else {
                    /* try { // try from 0065da40 to 0075da67 has its CatchHandler @ 0065da88 */
    iVar2 = (**(code **)(*param_1 + 0x68))(param_1,0xffffffff);
    if (iVar2 == -1) {
      return 0xffffffff;
    }
    lVar6 = param_1[0x13];
    cVar1 = (char)param_1[0x18];
    param_1[1] = lVar6;
    param_1[2] = lVar6;
    param_1[3] = lVar6;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[6] = 0;
    *(undefined1 *)((long)param_1 + 0xaa) = 0;
  }
                    /* catch() { ... } // from try @ 0065da40 with catch @ 0065da88 */
  lVar6 = (**(code **)(*param_1 + 0x20))(param_1,0xffffffffffffffff,1,0x18);
  if (lVar6 == -1) {
    return 0xffffffff;
  }
                    /* catch() { ... } // from try @ 0065d86c with catch @ 0065daac */
  uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
                    /* try { // try from 0065dab8 to 0075dabb has its CatchHandler @ 0065dac4 */
                    /* try { // try from 0065dabc to 0075dacf has its CatchHandler @ 0065d7e0 */
  if (uVar3 == 0xffffffff) {
    return 0xffffffff;
  }
LAB_0065da10:
                    /* catch() { ... } // from try @ 0065d8d8 with catch @ 0065da10 */
  if ((param_2 == 0xffffffff) < (param_2 == uVar3)) {
    return param_2;
  }
  if (param_2 != 0xffffffff) {
    if (cVar1 != '\0') {
                    /* catch() { ... } // from try @ 0065dab8 with catch @ 0065dac4 */
      return 0xffffffff;
    }
    if ((char)param_1[0x18] == '\0') {
      puVar5 = (undefined1 *)((long)param_1 + 0xab);
      lVar6 = param_1[2];
      param_1[0x17] = param_1[3];
      param_1[1] = (long)puVar5;
      param_1[2] = (long)puVar5;
      param_1[0x16] = lVar6;
      param_1[3] = (long)param_1 + 0xac;
      *(undefined1 *)(param_1 + 0x18) = 1;
    }
    else {
      puVar5 = (undefined1 *)param_1[2];
    }
    *(undefined1 *)((long)param_1 + 0xa9) = 1;
    *puVar5 = (char)param_2;
    return param_2;
  }
  return 0;
}


