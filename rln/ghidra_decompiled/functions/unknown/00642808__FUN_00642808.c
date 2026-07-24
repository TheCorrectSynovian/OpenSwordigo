/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00642808
 * Function: FUN_00642808
 * Signature: undefined FUN_00642808(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00642808(long *param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  char local_10 [8];
  long *local_8;
  
                    /* catch() { ... } // from try @ 006427f4 with catch @ 00642808 */
  FUN_006423a0(local_10,param_1);
                    /* catch() { ... } // from try @ 00642918 with catch @ 00642868 */
  if ((local_10[0] != '\0') &&
     (plVar4 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8),
     lVar3 = (**(code **)(*plVar4 + 0x60))(plVar4,param_2,param_3), param_3 != lVar3)) {
    lVar3 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* try { // try from 00642880 to 00742887 has its CatchHandler @ 00642924 */
    FUN_006215c0(lVar3,*(uint *)(lVar3 + 0x20) | 1);
  }
  plVar4 = local_8;
  lVar3 = *(long *)(*local_8 + -0x18);
                    /* try { // try from 006428b4 to 007428bf has its CatchHandler @ 006428cc */
  if (((((*(uint *)((long)local_8 + lVar3 + 0x18) >> 0xd & 1) != 0) &&
       (cVar1 = std::uncaught_exception(), cVar1 == '\0')) &&
      (plVar4 = *(long **)((long)plVar4 + lVar3 + 0xe8), plVar4 != (long *)0x0)) &&
     (iVar2 = (**(code **)(*plVar4 + 0x30))(), iVar2 == -1)) {
    lVar3 = (long)local_8 + *(long *)(*local_8 + -0x18);
                    /* try { // try from 006428f0 to 00742917 has its CatchHandler @ 00642920 */
    FUN_006215c0(lVar3,*(uint *)(lVar3 + 0x20) | 1);
    return param_1;
  }
                    /* catch() { ... } // from try @ 006428b4 with catch @ 006428cc */
  return param_1;
}


