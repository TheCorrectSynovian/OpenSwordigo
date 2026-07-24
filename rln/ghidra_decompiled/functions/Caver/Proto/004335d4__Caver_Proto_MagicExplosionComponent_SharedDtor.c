/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004335d4
 * Function: Caver::Proto::MagicExplosionComponent::SharedDtor
 * Signature: undefined __thiscall SharedDtor(MagicExplosionComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MagicExplosionComponent::SharedDtor() */

void __thiscall Caver::Proto::MagicExplosionComponent::SharedDtor(MagicExplosionComponent *this)

{
                    /* try { // try from 004335dc to 0053361f has its CatchHandler @ 004335dc
                       catch(type#1 @ 00000000) { ... } // from try @ 004335dc with catch @ 004335dc
                       catch(type#1 @ 00000000) { ... } // from try @ 004336e8 with catch @ 004335dc
                       catch(type#1 @ 00000000) { ... } // from try @ 00433724 with catch @ 004335dc
                        */
  if ((*(MagicExplosionComponent **)PTR_default_instance__007e5e18 != this) &&
     (*(long **)(this + 0x10) != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x004335f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x10) + 8))();
    return;
  }
  return;
}


