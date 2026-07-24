/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063ff24
 * Function: FUN_0063ff24
 * Signature: undefined FUN_0063ff24(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_0063ff24(long *param_1,undefined1 param_2)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  char local_10 [8];
  long *local_8;
  
  FUN_0063fc7c(local_10,param_1);
  if (local_10[0] != '\0') {
    plVar3 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
    if ((undefined1 *)plVar3[5] < (undefined1 *)plVar3[6]) {
      *(undefined1 *)plVar3[5] = param_2;
      plVar3[5] = plVar3[5] + 1;
    }
    else {
      iVar2 = (**(code **)(*plVar3 + 0x68))(plVar3,param_2);
      if (iVar2 == -1) {
        lVar4 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* try { // try from 00640034 to 0074003f has its CatchHandler @ 00640380 */
        FUN_00620c14(lVar4,*(uint *)(lVar4 + 0x20) | 1);
      }
    }
  }
                    /* try { // try from 0063ff84 to 0073ff8b has its CatchHandler @ 00640408 */
  plVar3 = local_8;
                    /* try { // try from 0063ff8c to 0073ff9f has its CatchHandler @ 00640404 */
  lVar4 = *(long *)(*local_8 + -0x18);
                    /* try { // try from 0063ffa0 to 0073ffb3 has its CatchHandler @ 00640658 */
                    /* try { // try from 0063ffb4 to 0073ffc3 has its CatchHandler @ 006403d4 */
  if (((((*(uint *)((long)local_8 + lVar4 + 0x18) >> 0xd & 1) != 0) &&
       (cVar1 = std::uncaught_exception(), cVar1 == '\0')) &&
      (plVar3 = *(long **)((long)plVar3 + lVar4 + 0xe8), plVar3 != (long *)0x0)) &&
     (iVar2 = (**(code **)(*plVar3 + 0x30))(), iVar2 == -1)) {
                    /* try { // try from 0063ffe4 to 0073ffe7 has its CatchHandler @ 00640658 */
    lVar4 = (long)local_8 + *(long *)(*local_8 + -0x18);
    FUN_00620c14(lVar4,*(uint *)(lVar4 + 0x20) | 1);
                    /* try { // try from 00640004 to 0074000b has its CatchHandler @ 006403d0 */
    return param_1;
  }
  return param_1;
}


