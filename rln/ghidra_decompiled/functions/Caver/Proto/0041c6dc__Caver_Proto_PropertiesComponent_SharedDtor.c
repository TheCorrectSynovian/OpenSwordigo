/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041c6dc
 * Function: Caver::Proto::PropertiesComponent::SharedDtor
 * Signature: undefined __thiscall SharedDtor(PropertiesComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PropertiesComponent::SharedDtor() */

void __thiscall Caver::Proto::PropertiesComponent::SharedDtor(PropertiesComponent *this)

{
                    /* try { // try from 0041c6e0 to 0051c6eb has its CatchHandler @ 0041c890 */
  if ((*(PropertiesComponent **)PTR_default_instance__007e5f30 != this) &&
     (*(long **)(this + 0x10) != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0041c700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x10) + 8))();
    return;
  }
  return;
}


