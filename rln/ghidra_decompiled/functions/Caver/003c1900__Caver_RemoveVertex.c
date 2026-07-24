/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c1900
 * Function: Caver::RemoveVertex
 * Signature: undefined __cdecl RemoveVertex(VertexList_ * param_1, VertexListNode_ * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RemoveVertex(Caver::VertexList_*, Caver::VertexListNode_*) */

undefined8 Caver::RemoveVertex(VertexList_ *param_1,VertexListNode_ *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  *(undefined4 *)(param_2 + 0x10) = 0xffffffff;
  iVar2 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar2 + -1;
  if (iVar2 + -1 == 0) {
    *(undefined8 *)(param_1 + 8) = 0;
    return 0;
  }
  puVar1 = *(undefined8 **)(param_2 + 8);
  *puVar1 = *(undefined8 *)param_2;
  *(undefined8 **)(*(long *)param_2 + 8) = puVar1;
  if (*(VertexListNode_ **)(param_1 + 8) != param_2) {
    return *(undefined8 *)(param_2 + 8);
  }
  uVar3 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 8) = uVar3;
  return uVar3;
}


