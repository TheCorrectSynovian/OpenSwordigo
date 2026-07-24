/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00438fac
 * Function: Caver::Proto::MeshMaterial::CopyFrom
 * Signature: undefined __thiscall CopyFrom(MeshMaterial * this, MeshMaterial * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MeshMaterial::CopyFrom(Caver::Proto::MeshMaterial const&) */

void __thiscall Caver::Proto::MeshMaterial::CopyFrom(MeshMaterial *this,MeshMaterial *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


