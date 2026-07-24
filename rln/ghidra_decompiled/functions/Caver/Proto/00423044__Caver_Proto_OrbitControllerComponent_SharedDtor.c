/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00423044
 * Function: Caver::Proto::OrbitControllerComponent::SharedDtor
 * Signature: undefined __thiscall SharedDtor(OrbitControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::OrbitControllerComponent::SharedDtor() */

void __thiscall Caver::Proto::OrbitControllerComponent::SharedDtor(OrbitControllerComponent *this)

{
  if ((*(OrbitControllerComponent **)PTR_default_instance__007e68f8 != this) &&
     (*(long **)(this + 0x10) != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00423068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x10) + 8))();
    return;
  }
  return;
}


