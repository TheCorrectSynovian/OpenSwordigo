/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00428024
 * Function: Caver::Proto::ShootingMonsterControllerComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(ShootingMonsterControllerComponent * this, ShootingMonsterControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ShootingMonsterControllerComponent::CopyFrom(Caver::Proto::ShootingMonsterControllerComponent
   const&) */

void __thiscall
Caver::Proto::ShootingMonsterControllerComponent::CopyFrom
          (ShootingMonsterControllerComponent *this,ShootingMonsterControllerComponent *param_1)

{
  if (param_1 != this) {
                    /* catch() { ... } // from try @ 0042808c with catch @ 00428040 */
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
                    /* try { // try from 00428064 to 00528077 has its CatchHandler @ 0042817c */
  return;
}


