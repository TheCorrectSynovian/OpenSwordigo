/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00439b04
 * Function: Caver::Proto::Mesh::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Mesh::New() const */

void Caver::Proto::Mesh::New(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
                    /* catch() { ... } // from try @ 00439b20 with catch @ 00439b0c */
  plVar3 = operator_new(0xa8);
  plVar3[5] = 0;
  plVar3[6] = (long)(plVar3 + 9);
                    /* try { // try from 00439b1c to 00539b1f has its CatchHandler @ 00439b30 */
                    /* try { // try from 00439b20 to 00539b43 has its CatchHandler @ 00439b0c */
  *(undefined4 *)(plVar3 + 8) = 4;
  puVar1 = PTR__default_vertex_data__007e5ae0;
                    /* catch() { ... } // from try @ 00439b1c with catch @ 00439b30 */
  plVar3[7] = 0;
  plVar3[1] = 0;
  puVar2 = PTR_vtable_007e6d30;
  *(undefined4 *)(plVar3 + 2) = 0;
  plVar3[3] = 0;
  plVar3[4] = 0;
  plVar3[0x10] = 0;
  plVar3[0x11] = 0;
  plVar3[0xe] = 0;
  plVar3[0xf] = 0;
  plVar3[0xd] = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  puVar2 = PTR__default_index_data__007e6c48;
  *(undefined4 *)(plVar3 + 0x14) = 0;
  plVar3[0x13] = (long)puVar2;
  plVar3[0x12] = (long)puVar1;
  return;
}


