/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043b9ec
 * Function: Caver::Proto::PackedMesh::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PackedMesh::New() const */

void Caver::Proto::PackedMesh::New(void)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  
                    /* catch() { ... } // from try @ 0043b9dc with catch @ 0043b9f0 */
  plVar3 = operator_new(0x98);
  plVar3[2] = (long)(plVar3 + 4);
  lVar1 = DAT_0068b470;
  plVar3[7] = (long)(plVar3 + 9);
  plVar3[0xc] = (long)(plVar3 + 0xe);
  plVar3[0x11] = (long)PTR__default_vertex_data__007e74e8;
  puVar2 = PTR_vtable_007e5790;
  *(undefined4 *)(plVar3 + 1) = 0;
  plVar3[3] = lVar1;
  plVar3[8] = lVar1;
  *plVar3 = (long)(puVar2 + 0x10);
  plVar3[0xd] = lVar1;
  *(undefined4 *)(plVar3 + 0x12) = 0;
  return;
}


