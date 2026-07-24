/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004286f4
 * Function: Caver::Proto::BouncingMonsterControllerComponent::BouncingMonsterControllerComponent
 * Signature: undefined __thiscall BouncingMonsterControllerComponent(BouncingMonsterControllerComponent * this, BouncingMonsterControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BouncingMonsterControllerComponent::BouncingMonsterControllerComponent(Caver::Proto::BouncingMonsterControllerComponent
   const&) */

void __thiscall
Caver::Proto::BouncingMonsterControllerComponent::BouncingMonsterControllerComponent
          (BouncingMonsterControllerComponent *this,BouncingMonsterControllerComponent *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e5a20;
                    /* catch() { ... } // from try @ 004286b8 with catch @ 004286fc */
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
                    /* catch() { ... } // from try @ 00428778 with catch @ 00428710
                       catch() { ... } // from try @ 00428794 with catch @ 00428710 */
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 8) = 0;
  MergeFrom(this,param_1);
  return;
}


