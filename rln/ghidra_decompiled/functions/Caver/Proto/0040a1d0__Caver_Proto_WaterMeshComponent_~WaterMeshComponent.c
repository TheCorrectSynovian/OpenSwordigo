/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040a1d0
 * Function: Caver::Proto::WaterMeshComponent::~WaterMeshComponent
 * Signature: undefined __thiscall ~WaterMeshComponent(WaterMeshComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::WaterMeshComponent::~WaterMeshComponent() */

void __thiscall Caver::Proto::WaterMeshComponent::~WaterMeshComponent(WaterMeshComponent *this)

{
  *(undefined **)this = PTR_vtable_007e4ed0 + 0x10;
  if (*(WaterMeshComponent **)PTR_default_instance__007e6e28 != this) {
    if (*(long **)(this + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x18) + 8))();
    }
    if (*(long **)(this + 0x20) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x20) + 8))();
    }
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


