/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004361dc
 * Function: Caver::Proto::MagicBombComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(MagicBombComponent * this, MagicBombComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MagicBombComponent::CopyFrom(Caver::Proto::MagicBombComponent const&) */

void __thiscall
Caver::Proto::MagicBombComponent::CopyFrom(MagicBombComponent *this,MagicBombComponent *param_1)

{
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004361c8 with catch @ 004361dc
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004361a4 with catch @ 004361e4
                        */
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
                    /* try { // try from 00436208 to 00536217 has its CatchHandler @ 00436220 */
                    /* try { // try from 00436218 to 00536223 has its CatchHandler @ 00436150 */
    MergeFrom(this,param_1);
    return;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00436208 with catch @ 00436220
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004362f4 with catch @ 00436224
                        */
  return;
}


