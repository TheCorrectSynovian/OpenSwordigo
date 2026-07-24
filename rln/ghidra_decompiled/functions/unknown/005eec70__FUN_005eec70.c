/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005eec70
 * Function: FUN_005eec70
 * Signature: undefined FUN_005eec70(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_005eec70(long param_1,undefined8 param_2,int *param_3,ulong param_4,int param_5,
                 undefined8 param_6)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
                    /* catch() { ... } // from try @ 005eed30 with catch @ 005eec7c
                       catch() { ... } // from try @ 005eeda4 with catch @ 005eec7c
                       catch() { ... } // from try @ 005eee70 with catch @ 005eec7c
                       catch() { ... } // from try @ 005eefc0 with catch @ 005eec7c
                       catch() { ... } // from try @ 005ef020 with catch @ 005eec7c */
  iVar2 = *param_3;
  iVar1 = param_5;
  if (param_5 < 0) {
    iVar1 = param_5 + 1;
  }
  if (iVar2 < iVar1 >> 1) {
    param_5 = iVar2 * 2;
    if (param_5 < 5) {
      param_5 = 4;
    }
  }
  else if (param_5 <= iVar2) {
    FUN_005eb320(param_1,param_6);
  }
                    /* try { // try from 005eecd8 to 006eed2f has its CatchHandler @ 005eefd8 */
  uVar3 = 0;
  if (param_4 != 0) {
    uVar3 = 0xfffffffffffffffd / param_4;
  }
  if (uVar3 < (ulong)(long)(param_5 + 1)) {
    FUN_005eb320(param_1,"memory allocation error: block too big");
    lVar4 = 0;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x20);
    iVar1 = *param_3;
    lVar5 = (long)param_5 * param_4;
    lVar4 = (**(code **)(lVar6 + 0x10))
                      (*(undefined8 *)(lVar6 + 0x18),param_2,(long)iVar1 * param_4,lVar5);
                    /* try { // try from 005eed30 to 006eed9f has its CatchHandler @ 005eec7c */
    if ((lVar5 != 0) && (lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_005eb814(param_1,4);
    }
    *(ulong *)(lVar6 + 0x78) = (lVar5 - (long)iVar1 * param_4) + *(long *)(lVar6 + 0x78);
  }
  *param_3 = param_5;
  return lVar4;
}


