/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040d7c0
 * Function: Caver::Proto::HealthComponent::HealthComponent
 * Signature: undefined __thiscall HealthComponent(HealthComponent * this, HealthComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::HealthComponent::HealthComponent(Caver::Proto::HealthComponent const&) */

void __thiscall
Caver::Proto::HealthComponent::HealthComponent(HealthComponent *this,HealthComponent *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e57c0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 8) = 0;
                    /* try { // try from 0040d7e8 to 0050d803 has its CatchHandler @ 0040d9a8 */
  *(undefined4 *)(this + 0x20) = 0;
  MergeFrom(this,param_1);
  return;
}


