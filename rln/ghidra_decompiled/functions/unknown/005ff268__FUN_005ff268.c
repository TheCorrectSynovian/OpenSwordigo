/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ff268
 * Function: FUN_005ff268
 * Signature: undefined FUN_005ff268(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005ff268(long *param_1,int *param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  
  if (*param_2 == 0xc) {
LAB_005ff348:
    if ((((uint)param_2[2] >> 8 & 1) == 0) &&
       ((int)(uint)*(byte *)((long)param_1 + 0x4a) <= param_2[2])) {
      *(int *)((long)param_1 + 0x3c) = *(int *)((long)param_1 + 0x3c) + -1;
    }
  }
  else {
    if ((*param_2 == 0xb) &&
       (uVar3 = *(uint *)(*(long *)(*param_1 + 0x18) + (long)param_2[2] * 4), (uVar3 & 0x3f) == 0x13
       )) {
      uVar3 = uVar3 >> 0x17;
      param_3 = (uint)(param_3 == 0);
      uVar2 = 0x1a;
      *(int *)(param_1 + 6) = (int)param_1[6] + -1;
      iVar4 = 0;
      goto LAB_005ff384;
    }
    iVar1 = *(int *)((long)param_1 + 0x3c);
    pbVar5 = (byte *)(*param_1 + 0x73);
    iVar4 = iVar1 + 1;
    iVar6 = iVar4;
    if ((int)(uint)*pbVar5 <= iVar1) {
      if (0xf8 < iVar1) {
        FUN_00600968(param_1[3],"function or expression too complex");
        pbVar5 = (byte *)(*param_1 + 0x73);
        iVar6 = *(int *)((long)param_1 + 0x3c) + 1;
      }
      *pbVar5 = (byte)iVar4;
    }
    *(int *)((long)param_1 + 0x3c) = iVar6;
    FUN_00600404(param_1,param_2,iVar6 + -1);
    if (*param_2 == 0xc) goto LAB_005ff348;
  }
  iVar4 = param_2[2];
  uVar2 = 0x1b;
  uVar3 = 0xff;
LAB_005ff384:
  FUN_006005c8(param_1,uVar2,uVar3,iVar4,param_3);
  return;
}


