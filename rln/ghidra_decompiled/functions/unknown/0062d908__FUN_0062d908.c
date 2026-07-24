/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062d908
 * Function: FUN_0062d908
 * Signature: undefined FUN_0062d908(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16]
FUN_0062d908(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4,undefined8 param_5,
            long param_6,uint *param_7,long param_8)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  int local_8;
  int local_4;
  
                    /* try { // try from 0062d934 to 0072d937 has its CatchHandler @ 0062e6a0 */
  FUN_0062d354(param_6 + 0xd0);
  local_4 = 0;
                    /* try { // try from 0062d960 to 0072d967 has its CatchHandler @ 0062e4b8 */
  auVar7 = FUN_0062d5d4(param_1,param_2,param_3,param_4,param_5,&local_8,0,9999,4,param_6,&local_4);
  plVar6 = auVar7._0_8_;
                    /* try { // try from 0062d990 to 0072d99b has its CatchHandler @ 0062e468 */
  uVar5 = auVar7._8_8_ & 0xffffffff;
  if (local_4 == 0) {
    if (local_8 < 0) {
      *(int *)(param_8 + 0x14) = local_8 + 100;
    }
    else {
      *(int *)(param_8 + 0x14) = local_8 + -0x76c;
    }
  }
  else {
                    /* try { // try from 0062da14 to 0072da1b has its CatchHandler @ 0062e450 */
    *param_7 = *param_7 | 4;
                    /* try { // try from 0062da1c to 0072da2f has its CatchHandler @ 0062e44c */
  }
                    /* try { // try from 0062d9bc to 0072d9e3 has its CatchHandler @ 0062e2e0 */
  if (plVar6 == (long *)0x0) {
LAB_0062da20:
    plVar6 = (long *)0x0;
    iVar4 = 1;
    if (param_4 != (long *)0x0) goto LAB_0062d9d0;
  }
  else {
    if (auVar7._8_4_ == -1) {
      if ((byte *)plVar6[2] < (byte *)plVar6[3]) {
        uVar5 = (ulong)*(byte *)plVar6[2];
      }
      else {
        uVar3 = (**(code **)(*plVar6 + 0x48))();
        if (uVar3 == 0xffffffff) goto LAB_0062da20;
        uVar5 = (ulong)uVar3;
      }
    }
    iVar4 = 0;
    if (param_4 == (long *)0x0) goto LAB_0062d9e4;
LAB_0062d9d0:
    iVar1 = 0;
    if ((int)param_5 == -1) {
                    /* try { // try from 0062da44 to 0072da53 has its CatchHandler @ 0062e728 */
      if ((ulong)param_4[2] < (ulong)param_4[3]) {
        iVar1 = 0;
      }
      else {
        iVar2 = (**(code **)(*param_4 + 0x48))(param_4);
                    /* try { // try from 0062da8c to 0072dab3 has its CatchHandler @ 0062e290 */
        iVar1 = 1;
        if (iVar2 != -1) {
          iVar1 = 0;
        }
      }
    }
    if (iVar4 != iVar1) goto LAB_0062d9e4;
  }
                    /* try { // try from 0062da30 to 0072da43 has its CatchHandler @ 0062e688 */
  *param_7 = *param_7 | 2;
LAB_0062d9e4:
                    /* try { // try from 0062d9e4 to 0072d9eb has its CatchHandler @ 0062e464 */
  auVar7._8_8_ = param_3 & 0xffffffff00000000 | uVar5;
  auVar7._0_8_ = plVar6;
                    /* try { // try from 0062d9ec to 0072d9ff has its CatchHandler @ 0062e460 */
                    /* try { // try from 0062da00 to 0072da13 has its CatchHandler @ 0062e690 */
  return auVar7;
}


