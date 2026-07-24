/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00667088
 * Function: FUN_00667088
 * Signature: undefined FUN_00667088(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00667088(long *param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  int *piVar5;
  int iVar6;
  size_t __n;
  undefined1 *__src;
  ulong uVar7;
  
  __src = (undefined1 *)*param_1;
  uVar7 = *(ulong *)(__src + -0x10);
  if ((param_2 != uVar7) || (0 < *(int *)(__src + -8))) {
    if (param_2 < *(ulong *)(__src + -0x18)) {
      param_2 = *(ulong *)(__src + -0x18);
    }
    if (0x3ffffffffffffff9 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_0066554c("basic_string::_S_create");
    }
                    /* try { // try from 006670cc to 007670f7 has its CatchHandler @ 00668010 */
    if (uVar7 < param_2) {
      if (param_2 < uVar7 << 1) {
        param_2 = uVar7 << 1;
      }
      if ((0x1000 < param_2 + 0x39) && (uVar7 < param_2)) {
                    /* try { // try from 006670f8 to 0076712f has its CatchHandler @ 0066801c */
        param_2 = (param_2 + 0x1000) - (param_2 + 0x39 & 0xfff);
        if (0x3ffffffffffffff9 < param_2) {
          param_2 = 0x3ffffffffffffff9;
        }
      }
    }
    plVar3 = operator_new(param_2 + 0x19);
    __n = *(size_t *)(__src + -0x18);
    plVar3[1] = param_2;
    *(undefined4 *)(plVar3 + 2) = 0;
    lVar4 = 0;
    if (__n != 0) {
      if (__n == 1) {
        *(undefined1 *)(plVar3 + 3) = *__src;
        lVar4 = *(long *)(__src + -0x18);
      }
      else {
                    /* try { // try from 00667184 to 00767213 has its CatchHandler @ 0066801c */
        memcpy(plVar3 + 3,__src,__n);
        lVar4 = *(long *)(__src + -0x18);
      }
    }
    if (plVar3 != &DAT_007fd2e0) {
      *plVar3 = lVar4;
      *(undefined1 *)((long)plVar3 + lVar4 + 0x18) = 0;
    }
    lVar4 = *param_1;
                    /* try { // try from 00667154 to 00767157 has its CatchHandler @ 0066813c */
    if ((undefined8 *)(lVar4 + -0x18) != &DAT_007fd2e0) {
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar6 = *(int *)(lVar4 + -8);
        *(int *)(lVar4 + -8) = iVar6 + -1;
      }
      else {
        piVar5 = (int *)(lVar4 + -8);
        do {
          iVar6 = *piVar5;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar2) {
            *piVar5 = iVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar6 < 1) {
        operator_delete((undefined8 *)(lVar4 + -0x18));
      }
    }
    *param_1 = (long)(plVar3 + 3);
  }
                    /* try { // try from 0066716c to 00767183 has its CatchHandler @ 00667ff4 */
  return;
}


