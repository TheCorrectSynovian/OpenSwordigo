/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00424080
 * Function: Caver::Proto::WalkingMonsterControllerComponent::WalkingMonsterControllerComponent
 * Signature: undefined __thiscall WalkingMonsterControllerComponent(WalkingMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::WalkingMonsterControllerComponent::WalkingMonsterControllerComponent() */

void __thiscall
Caver::Proto::WalkingMonsterControllerComponent::WalkingMonsterControllerComponent
          (WalkingMonsterControllerComponent *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e63f8;
                    /* try { // try from 00424084 to 0052408b has its CatchHandler @ 004240d0 */
  *(undefined4 *)(this + 0x10) = 0;
                    /* try { // try from 0042408c to 005240e3 has its CatchHandler @ 00424024 */
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 8) = 0;
  return;
}


