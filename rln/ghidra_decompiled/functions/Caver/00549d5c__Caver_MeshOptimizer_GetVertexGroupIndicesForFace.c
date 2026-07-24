/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00549d5c
 * Function: Caver::MeshOptimizer::GetVertexGroupIndicesForFace
 * Signature: undefined __thiscall GetVertexGroupIndicesForFace(MeshOptimizer * this, int param_1, int * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MeshOptimizer::GetVertexGroupIndicesForFace(int, int*) */

void __thiscall
Caver::MeshOptimizer::GetVertexGroupIndicesForFace(MeshOptimizer *this,int param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  
  lVar1 = (long)param_1 + (long)param_1 * 2;
  iVar8 = (int)lVar1;
  lVar2 = (long)iVar8 + 1;
  uVar4 = (long)iVar8 + 2;
  iVar6 = (int)lVar2;
  *param_2 = iVar8;
  param_2[1] = iVar6;
  param_2[2] = (int)uVar4;
                    /* try { // try from 00549d78 to 00649d83 has its CatchHandler @ 005499e4 */
  lVar7 = *(long *)(this + 0x28);
  lVar5 = *(long *)(this + 0x18);
                    /* catch() { ... } // from try @ 00549c90 with catch @ 00549d80
                       catch() { ... } // from try @ 00549d50 with catch @ 00549d80 */
  if (lVar7 == 0) {
                    /* try { // try from 00549dd4 to 00649de7 has its CatchHandler @ 0054a63c */
    *param_2 = *(int *)(lVar5 + lVar1 * 0x28 + 0xc);
    param_2[1] = *(int *)(lVar5 + lVar2 * 0x28 + 0xc);
  }
  else {
                    /* catch() { ... } // from try @ 00549e20 with catch @ 00549d84
                       catch() { ... } // from try @ 0054a028 with catch @ 00549d84
                       catch() { ... } // from try @ 0054a5c8 with catch @ 00549d84 */
    iVar8 = *(int *)(lVar7 + lVar1 * 4);
    *param_2 = iVar8;
    *param_2 = *(int *)(lVar5 + (long)iVar8 * 0x28 + 0xc);
    iVar6 = *(int *)(lVar7 + (long)iVar6 * 4);
    param_2[1] = iVar6;
    param_2[1] = *(int *)(lVar5 + (long)iVar6 * 0x28 + 0xc);
    uVar3 = *(uint *)(lVar7 + uVar4 * 4);
    uVar4 = (ulong)uVar3;
    param_2[2] = uVar3;
  }
                    /* try { // try from 00549de8 to 00649e1f has its CatchHandler @ 0054a648 */
  param_2[2] = *(int *)(lVar5 + (long)(int)uVar4 * 0x28 + 0xc);
  return;
}


