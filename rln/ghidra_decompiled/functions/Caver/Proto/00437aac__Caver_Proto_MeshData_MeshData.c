/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00437aac
 * Function: Caver::Proto::MeshData::MeshData
 * Signature: undefined __thiscall MeshData(MeshData * this, MeshData * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MeshData::MeshData(Caver::Proto::MeshData const&) */

void __thiscall Caver::Proto::MeshData::MeshData(MeshData *this,MeshData *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e7be0;
  *(undefined8 *)(this + 8) = DAT_0068aa60;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined **)this = puVar1 + 0x10;
  MergeFrom(this,param_1);
  return;
}


