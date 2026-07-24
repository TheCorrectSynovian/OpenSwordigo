/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00429174
 * Function: Caver::Proto::MonsterDeathControllerComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(MonsterDeathControllerComponent * this, MonsterDeathControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MonsterDeathControllerComponent::CopyFrom(Caver::Proto::MonsterDeathControllerComponent
   const&) */

void __thiscall
Caver::Proto::MonsterDeathControllerComponent::CopyFrom
          (MonsterDeathControllerComponent *this,MonsterDeathControllerComponent *param_1)

{
  if (param_1 != this) {
                    /* try { // try from 00429198 to 005291ab has its CatchHandler @ 004296f4 */
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
                    /* try { // try from 004291bc to 005291c7 has its CatchHandler @ 004296bc */
  return;
}


