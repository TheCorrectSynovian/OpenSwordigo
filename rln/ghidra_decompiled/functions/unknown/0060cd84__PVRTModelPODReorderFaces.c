/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0060cd84
 * Function: PVRTModelPODReorderFaces
 * Signature: undefined __cdecl PVRTModelPODReorderFaces(SPODMesh * param_1, int param_2, int param_3, int param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTModelPODReorderFaces(SPODMesh&, int, int, int) */

void PVRTModelPODReorderFaces(SPODMesh *param_1,int param_2,int param_3,int param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined4 uStack_74;
  undefined1 auStack_70 [4];
  undefined1 auStack_6c [4];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0060cdb0 to 0070cdd7 has its CatchHandler @ 0060cff4 */
  lVar2 = *(long *)(param_1 + 0x20);
  if ((lVar2 != 0) && (*(int *)(param_1 + 4) * 3 != 0)) {
    uVar3 = 3;
    while( true ) {
                    /* try { // try from 0060cdf8 to 0070ce1f has its CatchHandler @ 0060cfe4 */
      lVar2 = lVar2 + (ulong)(*(int *)(param_1 + 0x18) * (uVar3 - 3));
      PVRTVertexRead(&uStack_74,lVar2,*(undefined4 *)(param_1 + 0x10));
      PVRTVertexRead(auStack_70,lVar2 + (ulong)*(uint *)(param_1 + 0x18),
                     *(undefined4 *)(param_1 + 0x10));
      PVRTVertexRead(auStack_6c,lVar2 + (ulong)(uint)(*(int *)(param_1 + 0x18) << 1),
                     *(undefined4 *)(param_1 + 0x10));
                    /* try { // try from 0060ce40 to 0070ce67 has its CatchHandler @ 0060cfd4 */
      PVRTVertexWrite(lVar2,*(undefined4 *)(param_1 + 0x10),(&uStack_74)[param_2]);
      PVRTVertexWrite(lVar2 + (ulong)*(uint *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x10),
                      (&uStack_74)[param_3]);
      PVRTVertexWrite(lVar2 + (ulong)(uint)(*(int *)(param_1 + 0x18) << 1),
                      *(undefined4 *)(param_1 + 0x10),(&uStack_74)[param_4]);
      if ((uint)(*(int *)(param_1 + 4) * 3) <= uVar3) break;
      lVar2 = *(long *)(param_1 + 0x20);
      uVar3 = uVar3 + 3;
    }
  }
                    /* try { // try from 0060ce88 to 0070ceaf has its CatchHandler @ 0060cfc4 */
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


