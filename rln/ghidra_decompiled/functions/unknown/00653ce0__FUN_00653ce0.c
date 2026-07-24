/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00653ce0
 * Function: FUN_00653ce0
 * Signature: undefined FUN_00653ce0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16]
FUN_00653ce0(undefined8 param_1,long *param_2,ulong param_3,long param_4,wchar_t param_5,
            char param_6)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  byte extraout_w1;
  ulong uVar5;
  int iVar6;
  size_t __n;
  long lVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  
  uVar1 = *(uint *)(param_4 + 0x18);
  uVar5 = param_3 & 0xff;
  if ((uVar1 & 1) == 0) {
    param_2 = (long *)FUN_00653a38();
    uVar5 = (ulong)extraout_w1;
    goto LAB_00653d30;
  }
  lVar2 = FUN_0063c4d0(&DAT_007fd2a8);
  lVar7 = *(long *)(*(long *)(param_4 + 0xd0) + 0x18);
  lVar3 = *(long *)(lVar7 + lVar2 * 8);
  if (lVar3 == 0) {
    puVar4 = operator_new(0x150);
    *(undefined4 *)(puVar4 + 1) = 0;
    *puVar4 = &PTR_FUN_007b7c80;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *(undefined1 *)(puVar4 + 4) = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    *(undefined4 *)(puVar4 + 9) = 0;
                    /* catch() { ... } // from try @ 00653e6c with catch @ 00653ed0 */
    *(undefined4 *)((long)puVar4 + 0x4c) = 0;
    *(undefined1 *)(puVar4 + 0x29) = 0;
    FUN_0064fe98(puVar4,param_4 + 0xd0);
                    /* catch() { ... } // from try @ 00653e40 with catch @ 00653ee0 */
    FUN_0063c340(*(undefined8 *)(param_4 + 0xd0),puVar4,lVar2);
    lVar3 = *(long *)(lVar7 + lVar2 * 8);
    if (param_6 == '\0') goto LAB_00653d80;
LAB_00653e04:
    uVar8 = *(undefined8 *)(lVar3 + 0x28);
    lVar2 = *(long *)(param_4 + 0x10);
    lVar3 = (long)*(int *)(lVar3 + 0x30);
    if (lVar3 < lVar2) goto LAB_00653d98;
LAB_00653e1c:
    *(undefined8 *)(param_4 + 0x10) = 0;
    if ((char)param_3 != '\0') goto LAB_00653d30;
LAB_00653e24:
    lVar2 = (**(code **)(*param_2 + 0x60))(param_2,uVar8,lVar3);
                    /* try { // try from 00653e40 to 00753e4b has its CatchHandler @ 00653ee0 */
    uVar5 = (ulong)(lVar3 != lVar2);
  }
  else {
    if (param_6 != '\0') goto LAB_00653e04;
LAB_00653d80:
    uVar8 = *(undefined8 *)(lVar3 + 0x38);
    lVar2 = *(long *)(param_4 + 0x10);
    lVar3 = (long)*(int *)(lVar3 + 0x40);
    if (lVar2 <= lVar3) goto LAB_00653e1c;
LAB_00653d98:
    __n = lVar2 - lVar3;
    lVar2 = -(__n * 4 + 0x1e & 0xfffffffffffffff0);
    wmemset((wchar_t *)(&stack0xffffffffffffff90 + lVar2),param_5,__n);
    *(undefined8 *)(param_4 + 0x10) = 0;
    iVar6 = (int)__n;
    if ((uVar1 & 0xb0) == 0x20) {
      if ((char)param_3 != '\0') goto LAB_00653d30;
      lVar7 = (**(code **)(*param_2 + 0x60))(param_2,uVar8,lVar3);
      if (lVar3 == lVar7) {
                    /* try { // try from 00653e6c to 00753e6f has its CatchHandler @ 00653ed0 */
                    /* try { // try from 00653e70 to 00753f03 has its CatchHandler @ 00653c94 */
        lVar2 = (**(code **)(*param_2 + 0x60))(param_2,&stack0xffffffffffffff90 + lVar2,(long)iVar6)
        ;
        uVar5 = (ulong)(iVar6 != lVar2);
        goto LAB_00653d30;
      }
    }
    else {
      if ((param_3 & 0xff) != 0) goto LAB_00653d30;
      lVar2 = (**(code **)(*param_2 + 0x60))(param_2,&stack0xffffffffffffff90 + lVar2,(long)iVar6);
      if (iVar6 == lVar2) goto LAB_00653e24;
    }
    uVar5 = 1;
  }
LAB_00653d30:
  auVar9._8_8_ = param_3 & 0xffffffffffffff00 | uVar5;
  auVar9._0_8_ = param_2;
  return auVar9;
}


