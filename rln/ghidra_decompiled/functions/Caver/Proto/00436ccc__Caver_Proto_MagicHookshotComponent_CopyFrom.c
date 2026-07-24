/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00436ccc
 * Function: Caver::Proto::MagicHookshotComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(MagicHookshotComponent * this, MagicHookshotComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MagicHookshotComponent::CopyFrom(Caver::Proto::MagicHookshotComponent const&) */

void __thiscall
Caver::Proto::MagicHookshotComponent::CopyFrom
          (MagicHookshotComponent *this,MagicHookshotComponent *param_1)

{
                    /* try { // try from 00436cd8 to 00536cff has its CatchHandler @ 00436ca8 */
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
                    /* catch() { ... } // from try @ 00436cc4 with catch @ 00436cfc */
    MergeFrom(this,param_1);
    return;
  }
  return;
}


