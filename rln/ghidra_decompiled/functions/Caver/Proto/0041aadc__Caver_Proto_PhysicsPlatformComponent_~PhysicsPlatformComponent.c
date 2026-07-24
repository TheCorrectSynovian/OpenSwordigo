/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041aadc
 * Function: Caver::Proto::PhysicsPlatformComponent::~PhysicsPlatformComponent
 * Signature: undefined __thiscall ~PhysicsPlatformComponent(PhysicsPlatformComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PhysicsPlatformComponent::~PhysicsPlatformComponent() */

void __thiscall
Caver::Proto::PhysicsPlatformComponent::~PhysicsPlatformComponent(PhysicsPlatformComponent *this)

{
  *(undefined **)this = PTR_vtable_007e57a0 + 0x10;
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


