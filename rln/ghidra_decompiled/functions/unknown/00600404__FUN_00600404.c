/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00600404
 * Function: FUN_00600404
 * Signature: undefined FUN_00600404(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00600404(long *param_1,int *param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
                    /* try { // try from 00600404 to 0070047f has its CatchHandler @ 00600394 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_005fe488();
  switch(*param_2) {
  case 1:
    iVar2 = (int)param_1[6];
    if (iVar2 <= *(int *)((long)param_1 + 0x34)) {
LAB_00600578:
                    /* try { // try from 00600578 to 0070059f has its CatchHandler @ 006005b0 */
      uVar4 = *(undefined4 *)(param_1[3] + 8);
      uVar3 = param_3 << 0x17 | param_3 << 6 | 3;
      goto LAB_0060058c;
    }
                    /* try { // try from 006004a8 to 007004b3 has its CatchHandler @ 00600394 */
    if (iVar2 == 0) {
      if ((int)param_3 < (int)(uint)*(byte *)((long)param_1 + 0x4a)) goto LAB_00600578;
    }
    else {
                    /* catch() { ... } // from try @ 00600480 with catch @ 006004b0 */
                    /* try { // try from 006004b4 to 007004e7 has its CatchHandler @ 006004b4
                       catch() { ... } // from try @ 006004b4 with catch @ 006004b4
                       catch() { ... } // from try @ 006005a8 with catch @ 006004b4 */
      uVar3 = *(uint *)(*(long *)(*param_1 + 0x18) + ((long)iVar2 + -1) * 4);
      if ((((uVar3 & 0x3f) != 3) || ((int)param_3 < (int)(uVar3 >> 6 & 0xff))) ||
         ((int)((uVar3 >> 0x17) + 1) < (int)param_3)) goto LAB_00600578;
                    /* try { // try from 006004e8 to 007004eb has its CatchHandler @ 006004fc */
      if ((int)(uVar3 >> 0x17) < (int)param_3) {
        *(uint *)(*(long *)(*param_1 + 0x18) + ((long)iVar2 + -1) * 4) =
             uVar3 & 0x7fffff | param_3 << 0x17;
      }
    }
    break;
  case 2:
  case 3:
                    /* catch() { ... } // from try @ 00600400 with catch @ 00600460 */
    uVar4 = *(undefined4 *)(param_1[3] + 8);
    uVar3 = param_3 << 6 | (uint)(*param_2 == 2) << 0x17 | 2;
    goto LAB_0060058c;
  case 4:
                    /* try { // try from 00600520 to 00700547 has its CatchHandler @ 006005c4 */
    uVar4 = *(undefined4 *)(param_1[3] + 8);
    uVar3 = param_3 << 6 | param_2[2] << 0xe | 1;
    goto LAB_0060058c;
  case 5:
    local_48 = *(undefined8 *)(param_2 + 2);
    local_40 = 3;
    iVar2 = FUN_005fe158(param_1,&local_48,&local_48);
    uVar4 = *(undefined4 *)(param_1[3] + 8);
    uVar3 = param_3 << 6 | iVar2 << 0xe | 1;
LAB_0060058c:
    FUN_006001e8(param_1,uVar3,uVar4);
    break;
  default:
    goto switchD_00600454_caseD_6;
  case 0xb:
                    /* try { // try from 00600480 to 007004a7 has its CatchHandler @ 006004b0 */
    uVar3 = *(uint *)(*(long *)(*param_1 + 0x18) + (long)param_2[2] * 4);
    *(uint *)(*(long *)(*param_1 + 0x18) + (long)param_2[2] * 4) =
         uVar3 & 0xffffc000 | uVar3 & 0x3f | (param_3 & 0xff) << 6;
    break;
  case 0xc:
                    /* catch() { ... } // from try @ 006004e8 with catch @ 006004fc */
    if (param_2[2] != param_3) {
      uVar3 = param_2[2] << 0x17 | param_3 << 6;
      uVar4 = *(undefined4 *)(param_1[3] + 8);
      goto LAB_0060058c;
    }
  }
  param_2[2] = param_3;
  *param_2 = 0xc;
switchD_00600454_caseD_6:
                    /* try { // try from 006005a0 to 007005a7 has its CatchHandler @ 006005c4 */
                    /* try { // try from 006005a8 to 007005b3 has its CatchHandler @ 006004b4 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 00600578 with catch @ 006005b0 */
                    /* try { // try from 006005b4 to 007005bb has its CatchHandler @ 006005c0 */
                    /* catch() { ... } // from try @ 006005b4 with catch @ 006005c0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00600520 with catch @ 006005c4
                       catch() { ... } // from try @ 006005a0 with catch @ 006005c4 */
  __stack_chk_fail();
}


