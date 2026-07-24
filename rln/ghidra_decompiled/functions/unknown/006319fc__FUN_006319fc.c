/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006319fc
 * Function: FUN_006319fc
 * Signature: undefined FUN_006319fc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16]
FUN_006319fc(undefined8 param_1,long *param_2,ulong param_3,long param_4,uint param_5,char param_6)

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
                    /* catch() { ... } // from try @ 00630d3c with catch @ 00631a2c */
  uVar5 = param_3 & 0xff;
  if ((uVar1 & 1) == 0) {
    param_2 = (long *)FUN_0063175c();
    uVar5 = (ulong)extraout_w1;
    goto LAB_00631a50;
  }
                    /* catch() { ... } // from try @ 00630ac0 with catch @ 00631a7c */
                    /* catch() { ... } // from try @ 00630cd4 with catch @ 00631a80 */
  lVar2 = FUN_0063c4d0(&DAT_007fbdd0);
  lVar7 = *(long *)(*(long *)(param_4 + 0xd0) + 0x18);
  lVar3 = *(long *)(lVar7 + lVar2 * 8);
  if (lVar3 == 0) {
    puVar4 = operator_new(0x90);
    *(undefined4 *)(puVar4 + 1) = 0;
    *puVar4 = &PTR_FUN_007b70c0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *(undefined1 *)(puVar4 + 4) = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    *(undefined1 *)(puVar4 + 9) = 0;
    *(undefined1 *)((long)puVar4 + 0x49) = 0;
    *(undefined1 *)(puVar4 + 0x11) = 0;
    FUN_0062dbf0(puVar4,param_4 + 0xd0);
    FUN_0063c340(*(undefined8 *)(param_4 + 0xd0),puVar4,lVar2);
    lVar3 = *(long *)(lVar7 + lVar2 * 8);
    if (param_6 == '\0') goto LAB_00631aa0;
LAB_00631b20:
    uVar8 = *(undefined8 *)(lVar3 + 0x28);
    lVar2 = *(long *)(param_4 + 0x10);
    lVar3 = (long)*(int *)(lVar3 + 0x30);
                    /* catch() { ... } // from try @ 00630974 with catch @ 00631b30 */
                    /* catch() { ... } // from try @ 0063116c with catch @ 00631b34
                       catch() { ... } // from try @ 0063131c with catch @ 00631b34 */
    if (lVar3 < lVar2) goto LAB_00631ab8;
LAB_00631b38:
    *(undefined8 *)(param_4 + 0x10) = 0;
    if ((char)param_3 != '\0') goto LAB_00631a50;
LAB_00631b40:
    lVar2 = (**(code **)(*param_2 + 0x60))(param_2,uVar8,lVar3);
                    /* try { // try from 00631b58 to 00731e97 has its CatchHandler @ 00631e9c */
    uVar5 = (ulong)(lVar3 != lVar2);
  }
  else {
    if (param_6 != '\0') goto LAB_00631b20;
LAB_00631aa0:
    uVar8 = *(undefined8 *)(lVar3 + 0x38);
    lVar2 = *(long *)(param_4 + 0x10);
                    /* try { // try from 00631aac to 00731b57 has its CatchHandler @ 006304b8 */
    lVar3 = (long)*(int *)(lVar3 + 0x40);
                    /* catch() { ... } // from try @ 006309f0 with catch @ 00631ab0 */
                    /* catch() { ... } // from try @ 00630cb0 with catch @ 00631ab4 */
    if (lVar2 <= lVar3) goto LAB_00631b38;
LAB_00631ab8:
                    /* catch() { ... } // from try @ 00630ca8 with catch @ 00631ab8 */
    __n = lVar2 - lVar3;
                    /* catch() { ... } // from try @ 00630c94 with catch @ 00631abc */
                    /* catch() { ... } // from try @ 00630cc0 with catch @ 00631ad0
                       catch() { ... } // from try @ 00630d04 with catch @ 00631ad0 */
    lVar2 = -(__n + 0x1e & 0xfffffffffffffff0);
    memset(&stack0xffffffffffffff90 + lVar2,param_5 & 0xff,__n);
    *(undefined8 *)(param_4 + 0x10) = 0;
    iVar6 = (int)__n;
    if ((uVar1 & 0xb0) == 0x20) {
      if ((char)param_3 != '\0') goto LAB_00631a50;
      lVar7 = (**(code **)(*param_2 + 0x60))(param_2,uVar8,lVar3);
      if (lVar3 == lVar7) {
        lVar2 = (**(code **)(*param_2 + 0x60))(param_2,&stack0xffffffffffffff90 + lVar2,(long)iVar6)
        ;
        uVar5 = (ulong)(iVar6 != lVar2);
        goto LAB_00631a50;
      }
    }
    else {
      if ((param_3 & 0xff) != 0) goto LAB_00631a50;
      lVar2 = (**(code **)(*param_2 + 0x60))(param_2,&stack0xffffffffffffff90 + lVar2,(long)iVar6);
      if (iVar6 == lVar2) goto LAB_00631b40;
    }
    uVar5 = 1;
  }
LAB_00631a50:
  auVar9._8_8_ = param_3 & 0xffffffffffffff00 | uVar5;
  auVar9._0_8_ = param_2;
  return auVar9;
}


