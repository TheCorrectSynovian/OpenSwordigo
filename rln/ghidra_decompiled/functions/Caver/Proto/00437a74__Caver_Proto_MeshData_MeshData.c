/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00437a74
 * Function: Caver::Proto::MeshData::MeshData
 * Signature: undefined __thiscall MeshData(MeshData * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MeshData::MeshData() */

void __thiscall Caver::Proto::MeshData::MeshData(MeshData *this)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_vtable_007e7be0;
  uVar1 = DAT_0068aa60;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 8) = uVar1;
  *(undefined **)this = puVar2 + 0x10;
  return;
}


