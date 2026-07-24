/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062395c
 * Function: FUN_0062395c
 * Signature: undefined FUN_0062395c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_0062395c(long *param_1,undefined1 *param_2,long param_3,uint param_4)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  long *plVar7;
  undefined1 *puVar8;
  char local_8 [8];
  
                    /* try { // try from 0062397c to 0072398b has its CatchHandler @ 00623c74 */
  param_1[1] = 0;
  FUN_006230e4(local_8,param_1,1);
  if (local_8[0] == '\0') {
    uVar5 = 0;
  }
  else {
    plVar7 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
    pbVar4 = (byte *)plVar7[2];
    if ((byte *)plVar7[3] <= pbVar4) goto LAB_00623a18;
LAB_006239bc:
    uVar2 = (uint)*pbVar4;
LAB_006239c0:
    puVar8 = param_2;
    if (uVar2 != 0xffffffff && uVar2 != (param_4 & 0xff)) {
      do {
        param_2 = puVar8;
        if (param_3 <= param_1[1] + 1) break;
        param_2 = puVar8 + 1;
        *puVar8 = (char)uVar2;
        pbVar4 = (byte *)plVar7[2];
                    /* try { // try from 006239f4 to 007239fb has its CatchHandler @ 00623c28 */
        pbVar6 = (byte *)plVar7[3];
        param_1[1] = param_1[1] + 1;
        if (pbVar4 < pbVar6) {
          pbVar4 = pbVar4 + 1;
          plVar7[2] = (long)pbVar4;
        }
        else {
          iVar3 = (**(code **)(*plVar7 + 0x50))(plVar7);
          uVar2 = 0xffffffff;
          if (iVar3 == -1) goto LAB_006239c0;
          pbVar4 = (byte *)plVar7[2];
          pbVar6 = (byte *)plVar7[3];
        }
        if (pbVar4 < pbVar6) goto LAB_006239bc;
LAB_00623a18:
        uVar2 = (**(code **)(*plVar7 + 0x48))(plVar7);
        puVar8 = param_2;
        if (uVar2 == 0xffffffff || uVar2 == (param_4 & 0xff)) break;
      } while( true );
    }
    uVar5 = 0;
    if (uVar2 == 0xffffffff) {
      uVar5 = 2;
    }
  }
  if (0 < param_3) {
    *param_2 = 0;
  }
  if (param_1[1] == 0) {
    uVar5 = uVar5 | 4;
  }
  else if (uVar5 == 0) {
                    /* try { // try from 00623ad8 to 00723aff has its CatchHandler @ 00623d68 */
    return param_1;
  }
                    /* try { // try from 00623a68 to 00723a8f has its CatchHandler @ 00623d6c */
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_00620c14(lVar1,uVar5 | *(uint *)(lVar1 + 0x20));
  return param_1;
}


