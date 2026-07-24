/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063fcf8
 * Function: FUN_0063fcf8
 * Signature: undefined FUN_0063fcf8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0063fcf8(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 8);
  lVar3 = *(long *)(*plVar4 + -0x18);
                    /* try { // try from 0063fd30 to 0073fd37 has its CatchHandler @ 006404a0 */
  if (((((*(uint *)((long)plVar4 + lVar3 + 0x18) >> 0xd & 1) != 0) &&
       (cVar1 = std::uncaught_exception(), cVar1 == '\0')) &&
      (plVar4 = *(long **)((long)plVar4 + lVar3 + 0xe8), plVar4 != (long *)0x0)) &&
     (iVar2 = (**(code **)(*plVar4 + 0x30))(), iVar2 == -1)) {
                    /* try { // try from 0063fd58 to 0073fd7f has its CatchHandler @ 006402cc */
    lVar3 = (long)*(long **)(param_1 + 8) + *(long *)(**(long **)(param_1 + 8) + -0x18);
    FUN_00620c14(lVar3,*(uint *)(lVar3 + 0x20) | 1);
    return;
  }
  return;
}


