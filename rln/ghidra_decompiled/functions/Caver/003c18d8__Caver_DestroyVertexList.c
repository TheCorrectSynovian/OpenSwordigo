/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c18d8
 * Function: Caver::DestroyVertexList
 * Signature: undefined __cdecl DestroyVertexList(VertexList_ * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DestroyVertexList(Caver::VertexList_*) */

void Caver::DestroyVertexList(VertexList_ *param_1)

{
  free(*(void **)param_1);
  free(param_1);
  return;
}


