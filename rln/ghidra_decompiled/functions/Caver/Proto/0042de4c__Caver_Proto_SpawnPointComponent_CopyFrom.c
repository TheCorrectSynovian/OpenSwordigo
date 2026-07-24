/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042de4c
 * Function: Caver::Proto::SpawnPointComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(SpawnPointComponent * this, SpawnPointComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SpawnPointComponent::CopyFrom(Caver::Proto::SpawnPointComponent const&) */

void __thiscall
Caver::Proto::SpawnPointComponent::CopyFrom(SpawnPointComponent *this,SpawnPointComponent *param_1)

{
  if (param_1 != this) {
                    /* try { // try from 0042de74 to 0052de7b has its CatchHandler @ 0042dfa8 */
    (**(code **)(*(long *)this + 0x20))(this);
                    /* try { // try from 0042de7c to 0052deef has its CatchHandler @ 0042de24 */
    MergeFrom(this,param_1);
    return;
  }
  return;
}


