/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00408a1c
 * Function: Caver::Proto::GroundMeshGeneratorComponent::~GroundMeshGeneratorComponent
 * Signature: undefined __thiscall ~GroundMeshGeneratorComponent(GroundMeshGeneratorComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GroundMeshGeneratorComponent::~GroundMeshGeneratorComponent() */

void __thiscall
Caver::Proto::GroundMeshGeneratorComponent::~GroundMeshGeneratorComponent
          (GroundMeshGeneratorComponent *this)

{
  *(undefined **)this = PTR_vtable_007e5330 + 0x10;
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


