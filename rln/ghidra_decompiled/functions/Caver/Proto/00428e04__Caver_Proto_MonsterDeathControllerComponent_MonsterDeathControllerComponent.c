/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00428e04
 * Function: Caver::Proto::MonsterDeathControllerComponent::MonsterDeathControllerComponent
 * Signature: undefined __thiscall MonsterDeathControllerComponent(MonsterDeathControllerComponent * this, MonsterDeathControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MonsterDeathControllerComponent::MonsterDeathControllerComponent(Caver::Proto::MonsterDeathControllerComponent
   const&) */

void __thiscall
Caver::Proto::MonsterDeathControllerComponent::MonsterDeathControllerComponent
          (MonsterDeathControllerComponent *this,MonsterDeathControllerComponent *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e4ca0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 8) = 0;
  MergeFrom(this,param_1);
                    /* try { // try from 00428e34 to 00528e37 has its CatchHandler @ 00428ec8 */
  return;
}


