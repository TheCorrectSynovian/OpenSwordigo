/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00434ce8
 * Function: Caver::Proto::MagicSpellCastComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(MagicSpellCastComponent * this, MagicSpellCastComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MagicSpellCastComponent::CopyFrom(Caver::Proto::MagicSpellCastComponent const&) */

void __thiscall
Caver::Proto::MagicSpellCastComponent::CopyFrom
          (MagicSpellCastComponent *this,MagicSpellCastComponent *param_1)

{
                    /* catch() { ... } // from try @ 00434ccc with catch @ 00434cfc */
  if (param_1 != this) {
                    /* try { // try from 00434d10 to 00534d3f has its CatchHandler @ 00434d10
                       catch() { ... } // from try @ 00434d10 with catch @ 00434d10
                       catch() { ... } // from try @ 00434f38 with catch @ 00434d10 */
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


