/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042d9c8
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
                    /* catch() { ... } // from try @ 0042d62c with catch @ 0042d9e8 */
  if ((*(SpawnPointComponent **)PTR_default_instance__007e5048 != this) &&
     (*(long **)(this + 0x10) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 0x10) + 8))();
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  operator_delete(this);
  return;
}


