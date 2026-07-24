/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00427b88
 * Function: Caver::Proto::ShootingMonsterControllerComponent::ShootingMonsterControllerComponent
 * Signature: undefined __thiscall ShootingMonsterControllerComponent(ShootingMonsterControllerComponent * this, ShootingMonsterControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ShootingMonsterControllerComponent::ShootingMonsterControllerComponent(Caver::Proto::ShootingMonsterControllerComponent
   const&) */

void __thiscall
Caver::Proto::ShootingMonsterControllerComponent::ShootingMonsterControllerComponent
          (ShootingMonsterControllerComponent *this,ShootingMonsterControllerComponent *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e6b18;
                    /* catch() { ... } // from try @ 0042721c with catch @ 00427ba0 */
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
                    /* catch() { ... } // from try @ 004271c0 with catch @ 00427ba4 */
  *(undefined **)this = puVar1 + 0x10;
  MergeFrom(this,param_1);
  return;
}


