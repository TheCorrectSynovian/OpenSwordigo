/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00428f80
 * Function: Caver::Proto::MonsterDeathControllerComponent::SetCachedSize
 * Signature: undefined __thiscall SetCachedSize(MonsterDeathControllerComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MonsterDeathControllerComponent::SetCachedSize(int) const */

void __thiscall
Caver::Proto::MonsterDeathControllerComponent::SetCachedSize
          (MonsterDeathControllerComponent *this,int param_1)

{
  *(int *)(this + 8) = param_1;
                    /* try { // try from 00428f84 to 00528f97 has its CatchHandler @ 004298f8 */
  return;
}


