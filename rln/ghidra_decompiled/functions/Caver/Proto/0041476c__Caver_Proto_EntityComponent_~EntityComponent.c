/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041476c
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
                    /* try { // try from 00414784 to 005147ab has its CatchHandler @ 004147b4 */
  *(undefined **)this = PTR_vtable_007e5ea8 + 0x10;
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  operator_delete(this);
  return;
}


