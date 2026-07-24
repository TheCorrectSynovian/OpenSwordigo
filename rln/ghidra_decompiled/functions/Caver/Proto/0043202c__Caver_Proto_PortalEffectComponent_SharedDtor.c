/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043202c
 * Function: Caver::Proto::PortalEffectComponent::SharedDtor
 * Signature: undefined __thiscall SharedDtor(PortalEffectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PortalEffectComponent::SharedDtor() */

void __thiscall Caver::Proto::PortalEffectComponent::SharedDtor(PortalEffectComponent *this)

{
  if (*(PortalEffectComponent **)PTR_default_instance__007e69c0 != this) {
    if (*(long **)(this + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x18) + 8))();
    }
    if (*(long **)(this + 0x20) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0043207c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x20) + 8))();
      return;
    }
  }
                    /* try { // try from 00432084 to 00532093 has its CatchHandler @ 0043230c */
  return;
}


