/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003faf20
 * Function: Caver::Proto::MeshMaterial::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(MeshMaterial * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MeshMaterial::InitAsDefaultInstance() */

void __thiscall Caver::Proto::MeshMaterial::InitAsDefaultInstance(MeshMaterial *this)

{
  undefined8 uVar1;
  
  uVar1 = FloatColor::default_instance();
  *(undefined8 *)(this + 0x10) = uVar1;
  uVar1 = FloatColor::default_instance();
  *(undefined8 *)(this + 0x18) = uVar1;
  uVar1 = FloatColor::default_instance();
  *(undefined8 *)(this + 0x20) = uVar1;
  uVar1 = Texture::default_instance();
  *(undefined8 *)(this + 0x30) = uVar1;
  return;
}


