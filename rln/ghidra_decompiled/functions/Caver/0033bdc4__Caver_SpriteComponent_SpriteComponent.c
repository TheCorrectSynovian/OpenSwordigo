/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033bdc4
 * Function: Caver::SpriteComponent::SpriteComponent
 * Signature: undefined __thiscall SpriteComponent(SpriteComponent * this, intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SpriteComponent::SpriteComponent(boost::intrusive_ptr<Caver::Texture> const&) */

void __thiscall
Caver::SpriteComponent::SpriteComponent(SpriteComponent *this,intrusive_ptr *param_1)

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
  undefined8 uVar10;
  Sprite *local_68;
  long *local_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  puVar1 = PTR_vtable_007e53a0 + 0x128;
  puVar2 = PTR_vtable_007e53a0 + 0x168;
  puVar3 = PTR_DAT_007e5de8 + 0x18;
  puVar4 = PTR_vtable_007e53a0 + 0x10;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (SpriteComponent)0x0;
  *(undefined **)(this + 0x38) = puVar3;
  pSVar9 = this + 0x48;
  *(undefined8 *)pSVar9 = 0;
  *(undefined **)this = puVar4;
  *(SpriteComponent **)(this + 0x58) = pSVar9;
  *(SpriteComponent **)(this + 0x60) = pSVar9;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  *(undefined **)(this + 0x70) = puVar3;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
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
  local_68 = pSVar7;
  boost::detail::shared_count::shared_count<Caver::Sprite>((shared_count *)&local_60,pSVar7);
  boost::detail::sp_enable_shared_from_this(&local_68,pSVar7,pSVar7);
  pSVar7 = *(Sprite **)(this + 0x78);
  plVar5 = *(long **)(this + 0x80);
  *(Sprite **)(this + 0x78) = local_68;
  *(long **)(this + 0x80) = local_60;
  local_68 = pSVar7;
  local_60 = plVar5;
  if ((plVar5 != (long *)0x0) && (lVar8 = plVar5[1], plVar5[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar8 = plVar5[2];
    plVar5[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  if (*(long *)param_1 != 0) {
    FUN_0066a6a8(this + 0x70,*(long *)param_1 + 0x30);
    local_68 = (Sprite *)0x0;
    local_60 = (long *)0x0;
    Sprite::InitWithTexture(*(Sprite **)(this + 0x78),param_1,(Rectangle *)&local_68);
    uVar10 = *(undefined8 *)(*(long *)(this + 0x78) + 8);
    *(undefined8 *)(this + 0x90) = *(undefined8 *)(*(long *)(this + 0x78) + 0x10);
    *(undefined8 *)(this + 0x88) = uVar10;
    Component::UpdateObjectBounds((Component *)this);
  }
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


