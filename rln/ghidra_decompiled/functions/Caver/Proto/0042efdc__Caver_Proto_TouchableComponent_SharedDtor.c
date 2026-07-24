/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042efdc
 * Function: Caver::Proto::TouchableComponent::SharedDtor
 * Signature: undefined __thiscall SharedDtor(TouchableComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::TouchableComponent::SharedDtor() */

void __thiscall Caver::Proto::TouchableComponent::SharedDtor(TouchableComponent *this)

{
  if ((*(TouchableComponent **)PTR_default_instance__007e5f98 != this) &&
     (*(long **)(this + 0x10) != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0042f000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x10) + 8))();
    return;
  }
  return;
}


