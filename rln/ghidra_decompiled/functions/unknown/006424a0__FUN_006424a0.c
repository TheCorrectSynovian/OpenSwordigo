/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006424a0
 * Function: FUN_006424a0
 * Signature: undefined FUN_006424a0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_006424a0(long *param_1,long param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  undefined1 uStack_11;
  char local_10 [8];
  long *local_8;
  
                    /* try { // try from 006424a0 to 007424c7 has its CatchHandler @ 00642584 */
  FUN_006423a0(local_10,param_1);
  if ((param_2 == 0) || (local_10[0] == '\0')) {
    if (param_2 != 0) goto LAB_006424f8;
    uVar5 = 1;
  }
  else {
                    /* try { // try from 006424e8 to 0074250f has its CatchHandler @ 00642574 */
    lVar3 = FUN_0064bc2c(param_2,*(undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8)
                         ,&uStack_11);
    uVar5 = 4;
    if (lVar3 != 0) goto LAB_006424f8;
  }
                    /* try { // try from 00642558 to 007425f7 has its CatchHandler @ 006422ec */
  lVar3 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* catch() { ... } // from try @ 00642530 with catch @ 0064256c */
  FUN_006215c0(lVar3,uVar5 | *(uint *)(lVar3 + 0x20));
LAB_006424f8:
  plVar4 = local_8;
  lVar3 = *(long *)(*local_8 + -0x18);
                    /* try { // try from 00642530 to 00742557 has its CatchHandler @ 0064256c */
  if (((((*(uint *)((long)local_8 + lVar3 + 0x18) >> 0xd & 1) != 0) &&
       (cVar1 = std::uncaught_exception(), cVar1 == '\0')) &&
      (plVar4 = *(long **)((long)plVar4 + lVar3 + 0xe8), plVar4 != (long *)0x0)) &&
     (iVar2 = (**(code **)(*plVar4 + 0x30))(), iVar2 == -1)) {
                    /* catch() { ... } // from try @ 006424e8 with catch @ 00642574 */
    lVar3 = (long)local_8 + *(long *)(*local_8 + -0x18);
                    /* catch() { ... } // from try @ 006424a0 with catch @ 00642584 */
    FUN_006215c0(lVar3,*(uint *)(lVar3 + 0x20) | 1);
                    /* catch() { ... } // from try @ 00642458 with catch @ 00642594 */
                    /* catch() { ... } // from try @ 00642410 with catch @ 006425a4 */
    return param_1;
  }
  return param_1;
}


