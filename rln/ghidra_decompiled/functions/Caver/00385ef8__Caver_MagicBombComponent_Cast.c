/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00385ef8
 * Function: Caver::MagicBombComponent::Cast
 * Signature: undefined __thiscall Cast(MagicBombComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicBombComponent::Cast() */

void __thiscall Caver::MagicBombComponent::Cast(MagicBombComponent *this)

{
  int iVar1;
  long lVar2;
  CharControllerComponent *this_00;
  long lVar3;
  SceneObject *local_40;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  SpellComponent::Cast((SpellComponent *)this);
  this[0xb8] = (MagicBombComponent)0x1;
  SpellComponent::CasterObject();
  this_00 = (CharControllerComponent *)
            SceneObject::ComponentWithInterface(local_40,(long)PTR_Interface_007e7390);
  if ((local_40 != (SceneObject *)0x0) &&
     (iVar1 = *(int *)(local_40 + 8), *(int *)(local_40 + 8) = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*(long *)local_40 + 8))();
  }
  if (this_00 != (CharControllerComponent *)0x0) {
    CharControllerComponent::Pickup(this_00,*(SceneObject **)(this + 0x28),true);
  }
  if (*(long *)(lVar2 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


