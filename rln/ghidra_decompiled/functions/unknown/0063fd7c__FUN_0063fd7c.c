/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063fd7c
 * Function: FUN_0063fd7c
 * Signature: undefined FUN_0063fd7c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_0063fd7c(long *param_1,long param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  undefined1 uStack_11;
  char local_10 [8];
  long *local_8;
  
                    /* try { // try from 0063fd80 to 0073fd8b has its CatchHandler @ 00640784 */
                    /* try { // try from 0063fd8c to 0073fd93 has its CatchHandler @ 0064049c */
                    /* try { // try from 0063fd94 to 0073fdfb has its CatchHandler @ 00640784 */
  FUN_0063fc7c(local_10,param_1);
  if ((param_2 == 0) || (local_10[0] == '\0')) {
    if (param_2 != 0) goto LAB_0063fdd4;
    uVar5 = 1;
  }
  else {
    lVar3 = FUN_0064ba94(param_2,*(undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8)
                         ,&uStack_11);
    uVar5 = 4;
    if (lVar3 != 0) goto LAB_0063fdd4;
  }
                    /* try { // try from 0063fe30 to 0073fe3f has its CatchHandler @ 00640464 */
  lVar3 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_00620c14(lVar3,uVar5 | *(uint *)(lVar3 + 0x20));
LAB_0063fdd4:
  plVar4 = local_8;
  lVar3 = *(long *)(*local_8 + -0x18);
                    /* try { // try from 0063fe00 to 0073fe07 has its CatchHandler @ 00640498 */
                    /* try { // try from 0063fe08 to 0073fe1b has its CatchHandler @ 00640494 */
  if (((((*(uint *)((long)local_8 + lVar3 + 0x18) >> 0xd & 1) != 0) &&
       (cVar1 = std::uncaught_exception(), cVar1 == '\0')) &&
      (plVar4 = *(long **)((long)plVar4 + lVar3 + 0xe8), plVar4 != (long *)0x0)) &&
     (iVar2 = (**(code **)(*plVar4 + 0x30))(), iVar2 == -1)) {
    lVar3 = (long)local_8 + *(long *)(*local_8 + -0x18);
                    /* try { // try from 0063fe60 to 0073fe63 has its CatchHandler @ 00640690 */
    FUN_00620c14(lVar3,*(uint *)(lVar3 + 0x20) | 1);
                    /* try { // try from 0063fe80 to 0073fe87 has its CatchHandler @ 00640460 */
    return param_1;
  }
                    /* try { // try from 0063fe1c to 0073fe2f has its CatchHandler @ 00640690 */
  return param_1;
}


