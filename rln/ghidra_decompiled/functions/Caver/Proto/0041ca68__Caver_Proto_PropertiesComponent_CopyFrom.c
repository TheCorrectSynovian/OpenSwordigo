/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041ca68
 * Function: Caver::Proto::PropertiesComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(PropertiesComponent * this, PropertiesComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PropertiesComponent::CopyFrom(Caver::Proto::PropertiesComponent const&) */

void __thiscall
Caver::Proto::PropertiesComponent::CopyFrom(PropertiesComponent *this,PropertiesComponent *param_1)

{
                    /* catch() { ... } // from try @ 0041cab4 with catch @ 0041ca68 */
  if (param_1 != this) {
                    /* try { // try from 0041ca8c to 0051ca9f has its CatchHandler @ 0041cba4 */
    (**(code **)(*(long *)this + 0x20))(this);
                    /* try { // try from 0041caa4 to 0051cab3 has its CatchHandler @ 0041cb34 */
    MergeFrom(this,param_1);
    return;
  }
  return;
}


