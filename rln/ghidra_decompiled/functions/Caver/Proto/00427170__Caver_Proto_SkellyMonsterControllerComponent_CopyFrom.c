/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00427170
 * Function: Caver::Proto::SkellyMonsterControllerComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(SkellyMonsterControllerComponent * this, SkellyMonsterControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SkellyMonsterControllerComponent::CopyFrom(Caver::Proto::SkellyMonsterControllerComponent
   const&) */

void __thiscall
Caver::Proto::SkellyMonsterControllerComponent::CopyFrom
          (SkellyMonsterControllerComponent *this,SkellyMonsterControllerComponent *param_1)

{
                    /* try { // try from 00427170 to 00527183 has its CatchHandler @ 00427c38 */
  if (param_1 != this) {
                    /* try { // try from 00427194 to 0052719f has its CatchHandler @ 00427c00 */
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


