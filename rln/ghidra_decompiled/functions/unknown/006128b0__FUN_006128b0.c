/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006128b0
 * Function: FUN_006128b0
 * Signature: undefined FUN_006128b0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006128b0(uint *param_1,long *param_2,uint param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  uint *puVar7;
  ulong uVar8;
  void *pvVar9;
  undefined8 uVar10;
  uint *puVar11;
  undefined4 local_70;
  undefined2 local_6c [2];
  long local_68;
  
                    /* try { // try from 006128c0 to 007128df has its CatchHandler @ 006127bc */
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 00612898 with catch @ 006128dc */
                    /* catch() { ... } // from try @ 006129e4 with catch @ 006128e0 */
  uVar6 = (**(code **)(*param_2 + 0x10))(param_2,&local_70,4);
  if ((uVar6 & 1) != 0) {
    do {
      uVar2 = local_70;
                    /* try { // try from 00612930 to 00712957 has its CatchHandler @ 0061298c */
      uVar6 = (**(code **)(*param_2 + 0x10))(param_2,&local_70,4);
      uVar5 = local_70;
      if ((uVar6 & 1) == 0) break;
      if (uVar2 == (param_3 | 0x80000000)) {
        uVar10 = 1;
                    /* try { // try from 00612bfc to 00712c23 has its CatchHandler @ 00612c2c */
        goto LAB_00612bc8;
      }
      switch(uVar2) {
      case 9000:
        uVar6 = (**(code **)(*param_2 + 0x10))(param_2,&local_70,4);
        if ((uVar6 & 1) == 0) goto LAB_00612bc4;
        *param_1 = local_70;
        break;
      case 0x2329:
                    /* try { // try from 00612a50 to 00712a5b has its CatchHandler @ 00612a68 */
        uVar6 = (**(code **)(*param_2 + 0x10))(param_2,&local_70,4);
        if ((uVar6 & 1) == 0) goto LAB_00612bc4;
        param_1[1] = local_70;
        break;
      case 0x232a:
                    /* catch() { ... } // from try @ 00612930 with catch @ 0061298c */
        uVar6 = (**(code **)(*param_2 + 0x10))(param_2,&local_70,4);
        if ((uVar6 & 1) == 0) goto LAB_00612bc4;
        param_1[2] = local_70;
        break;
      case 0x232b:
        if ((param_4 & 1) == 0) {
                    /* try { // try from 00612a8c to 00712ab3 has its CatchHandler @ 00612abc */
          uVar6 = (**(code **)(*param_2 + 0x10))(param_2,&local_70,4);
          if ((uVar6 & 1) == 0) goto LAB_00612bc4;
                    /* try { // try from 00612ab4 to 00712acf has its CatchHandler @ 00612a04 */
                    /* catch() { ... } // from try @ 00612a8c with catch @ 00612abc */
          *(ulong *)(param_1 + 4) =
               (ulong)local_70._3_1_ << 0x18 | (ulong)local_70._2_1_ << 0x10 |
               (ulong)local_70._1_1_ << 8 | (ulong)(byte)local_70;
                    /* catch() { ... } // from try @ 00612a1c with catch @ 00612ac0 */
        }
        else {
                    /* try { // try from 006129bc to 007129e3 has its CatchHandler @ 00612a00 */
          if (*param_1 < 0xf) {
            uVar2 = 1 << (ulong)(*param_1 & 0x1f);
            if ((uVar2 & 0x3f6) == 0) {
              if ((uVar2 & 0x1808) != 0) {
                uVar6 = (ulong)(local_70 >> 1);
                if (local_70 >> 1 == 0) goto LAB_00612b78;
                puVar7 = calloc(uVar6,2);
                    /* catch() { ... } // from try @ 00612b80 with catch @ 00612b10
                       catch() { ... } // from try @ 00612c24 with catch @ 00612b10 */
                uVar10 = 0;
                if (puVar7 != (uint *)0x0) {
                  bVar4 = true;
                  puVar11 = puVar7;
                  do {
                    uVar8 = (**(code **)(*param_2 + 0x10))(param_2,local_6c,2);
                    bVar1 = (uVar8 & 1) != 0;
                    if (bVar1) {
                      *(undefined2 *)puVar11 = local_6c[0];
                    }
                    bVar4 = (bool)(bVar4 & bVar1);
                    uVar6 = uVar6 - 1;
                    puVar11 = (uint *)((long)puVar11 + 2);
                  } while (uVar6 != 0);
                  goto LAB_00612b6c;
                }
                goto LAB_00612bc8;
              }
                    /* try { // try from 00612ad0 to 00712adb has its CatchHandler @ 00612adc */
              if ((uVar2 & 0x6400) != 0) {
                    /* catch() { ... } // from try @ 00612ad0 with catch @ 00612adc */
                if (local_70 == 0) {
                  pvVar9 = *(void **)(param_1 + 4);
                }
                else {
                    /* try { // try from 00612ae0 to 00712ae3 has its CatchHandler @ 00612ae8 */
                    /* catch() { ... } // from try @ 00612ae0 with catch @ 00612ae8 */
                  pvVar9 = calloc((ulong)local_70,1);
                  *(void **)(param_1 + 4) = pvVar9;
                  if (pvVar9 == (void *)0x0) {
                    uVar10 = 0;
                    goto LAB_00612bc8;
                  }
                }
                uVar6 = (**(code **)(*param_2 + 0x10))(param_2,pvVar9,uVar5);
                goto joined_r0x00612a78;
              }
            }
            else {
              uVar6 = (ulong)(local_70 >> 2);
              if (local_70 >> 2 == 0) {
LAB_00612b78:
                puVar7 = (uint *)0x0;
              }
              else {
                puVar7 = calloc(uVar6,4);
                    /* try { // try from 006129e4 to 00712a03 has its CatchHandler @ 006128e0 */
                uVar10 = 0;
                if (puVar7 == (uint *)0x0) goto LAB_00612bc8;
                bVar4 = true;
                puVar11 = puVar7;
                do {
                    /* catch() { ... } // from try @ 006129bc with catch @ 00612a00 */
                    /* catch() { ... } // from try @ 00612ab4 with catch @ 00612a04 */
                  uVar8 = (**(code **)(*param_2 + 0x10))(param_2,&local_70,4);
                  bVar1 = (uVar8 & 1) != 0;
                  if (bVar1) {
                    *puVar11 = local_70;
                    /* try { // try from 00612a1c to 00712a23 has its CatchHandler @ 00612ac0 */
                  }
                  bVar4 = (bool)(bVar4 & bVar1);
                  uVar6 = uVar6 - 1;
                  puVar11 = puVar11 + 1;
                } while (uVar6 != 0);
LAB_00612b6c:
                if (!bVar4) goto LAB_00612bc4;
              }
                    /* try { // try from 00612b7c to 00712b7f has its CatchHandler @ 00612bdc */
              *(uint **)(param_1 + 4) = puVar7;
                    /* try { // try from 00612b80 to 00712bfb has its CatchHandler @ 00612b10 */
            }
          }
        }
        break;
      default:
                    /* catch() { ... } // from try @ 00612a50 with catch @ 00612a68 */
        uVar6 = (**(code **)(*param_2 + 0x18))(param_2,local_70);
joined_r0x00612a78:
        if ((uVar6 & 1) == 0) goto LAB_00612bc4;
      }
      uVar6 = (**(code **)(*param_2 + 0x10))(param_2,&local_70,4);
    } while ((uVar6 & 1) != 0);
  }
LAB_00612bc4:
  uVar10 = 0;
LAB_00612bc8:
  if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* catch() { ... } // from try @ 00612b7c with catch @ 00612bdc */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10);
}


