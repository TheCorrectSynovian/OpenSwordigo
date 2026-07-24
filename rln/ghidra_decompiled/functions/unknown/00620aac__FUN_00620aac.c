/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00620aac
 * Function: FUN_00620aac
 * Signature: undefined FUN_00620aac(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00620aac(long param_1)

{
  long lVar1;
  undefined1 uVar2;
  int iVar3;
  wint_t wVar4;
  undefined8 uVar5;
  long lVar6;
  wint_t *pwVar7;
  
  lVar6 = 0;
                    /* try { // try from 00620ac0 to 00720ac7 has its CatchHandler @ 006223f4 */
  do {
    iVar3 = wctob((wint_t)lVar6);
                    /* try { // try from 00620adc to 00720b3f has its CatchHandler @ 006227cc */
    lVar1 = param_1 + lVar6;
    lVar6 = lVar6 + 1;
    if (iVar3 == -1) {
      *(undefined1 *)(param_1 + 0x18) = 0;
      goto LAB_00620af0;
    }
                    /* try { // try from 00620ac8 to 00720adb has its CatchHandler @ 006223f0 */
    *(char *)(lVar1 + 0x19) = (char)iVar3;
  } while (lVar6 != 0x80);
  *(undefined1 *)(param_1 + 0x18) = 1;
LAB_00620af0:
  lVar6 = 0;
  pwVar7 = (wint_t *)(param_1 + 0x9c);
  do {
    iVar3 = (int)lVar6;
    lVar6 = lVar6 + 1;
    wVar4 = btowc(iVar3);
    *pwVar7 = wVar4;
    pwVar7 = pwVar7 + 1;
  } while (lVar6 != 0x100);
  lVar6 = 0;
  do {
    uVar2 = (undefined1)(1 << (ulong)((uint)lVar6 & 0x1f));
    *(undefined1 *)(param_1 + lVar6 + 0x49c) = uVar2;
    uVar5 = FUN_00620524(param_1,uVar2);
    lVar1 = lVar6 * 8;
    lVar6 = lVar6 + 1;
    *(undefined8 *)(param_1 + lVar1 + 0x4b0) = uVar5;
  } while (lVar6 != 0x10);
                    /* try { // try from 00620b4c to 00720b53 has its CatchHandler @ 0062217c */
  return;
}


