/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ec63c
 * Function: FUN_005ec63c
 * Signature: undefined FUN_005ec63c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005ec63c(long param_1,undefined8 param_2,undefined4 param_3)

{
  short sVar1;
  int iVar2;
  
  sVar1 = *(short *)(param_1 + 0x60);
                    /* try { // try from 005ec65c to 006ec66f has its CatchHandler @ 005ecea4 */
  *(short *)(param_1 + 0x60) = sVar1 + 1;
  if (199 < (ushort)(sVar1 + 1U)) {
    if ((ushort)(sVar1 + 1U) == 200) {
                    /* try { // try from 005ec67c to 006ec68f has its CatchHandler @ 005ed1fc */
      FUN_005eb320(param_1,"C stack overflow");
    }
    else if (0xe0 < (ushort)(sVar1 + 1U)) {
                    /* WARNING: Subroutine does not return */
      FUN_005eb814(param_1,5);
    }
  }
  iVar2 = FUN_005ebcf4(param_1,param_2,param_3);
  if (iVar2 == 0) {
    FUN_005f6b64(param_1,1);
  }
  *(short *)(param_1 + 0x60) = *(short *)(param_1 + 0x60) + -1;
                    /* try { // try from 005ec6c8 to 006ec6ef has its CatchHandler @ 005ecd04 */
  if (*(ulong *)(*(long *)(param_1 + 0x20) + 0x78) < *(ulong *)(*(long *)(param_1 + 0x20) + 0x70)) {
    return;
  }
  FUN_005edcb0(param_1);
  return;
}


