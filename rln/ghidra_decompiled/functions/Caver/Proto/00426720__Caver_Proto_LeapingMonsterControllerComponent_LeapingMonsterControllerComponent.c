/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00426720
 * Function: Caver::Proto::LeapingMonsterControllerComponent::LeapingMonsterControllerComponent
 * Signature: undefined __thiscall LeapingMonsterControllerComponent(LeapingMonsterControllerComponent * this, LeapingMonsterControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::LeapingMonsterControllerComponent::LeapingMonsterControllerComponent(Caver::Proto::LeapingMonsterControllerComponent
   const&) */

void __thiscall
Caver::Proto::LeapingMonsterControllerComponent::LeapingMonsterControllerComponent
          (LeapingMonsterControllerComponent *this,LeapingMonsterControllerComponent *param_1)

{
  undefined *puVar1;
  
                    /* try { // try from 00426720 to 00526733 has its CatchHandler @ 00426758 */
  puVar1 = PTR_vtable_007e5350;
                    /* try { // try from 00426734 to 0052675b has its CatchHandler @ 00426704 */
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined **)this = puVar1 + 0x10;
  MergeFrom(this,param_1);
  return;
}


