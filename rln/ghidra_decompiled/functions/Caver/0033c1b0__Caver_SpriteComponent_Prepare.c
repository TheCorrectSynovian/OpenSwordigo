/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033c1b0
 * Function: Caver::SpriteComponent::Prepare
 * Signature: undefined __thiscall Prepare(SpriteComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SpriteComponent::Prepare() */

void __thiscall Caver::SpriteComponent::Prepare(SpriteComponent *this)

{
  int iVar1;
  long lVar2;
  string *psVar3;
  SpriteComponent *pSVar4;
  undefined8 uVar5;
  long *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  pSVar4 = this + 0x70;
  if (*(long *)(*(long *)pSVar4 + -0x18) != 0) {
    psVar3 = (string *)TextureLibrary::sharedLibrary();
    TextureLibrary::TextureForName(psVar3,SUB81(pSVar4,0));
    if (local_50 != (long *)0x0) {
      FUN_0066a6a8(pSVar4,local_50 + 6);
      local_48 = 0;
      uStack_40 = 0;
      Sprite::InitWithTexture
                (*(Sprite **)(this + 0x78),(intrusive_ptr *)&local_50,(Rectangle *)&local_48);
      uVar5 = *(undefined8 *)(*(long *)(this + 0x78) + 8);
      *(undefined8 *)(this + 0x90) = *(undefined8 *)(*(long *)(this + 0x78) + 0x10);
      *(undefined8 *)(this + 0x88) = uVar5;
      Component::UpdateObjectBounds((Component *)this);
      if ((local_50 != (long *)0x0) &&
         (iVar1 = (int)local_50[1] + -1, *(int *)(local_50 + 1) = iVar1, iVar1 == 0)) {
        (**(code **)(*local_50 + 8))();
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


