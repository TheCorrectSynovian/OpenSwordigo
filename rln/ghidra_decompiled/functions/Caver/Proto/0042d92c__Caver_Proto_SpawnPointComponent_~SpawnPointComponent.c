/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042d92c
 * Function: Caver::Proto::SpawnPointComponent::~SpawnPointComponent
 * Signature: undefined __thiscall ~SpawnPointComponent(SpawnPointComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SpawnPointComponent::~SpawnPointComponent() */

void __thiscall Caver::Proto::SpawnPointComponent::~SpawnPointComponent(SpawnPointComponent *this)

{
  *(undefined **)this = PTR_vtable_007e5ed8 + 0x10;
  if ((*(SpawnPointComponent **)PTR_default_instance__007e5048 != this) &&
     (*(long **)(this + 0x10) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 0x10) + 8))();
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


