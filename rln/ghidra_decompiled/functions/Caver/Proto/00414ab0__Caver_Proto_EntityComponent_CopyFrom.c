/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00414ab0
 * Function: Caver::Proto::EntityComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(EntityComponent * this, EntityComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityComponent::CopyFrom(Caver::Proto::EntityComponent const&) */

void __thiscall
Caver::Proto::EntityComponent::CopyFrom(EntityComponent *this,EntityComponent *param_1)

{
                    /* catch() { ... } // from try @ 00414964 with catch @ 00414ab0 */
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


