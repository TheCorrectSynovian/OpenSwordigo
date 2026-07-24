/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00437394
 * Function: Caver::Proto::SpellComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(SpellComponent * this, SpellComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SpellComponent::CopyFrom(Caver::Proto::SpellComponent const&) */

void __thiscall Caver::Proto::SpellComponent::CopyFrom(SpellComponent *this,SpellComponent *param_1)

{
                    /* catch() { ... } // from try @ 00437288 with catch @ 00437398 */
                    /* try { // try from 004373ac to 005373df has its CatchHandler @ 004373ac
                       catch() { ... } // from try @ 004373ac with catch @ 004373ac
                       catch() { ... } // from try @ 00437978 with catch @ 004373ac */
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


