/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00414754
 * Function: Caver::Proto::EntityComponent::~EntityComponent
 * Signature: undefined __thiscall ~EntityComponent(EntityComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityComponent::~EntityComponent() */

void __thiscall Caver::Proto::EntityComponent::~EntityComponent(EntityComponent *this)

{
                    /* catch() { ... } // from try @ 004146b4 with catch @ 00414760 */
  *(undefined **)this = PTR_vtable_007e5ea8 + 0x10;
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


