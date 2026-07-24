/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031d65c
 * Function: Caver::BackgroundComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(BackgroundComponent * this, BackgroundComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BackgroundComponent::InitWithComponent(Caver::BackgroundComponent const*) */

void __thiscall
Caver::BackgroundComponent::InitWithComponent
          (BackgroundComponent *this,BackgroundComponent *param_1)

{
  long *plVar1;
  long lVar2;
  Sprite *pSVar3;
  long lVar4;
  Sprite *local_48;
  long *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_0066a6a8(this + 0x38,param_1 + 0x38);
  pSVar3 = operator_new(0x58);
  *(undefined8 *)(pSVar3 + 0x20) = 0;
  *(undefined8 *)(pSVar3 + 0x28) = 0;
  *(undefined8 *)(pSVar3 + 0x10) = 0;
  *(undefined8 *)(pSVar3 + 0x18) = 0;
  *(undefined8 *)pSVar3 = 0;
  *(undefined8 *)(pSVar3 + 8) = 0;
  *(undefined4 *)(pSVar3 + 0x30) = 0;
  *(undefined8 *)(pSVar3 + 0x40) = 0;
  *(undefined8 *)(pSVar3 + 0x48) = 0;
  *(undefined8 *)(pSVar3 + 0x38) = 0;
  pSVar3[0x50] = (Sprite)0x0;
  local_48 = pSVar3;
  boost::detail::shared_count::shared_count<Caver::Sprite>((shared_count *)&local_40,pSVar3);
  boost::detail::sp_enable_shared_from_this(&local_48,pSVar3,pSVar3);
  pSVar3 = *(Sprite **)(this + 0x80);
  plVar1 = *(long **)(this + 0x88);
  *(Sprite **)(this + 0x80) = local_48;
  *(long **)(this + 0x88) = local_40;
  if ((plVar1 != (long *)0x0) && (lVar4 = plVar1[1], plVar1[1] = lVar4 + -1, lVar4 + -1 == 0)) {
    local_48 = pSVar3;
    local_40 = plVar1;
    (**(code **)(*plVar1 + 0x10))(plVar1);
    lVar4 = plVar1[2];
    plVar1[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  local_48 = (Sprite *)0x0;
  local_40 = (long *)0x0;
  Sprite::InitWithTexture
            (*(Sprite **)(this + 0x80),*(intrusive_ptr **)(param_1 + 0x80),(Rectangle *)&local_48);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


