/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033bb70
 * Function: Caver::SpriteComponent::SpriteComponent
 * Signature: undefined __thiscall SpriteComponent(SpriteComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SpriteComponent::SpriteComponent() */

void __thiscall Caver::SpriteComponent::SpriteComponent(SpriteComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  Sprite *pSVar7;
  long lVar8;
  SpriteComponent *pSVar9;
  Sprite *local_48;
  long *local_40;
  long local_38;
  
  lVar6 = tpidr_el0;
  local_38 = *(long *)(lVar6 + 0x28);
  puVar1 = PTR_vtable_007e53a0 + 0x128;
  puVar2 = PTR_vtable_007e53a0 + 0x168;
  puVar3 = PTR_DAT_007e5de8 + 0x18;
  puVar4 = PTR_vtable_007e53a0 + 0x10;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (SpriteComponent)0x0;
  *(undefined **)(this + 0x38) = puVar3;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined **)(this + 0x70) = puVar3;
  pSVar9 = this + 0x48;
  *(undefined8 *)pSVar9 = 0;
  *(undefined **)this = puVar4;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(SpriteComponent **)(this + 0x58) = pSVar9;
  *(SpriteComponent **)(this + 0x60) = pSVar9;
  this[0x98] = (SpriteComponent)0x0;
  pSVar7 = operator_new(0x58);
  *(undefined4 *)(pSVar7 + 0x30) = 0;
  pSVar7[0x50] = (Sprite)0x0;
  *(undefined8 *)(pSVar7 + 0x38) = 0;
  *(undefined8 *)(pSVar7 + 0x18) = 0;
  *(undefined8 *)(pSVar7 + 0x10) = 0;
  *(undefined8 *)(pSVar7 + 0x28) = 0;
  *(undefined8 *)(pSVar7 + 0x20) = 0;
  *(undefined8 *)(pSVar7 + 8) = 0;
  *(undefined8 *)pSVar7 = 0;
  *(undefined8 *)(pSVar7 + 0x48) = 0;
  *(undefined8 *)(pSVar7 + 0x40) = 0;
  local_48 = pSVar7;
  boost::detail::shared_count::shared_count<Caver::Sprite>((shared_count *)&local_40,pSVar7);
  boost::detail::sp_enable_shared_from_this(&local_48,pSVar7,pSVar7);
  pSVar7 = *(Sprite **)(this + 0x78);
  plVar5 = *(long **)(this + 0x80);
  *(Sprite **)(this + 0x78) = local_48;
  *(long **)(this + 0x80) = local_40;
  local_48 = pSVar7;
  local_40 = plVar5;
  if ((plVar5 != (long *)0x0) && (lVar8 = plVar5[1], plVar5[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar8 = plVar5[2];
    plVar5[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


