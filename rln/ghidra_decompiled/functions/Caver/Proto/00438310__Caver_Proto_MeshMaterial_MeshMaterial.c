/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00438310
 * Function: Caver::Proto::MeshMaterial::MeshMaterial
 * Signature: undefined __thiscall MeshMaterial(MeshMaterial * this, MeshMaterial * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MeshMaterial::MeshMaterial(Caver::Proto::MeshMaterial const&) */

void __thiscall Caver::Proto::MeshMaterial::MeshMaterial(MeshMaterial *this,MeshMaterial *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e5a10;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined4 *)(this + 0x28) = 0;
  MergeFrom(this,param_1);
  return;
}


