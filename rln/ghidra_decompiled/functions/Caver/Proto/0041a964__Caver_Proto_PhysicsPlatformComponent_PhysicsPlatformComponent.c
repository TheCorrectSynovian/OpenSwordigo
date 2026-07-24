/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041a964
 * Function: Caver::Proto::PhysicsPlatformComponent::PhysicsPlatformComponent
 * Signature: undefined __thiscall PhysicsPlatformComponent(PhysicsPlatformComponent * this, PhysicsPlatformComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PhysicsPlatformComponent::PhysicsPlatformComponent(Caver::Proto::PhysicsPlatformComponent
   const&) */

void __thiscall
Caver::Proto::PhysicsPlatformComponent::PhysicsPlatformComponent
          (PhysicsPlatformComponent *this,PhysicsPlatformComponent *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e57a0;
                    /* catch() { ... } // from try @ 0041a8e4 with catch @ 0041a974 */
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 8) = 0;
  MergeFrom(this,param_1);
  return;
}


