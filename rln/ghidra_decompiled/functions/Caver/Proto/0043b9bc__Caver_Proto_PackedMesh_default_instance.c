/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043b9bc
 * Function: Caver::Proto::PackedMesh::default_instance
 * Signature: undefined __cdecl default_instance(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PackedMesh::default_instance() */

long Caver::Proto::PackedMesh::default_instance(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_default_instance__007e5170;
                    /* catch() { ... } // from try @ 0043b9e0 with catch @ 0043b9cc */
  lVar2 = *(long *)PTR_default_instance__007e5170;
  if (lVar2 == 0) {
    protobuf_AddDesc_Scene_2eproto();
                    /* try { // try from 0043b9dc to 0053b9df has its CatchHandler @ 0043b9f0 */
    lVar2 = *(long *)puVar1;
  }
                    /* try { // try from 0043b9e0 to 0053ba03 has its CatchHandler @ 0043b9cc */
  return lVar2;
}


