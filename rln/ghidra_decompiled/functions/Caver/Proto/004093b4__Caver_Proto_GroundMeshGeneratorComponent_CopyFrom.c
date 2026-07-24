/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004093b4
 * Function: Caver::Proto::GroundMeshGeneratorComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(GroundMeshGeneratorComponent * this, GroundMeshGeneratorComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GroundMeshGeneratorComponent::CopyFrom(Caver::Proto::GroundMeshGeneratorComponent
   const&) */

void __thiscall
Caver::Proto::GroundMeshGeneratorComponent::CopyFrom
          (GroundMeshGeneratorComponent *this,GroundMeshGeneratorComponent *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


