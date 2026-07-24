/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031fdfc
 * Function: Caver::KeyframeAnimationComponent::LoadAnimation
 * Signature: undefined __thiscall LoadAnimation(KeyframeAnimationComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::KeyframeAnimationComponent::LoadAnimation() */

void __thiscall Caver::KeyframeAnimationComponent::LoadAnimation(KeyframeAnimationComponent *this)

{
  long lVar1;
  Model *pMVar2;
  ulong uVar3;
  string *psVar4;
  long lVar5;
  ModelComponent *this_00;
  long local_48;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((*(long *)(this + 0x80) != 0) ||
      (ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this),
      *(long *)(this + 0x80) != 0)) && (*(long *)(*(long *)(this + 0x90) + 0x18) == 0)) {
    pMVar2 = (Model *)ModelLibrary::sharedLibrary();
    this_00 = *(ModelComponent **)(this + 0x80);
    if (this_00 == (ModelComponent *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      this_00 = *(ModelComponent **)(this + 0x80);
      psVar4 = *(string **)(this_00 + 0x78);
    }
    else {
      psVar4 = *(string **)(this_00 + 0x78);
    }
    if (psVar4 == (string *)0x0) {
      ModelComponent::LoadModel(this_00);
      psVar4 = *(string **)(this_00 + 0x78);
    }
    ModelLibrary::AnimationForModel(pMVar2,psVar4);
    if (local_48 != 0) {
      FUN_0066a6a8(this + 0x88);
      AnimKeysNode::InitWithAnimation(*(AnimKeysNode **)(this + 0x90),(shared_ptr *)&local_48);
      uVar3 = Component::ShouldPrepare((Component *)this);
      if ((uVar3 & 1) != 0) {
        (**(code **)(*(long *)this + 0x40))(this);
      }
    }
    if ((local_40 != (long *)0x0) &&
       (lVar5 = local_40[1], local_40[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*local_40 + 0x10))(local_40);
      lVar5 = local_40[2];
      local_40[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        (**(code **)(*local_40 + 0x18))(local_40);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


