/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031fcb8
 * Function: Caver::KeyframeAnimationComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(KeyframeAnimationComponent * this, KeyframeAnimationComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::KeyframeAnimationComponent::InitWithComponent(Caver::KeyframeAnimationComponent const*) */

void __thiscall
Caver::KeyframeAnimationComponent::InitWithComponent
          (KeyframeAnimationComponent *this,KeyframeAnimationComponent *param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_0066a6a8(this + 0x38,param_1 + 0x38);
  if (*(int *)(this + 0x78) != *(int *)(param_1 + 0x78)) {
    plVar2 = *(long **)(this + 0x80);
    *(int *)(this + 0x78) = *(int *)(param_1 + 0x78);
    *(undefined8 *)(this + 0x80) = 0;
    if ((plVar2 != (long *)0x0) &&
       (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  FUN_0066a6a8(this + 0x88,param_1 + 0x88);
  lVar5 = *(long *)(param_1 + 0x90);
  if (*(long *)(lVar5 + 0x18) != 0) {
    FUN_0066a6a8(this + 0x88);
    AnimKeysNode::InitWithAnimation(*(AnimKeysNode **)(this + 0x90),(shared_ptr *)(lVar5 + 0x18));
  }
  uVar3 = Component::ShouldPrepare((Component *)this);
  if ((uVar3 & 1) != 0) {
    (**(code **)(*(long *)this + 0x40))(this);
  }
  lVar5 = *(long *)(param_1 + 0x90);
  lVar4 = *(long *)(this + 0x90);
  *(undefined1 *)(lVar4 + 0x2c) = *(undefined1 *)(lVar5 + 0x2c);
  *(undefined1 *)(lVar4 + 0x38) = *(undefined1 *)(lVar5 + 0x38);
  *(undefined4 *)(lVar4 + 0x30) = *(undefined4 *)(lVar5 + 0x30);
  return;
}


