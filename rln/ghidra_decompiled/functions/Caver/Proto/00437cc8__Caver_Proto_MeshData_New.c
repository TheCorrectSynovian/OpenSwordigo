/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00437cc8
 * Function: Caver::Proto::MeshData::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MeshData::New() const */

void Caver::Proto::MeshData::New(void)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = operator_new(0x20);
  puVar2 = PTR_vtable_007e7be0;
  lVar1 = DAT_0068aa60;
  plVar3[2] = 0;
  plVar3[3] = 0;
  plVar3[1] = lVar1;
  *plVar3 = (long)(puVar2 + 0x10);
  return;
}


