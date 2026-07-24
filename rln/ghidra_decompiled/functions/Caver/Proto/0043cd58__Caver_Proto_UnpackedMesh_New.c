/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043cd58
 * Function: Caver::Proto::UnpackedMesh::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::UnpackedMesh::New() const */

void Caver::Proto::UnpackedMesh::New(void)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  
                    /* catch() { ... } // from try @ 0043cdac with catch @ 0043cd60 */
  plVar3 = operator_new(0x80);
  plVar3[2] = (long)(plVar3 + 4);
  lVar1 = DAT_0068b470;
  plVar3[6] = (long)(plVar3 + 8);
                    /* try { // try from 0043cd84 to 0053cd97 has its CatchHandler @ 0043ce9c */
  plVar3[10] = (long)(plVar3 + 0xc);
  plVar3[0xe] = (long)PTR__default_vertex_data__007e7148;
  puVar2 = PTR_vtable_007e64d8;
                    /* try { // try from 0043cd9c to 0053cdab has its CatchHandler @ 0043ce2c */
  *(undefined4 *)(plVar3 + 1) = 0;
  plVar3[3] = lVar1;
  plVar3[7] = lVar1;
                    /* try { // try from 0043cdac to 0053ce9f has its CatchHandler @ 0043cd60 */
  *plVar3 = (long)(puVar2 + 0x10);
  plVar3[0xb] = lVar1;
  *(undefined4 *)(plVar3 + 0xf) = 0;
  return;
}


