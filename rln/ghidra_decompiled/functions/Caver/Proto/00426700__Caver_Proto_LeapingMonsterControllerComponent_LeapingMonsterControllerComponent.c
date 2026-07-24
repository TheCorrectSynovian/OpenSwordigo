/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00426700
 * Function: Caver::Proto::LeapingMonsterControllerComponent::LeapingMonsterControllerComponent
 * Signature: undefined __thiscall LeapingMonsterControllerComponent(LeapingMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::LeapingMonsterControllerComponent::LeapingMonsterControllerComponent() */

void __thiscall
Caver::Proto::LeapingMonsterControllerComponent::LeapingMonsterControllerComponent
          (LeapingMonsterControllerComponent *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e5350;
                    /* catch() { ... } // from try @ 00426734 with catch @ 00426704 */
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined **)this = puVar1 + 0x10;
  return;
}


