/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064f8cc
 * Function: FUN_0064f8cc
 * Signature: undefined FUN_0064f8cc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16]
FUN_0064f8cc(undefined8 param_1,long *param_2,ulong param_3,long *param_4,int param_5,int *param_6,
            int param_7,int param_8,ulong param_9,long param_10,uint *param_11)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  undefined1 auVar10 [16];
  
                    /* catch() { ... } // from try @ 0064eefc with catch @ 0064f900 */
                    /* catch() { ... } // from try @ 0064f0ac with catch @ 0064f914 */
  plVar2 = (long *)FUN_0064f6ac(param_10 + 0xd0);
                    /* catch() { ... } // from try @ 0064f598 with catch @ 0064f918 */
                    /* catch() { ... } // from try @ 0064f628 with catch @ 0064f91c */
  uVar3 = param_3 & 0xffffffff;
  if (param_9 == 2) {
    iVar9 = 10;
  }
  else {
    iVar9 = 1000;
    if (param_9 != 4) {
      iVar9 = 1;
    }
  }
                    /* catch() { ... } // from try @ 0064f190 with catch @ 0064f934 */
  iVar8 = 0;
  uVar7 = 0;
  do {
    if (param_2 == (long *)0x0) {
LAB_0064f9c4:
      param_2 = (long *)0x0;
      if (param_4 == (long *)0x0) {
joined_r0x0064f974:
        if (param_9 == uVar7) {
          *param_6 = iVar8;
        }
        else {
                    /* try { // try from 0064f980 to 0074f98b has its CatchHandler @ 0064eeb8 */
          if ((uVar7 == 2) && (param_9 == 4)) {
                    /* catch() { ... } // from try @ 0064f804 with catch @ 0064f988
                       catch() { ... } // from try @ 0064f958 with catch @ 0064f988 */
            *param_6 = iVar8 + -100;
          }
          else {
            *param_11 = *param_11 | 4;
          }
        }
        auVar10._8_8_ = param_3 & 0xffffffff00000000 | uVar3;
        auVar10._0_8_ = param_2;
        return auVar10;
      }
      bVar5 = true;
      bVar6 = true;
joined_r0x0064f9d4:
      if (param_5 == -1) {
        if ((int *)param_4[2] < (int *)param_4[3]) {
          param_5 = *(int *)param_4[2];
        }
        else {
          param_5 = (**(code **)(*param_4 + 0x48))(param_4);
        }
        bVar6 = bVar5;
        if (param_5 == -1) {
          param_4 = (long *)0x0;
        }
      }
                    /* try { // try from 0064f958 to 0074f97f has its CatchHandler @ 0064f988 */
      if (((param_5 == -1) == bVar6) || (param_9 <= uVar7)) goto joined_r0x0064f974;
      if (param_2 == (long *)0x0) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = uVar3;
        if ((int)uVar3 == -1) {
          if ((uint *)param_2[2] < (uint *)param_2[3]) {
            uVar1 = *(uint *)param_2[2];
          }
          else {
            uVar1 = (**(code **)(*param_2 + 0x48))(param_2);
          }
          uVar4 = (ulong)uVar1;
                    /* try { // try from 0064fae4 to 0074fb23 has its CatchHandler @ 0064fae4
                       catch() { ... } // from try @ 0064fae4 with catch @ 0064fae4
                       catch() { ... } // from try @ 0064fb58 with catch @ 0064fae4
                       catch() { ... } // from try @ 0064fbc0 with catch @ 0064fae4
                       catch() { ... } // from try @ 006500f0 with catch @ 0064fae4
                       catch() { ... } // from try @ 00650158 with catch @ 0064fae4
                       catch() { ... } // from try @ 0065030c with catch @ 0064fae4 */
          uVar3 = uVar4;
          if (uVar1 == 0xffffffff) {
            param_2 = (long *)0x0;
          }
        }
      }
    }
    else {
      uVar4 = uVar3;
      if ((int)uVar3 == -1) {
        if ((uint *)param_2[2] < (uint *)param_2[3]) {
          uVar1 = *(uint *)param_2[2];
        }
        else {
                    /* try { // try from 0064fb58 to 0074fbb7 has its CatchHandler @ 0064fae4 */
          uVar1 = (**(code **)(*param_2 + 0x48))(param_2);
        }
        if (uVar1 == 0xffffffff) goto LAB_0064f9c4;
        uVar4 = (ulong)uVar1;
      }
      uVar3 = uVar4;
      if (param_4 != (long *)0x0) {
        bVar5 = false;
        bVar6 = false;
        goto joined_r0x0064f9d4;
      }
      if (param_9 <= uVar7) goto joined_r0x0064f974;
    }
    uVar1 = (**(code **)(*plVar2 + 0x60))(plVar2,uVar4,0x2a);
    uVar1 = (uVar1 & 0xff) - 0x30;
    if (9 < (uVar1 & 0xff)) goto joined_r0x0064f974;
    iVar8 = iVar8 * 10 + uVar1;
    if ((param_8 < iVar8 * iVar9) || (iVar8 * iVar9 + iVar9 <= param_7)) goto joined_r0x0064f974;
    iVar9 = iVar9 / 10;
    if (param_2 == (long *)0x0) {
      uVar7 = uVar7 + 1;
    }
    else {
      if ((ulong)param_2[2] < (ulong)param_2[3]) {
        param_2[2] = param_2[2] + 4;
      }
      else {
        (**(code **)(*param_2 + 0x50))(param_2);
      }
      uVar3 = 0xffffffff;
      uVar7 = uVar7 + 1;
    }
  } while( true );
}


