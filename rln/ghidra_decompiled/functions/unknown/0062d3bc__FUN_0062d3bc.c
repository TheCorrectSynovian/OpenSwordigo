/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062d3bc
 * Function: FUN_0062d3bc
 * Signature: undefined FUN_0062d3bc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16]
FUN_0062d3bc(long *param_1,long *param_2,ulong param_3,long param_4,undefined1 param_5,
            undefined8 param_6,byte *param_7,byte *param_8)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  char cVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  plVar6 = (long *)FUN_0062d354(param_4 + 0xd0);
  uVar8 = param_3 & 0xff;
  while (param_7 != param_8) {
    bVar2 = *param_7;
    cVar3 = *(char *)((long)plVar6 + (long)(int)(uint)bVar2 + 0x139);
    if (cVar3 == '\0') {
      cVar3 = (**(code **)(*plVar6 + 0x40))(plVar6,bVar2,0);
      if (cVar3 != '\0') {
                    /* try { // try from 0062d53c to 0072d543 has its CatchHandler @ 0062e5c4 */
        *(char *)((long)plVar6 + (long)(int)(uint)bVar2 + 0x139) = cVar3;
        goto LAB_0062d4bc;
      }
LAB_0062d4c4:
      if ((int)uVar8 != 0) goto LAB_0062d4a0;
      if ((byte *)param_2[6] <= (byte *)param_2[5]) {
        iVar5 = (**(code **)(*param_2 + 0x68))(param_2);
        uVar8 = (ulong)(iVar5 == -1);
        goto LAB_0062d4a0;
      }
      *(byte *)param_2[5] = *param_7;
      param_7 = param_7 + 1;
      param_2[5] = param_2[5] + 1;
    }
    else {
LAB_0062d4bc:
      if (cVar3 != '%') goto LAB_0062d4c4;
      pbVar1 = param_7 + 1;
      if (param_8 == pbVar1) break;
      bVar2 = param_7[1];
      cVar3 = *(char *)((long)plVar6 + (long)(int)(uint)bVar2 + 0x139);
      if (cVar3 == '\0') {
                    /* try { // try from 0062d564 to 0072d58b has its CatchHandler @ 0062e33c */
        cVar3 = (**(code **)(*plVar6 + 0x40))(plVar6,bVar2,0);
        if (cVar3 != '\0') {
          *(char *)((long)plVar6 + (long)(int)(uint)bVar2 + 0x139) = cVar3;
                    /* try { // try from 0062d58c to 0072d597 has its CatchHandler @ 0062e970 */
          goto LAB_0062d430;
        }
        cVar7 = '\0';
        param_7 = pbVar1;
        cVar4 = cVar3;
      }
      else {
LAB_0062d430:
        if ((cVar3 == 'O') || (cVar3 == 'E')) {
                    /* try { // try from 0062d440 to 0072d44b has its CatchHandler @ 0062e618 */
          pbVar1 = param_7 + 2;
          if (param_8 == pbVar1) break;
          bVar2 = param_7[2];
          cVar4 = *(char *)((long)plVar6 + (long)(int)(uint)bVar2 + 0x139);
          param_7 = pbVar1;
          cVar7 = cVar3;
                    /* try { // try from 0062d598 to 0072d59f has its CatchHandler @ 0062e5c0 */
                    /* try { // try from 0062d5a0 to 0072d617 has its CatchHandler @ 0062e970 */
          if ((cVar4 == '\0') &&
             (cVar4 = (**(code **)(*plVar6 + 0x40))(plVar6,bVar2,0), cVar4 != '\0')) {
            *(char *)((long)plVar6 + (long)(int)(uint)bVar2 + 0x139) = cVar4;
          }
        }
        else {
          cVar7 = '\0';
          param_7 = pbVar1;
          cVar4 = cVar3;
        }
      }
                    /* try { // try from 0062d46c to 0072d493 has its CatchHandler @ 0062e340 */
      auVar9 = (**(code **)(*param_1 + 0x10))
                         (param_1,param_2,param_3 & 0xffffffffffffff00 | uVar8,param_4,param_5,
                          param_6,cVar4,cVar7);
      param_2 = auVar9._0_8_;
                    /* try { // try from 0062d494 to 0072d49f has its CatchHandler @ 0062e970 */
      uVar8 = auVar9._8_8_ & 0xff;
      param_3 = param_3 & 0xffffffffffffff00;
LAB_0062d4a0:
                    /* try { // try from 0062d4a0 to 0072d4a7 has its CatchHandler @ 0062e614 */
      param_7 = param_7 + 1;
                    /* try { // try from 0062d4a8 to 0072d50f has its CatchHandler @ 0062e970 */
    }
  }
  auVar9._8_8_ = param_3 & 0xffffffffffffff00 | uVar8;
  auVar9._0_8_ = param_2;
  return auVar9;
}


