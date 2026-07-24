/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040d9ec
 * Function: Caver::Proto::HealthComponent::SharedDtor
 * Signature: undefined __thiscall SharedDtor(HealthComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::HealthComponent::SharedDtor() */

void __thiscall Caver::Proto::HealthComponent::SharedDtor(HealthComponent *this)

{
  if ((*(HealthComponent **)PTR_default_instance__007e6bf0 != this) &&
     (*(long **)(this + 0x18) != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0040da10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x18) + 8))();
    return;
  }
  return;
}


