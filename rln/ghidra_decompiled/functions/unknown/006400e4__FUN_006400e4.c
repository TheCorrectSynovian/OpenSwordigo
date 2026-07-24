/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006400e4
 * Function: FUN_006400e4
 * Signature: undefined FUN_006400e4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_006400e4(long *param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  char local_10 [8];
  long *local_8;
  
  FUN_0063fc7c(local_10,param_1);
                    /* try { // try from 00640134 to 0074013b has its CatchHandler @ 0064032c */
  if ((local_10[0] != '\0') &&
     (plVar4 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8),
     lVar3 = (**(code **)(*plVar4 + 0x60))(plVar4,param_2,param_3), param_3 != lVar3)) {
    lVar3 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* try { // try from 0064015c to 00740183 has its CatchHandler @ 006402c0 */
    FUN_00620c14(lVar3,*(uint *)(lVar3 + 0x20) | 1);
  }
  plVar4 = local_8;
  lVar3 = *(long *)(*local_8 + -0x18);
                    /* try { // try from 00640184 to 007402ff has its CatchHandler @ 0063f67c */
  if (((((*(uint *)((long)local_8 + lVar3 + 0x18) >> 0xd & 1) != 0) &&
       (cVar1 = std::uncaught_exception(), cVar1 == '\0')) &&
      (plVar4 = *(long **)((long)plVar4 + lVar3 + 0xe8), plVar4 != (long *)0x0)) &&
     (iVar2 = (**(code **)(*plVar4 + 0x30))(), iVar2 == -1)) {
    lVar3 = (long)local_8 + *(long *)(*local_8 + -0x18);
    FUN_00620c14(lVar3,*(uint *)(lVar3 + 0x20) | 1);
    return param_1;
  }
  return param_1;
}


