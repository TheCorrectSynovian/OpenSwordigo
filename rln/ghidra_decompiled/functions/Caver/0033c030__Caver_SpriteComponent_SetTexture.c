/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033c030
 * Function: Caver::SpriteComponent::SetTexture
 * Signature: undefined __thiscall SetTexture(SpriteComponent * this, intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SpriteComponent::SetTexture(boost::intrusive_ptr<Caver::Texture> const&) */

void __thiscall Caver::SpriteComponent::SetTexture(SpriteComponent *this,intrusive_ptr *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)param_1 != 0) {
    FUN_0066a6a8(this + 0x70,*(long *)param_1 + 0x30);
    local_48 = 0;
    uStack_40 = 0;
    Sprite::InitWithTexture(*(Sprite **)(this + 0x78),param_1,(Rectangle *)&local_48);
    uVar2 = *(undefined8 *)(*(long *)(this + 0x78) + 8);
    *(undefined8 *)(this + 0x90) = *(undefined8 *)(*(long *)(this + 0x78) + 0x10);
    *(undefined8 *)(this + 0x88) = uVar2;
    Component::UpdateObjectBounds((Component *)this);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


