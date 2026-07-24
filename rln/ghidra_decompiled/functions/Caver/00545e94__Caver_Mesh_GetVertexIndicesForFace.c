/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00545e94
 * Function: Caver::Mesh::GetVertexIndicesForFace
 * Signature: undefined __thiscall GetVertexIndicesForFace(Mesh * this, int param_1, int * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Mesh::GetVertexIndicesForFace(int, int*) */

void __thiscall Caver::Mesh::GetVertexIndicesForFace(Mesh *this,int param_1,int *param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = *(long *)(this + 0x18);
  uVar5 = (long)param_1 + (long)param_1 * 2;
  iVar4 = (int)uVar5;
  uVar3 = (long)iVar4 + 1;
                    /* catch() { ... } // from try @ 00545e90 with catch @ 00545ea8 */
  uVar2 = (long)iVar4 + 2;
  if (lVar6 != 0) {
    if (*(int *)(this + 8) == 0x1403) {
      iVar1 = *(int *)(this + 0x10);
      uVar5 = (ulong)*(ushort *)(lVar6 + (ulong)(uint)(iVar1 * iVar4));
      uVar3 = (ulong)*(ushort *)(lVar6 + (ulong)(uint)(iVar1 * (int)uVar3));
                    /* try { // try from 00545ef4 to 00645f0f has its CatchHandler @ 00545e44 */
      uVar2 = (ulong)*(ushort *)(lVar6 + (ulong)(uint)(iVar1 * (int)uVar2));
    }
    else if (*(int *)(this + 8) == 0x1401) {
                    /* try { // try from 00545ecc to 00645ef3 has its CatchHandler @ 00545efc */
      uVar5 = (ulong)*(byte *)(lVar6 + uVar5);
      uVar3 = (ulong)*(byte *)(lVar6 + uVar3);
      uVar2 = (ulong)*(byte *)(lVar6 + uVar2);
    }
  }
  *param_2 = (int)uVar5;
  param_2[1] = (int)uVar3;
                    /* catch() { ... } // from try @ 00545ecc with catch @ 00545efc */
  param_2[2] = (int)uVar2;
                    /* catch() { ... } // from try @ 00545e5c with catch @ 00545f00 */
  return;
}


