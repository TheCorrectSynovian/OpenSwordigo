/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064fbb0
 * Function: FUN_0064fbb0
 * Signature: undefined FUN_0064fbb0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16]
FUN_0064fbb0(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4,undefined8 param_5,
            long param_6,uint *param_7,long param_8)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  int local_8;
  int local_4;
  
                    /* try { // try from 0064fbb8 to 0074fbbf has its CatchHandler @ 006501dc */
                    /* try { // try from 0064fbc0 to 0074fc5b has its CatchHandler @ 0064fae4 */
  FUN_0064f6ac(param_6 + 0xd0);
  local_4 = 0;
  auVar6 = FUN_0064f8cc(param_1,param_2,param_3,param_4,param_5,&local_8,0,9999,4,param_6,&local_4);
  plVar4 = auVar6._0_8_;
  uVar5 = auVar6._8_8_ & 0xffffffff;
  if (local_4 == 0) {
    if (local_8 < 0) {
      *(int *)(param_8 + 0x14) = local_8 + 100;
    }
    else {
                    /* try { // try from 0064fc5c to 0074fc67 has its CatchHandler @ 006502f8 */
      *(int *)(param_8 + 0x14) = local_8 + -0x76c;
    }
    if (plVar4 == (long *)0x0) goto LAB_0064fcd0;
LAB_0064fc68:
                    /* try { // try from 0064fc68 to 0074fc77 has its CatchHandler @ 00650294 */
    if (auVar6._8_4_ == -1) {
      if ((uint *)plVar4[2] < (uint *)plVar4[3]) {
                    /* try { // try from 0064fd14 to 0074fd1b has its CatchHandler @ 006501e0 */
        uVar1 = *(uint *)plVar4[2];
      }
      else {
        uVar1 = (**(code **)(*plVar4 + 0x48))();
      }
      if (uVar1 == 0xffffffff) goto LAB_0064fcd0;
      uVar5 = (ulong)uVar1;
    }
    bVar3 = false;
    if (param_4 == (long *)0x0) goto LAB_0064fc94;
LAB_0064fc78:
    iVar2 = (int)param_5;
    if (iVar2 == -1) {
      if ((int *)param_4[2] < (int *)param_4[3]) {
        iVar2 = *(int *)param_4[2];
      }
      else {
        iVar2 = (**(code **)(*param_4 + 0x48))(param_4);
      }
    }
    if ((iVar2 == -1) != bVar3) goto LAB_0064fc94;
  }
  else {
    *param_7 = *param_7 | 4;
    if (plVar4 != (long *)0x0) goto LAB_0064fc68;
LAB_0064fcd0:
    plVar4 = (long *)0x0;
    bVar3 = true;
                    /* try { // try from 0064fcd8 to 0074fcdf has its CatchHandler @ 0065016c */
    if (param_4 != (long *)0x0) goto LAB_0064fc78;
  }
  *param_7 = *param_7 | 2;
LAB_0064fc94:
  auVar6._8_8_ = param_3 & 0xffffffff00000000 | uVar5;
  auVar6._0_8_ = plVar4;
                    /* try { // try from 0064fcb4 to 0074fcbf has its CatchHandler @ 006501e0 */
  return auVar6;
}


