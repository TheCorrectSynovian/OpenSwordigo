/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006209c4
 * Function: FUN_006209c4
 * Signature: undefined FUN_006209c4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_006209c4(long param_1,ulong param_2,ulong param_3,undefined1 param_4,long param_5)

{
  undefined1 uVar1;
  uint __c;
  int iVar2;
  long lVar3;
  
                    /* try { // try from 006209ec to 007209f3 has its CatchHandler @ 006221dc */
  if (*(char *)(param_1 + 0x18) == '\0') {
    if (param_2 < param_3) {
      lVar3 = 0;
      do {
                    /* try { // try from 00620a14 to 00720a1b has its CatchHandler @ 006223fc */
        iVar2 = wctob(*(wint_t *)(param_2 + lVar3 * 4));
                    /* try { // try from 00620a1c to 00720a2f has its CatchHandler @ 006223f8 */
        uVar1 = (char)iVar2;
        if (iVar2 == -1) {
          uVar1 = param_4;
        }
        *(undefined1 *)(param_5 + lVar3) = uVar1;
        lVar3 = lVar3 + 1;
                    /* try { // try from 00620a30 to 00720a93 has its CatchHandler @ 00622804 */
      } while (lVar3 != (~param_2 + param_3 >> 2) + 1);
    }
  }
  else if (param_2 < param_3) {
    lVar3 = 0;
    do {
      __c = *(uint *)(param_2 + lVar3 * 4);
      if (__c < 0x80) {
        *(undefined1 *)(param_5 + lVar3) = *(undefined1 *)(param_1 + (ulong)__c + 0x19);
      }
      else {
        iVar2 = wctob(__c);
        uVar1 = (char)iVar2;
                    /* try { // try from 00620aa0 to 00720aa7 has its CatchHandler @ 006221ac */
        if (iVar2 == -1) {
          uVar1 = param_4;
        }
        *(undefined1 *)(param_5 + lVar3) = uVar1;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != (~param_2 + param_3 >> 2) + 1);
  }
  return param_3;
}


