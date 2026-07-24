/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041ae90
 * Function: Caver::Proto::PhysicsPlatformComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(PhysicsPlatformComponent * this, PhysicsPlatformComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PhysicsPlatformComponent::CopyFrom(Caver::Proto::PhysicsPlatformComponent const&)
    */

void __thiscall
Caver::Proto::PhysicsPlatformComponent::CopyFrom
          (PhysicsPlatformComponent *this,PhysicsPlatformComponent *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
                    /* try { // try from 0041aec0 to 0051aecb has its CatchHandler @ 0041af3c */
                    /* try { // try from 0041aecc to 0051af5f has its CatchHandler @ 0041ae00 */
    MergeFrom(this,param_1);
    return;
  }
  return;
}


