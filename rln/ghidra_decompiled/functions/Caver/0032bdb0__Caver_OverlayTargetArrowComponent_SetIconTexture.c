/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0032bdb0
 * Function: Caver::OverlayTargetArrowComponent::SetIconTexture
 * Signature: undefined __thiscall SetIconTexture(OverlayTargetArrowComponent * this, intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OverlayTargetArrowComponent::SetIconTexture(boost::intrusive_ptr<Caver::Texture> const&)
    */

void __thiscall
Caver::OverlayTargetArrowComponent::SetIconTexture
          (OverlayTargetArrowComponent *this,intrusive_ptr *param_1)

{
  int iVar1;
  long lVar2;
  Sprite *pSVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar6 = *(undefined8 *)(*(long *)param_1 + 0x54);
  pSVar3 = operator_new(0x58);
  *(undefined4 *)(pSVar3 + 0x30) = 0;
  *(undefined8 *)(pSVar3 + 0x20) = 0;
  *(undefined8 *)(pSVar3 + 0x28) = 0;
  *(undefined8 *)(pSVar3 + 0x10) = 0;
  *(undefined8 *)(pSVar3 + 0x18) = 0;
  *(undefined8 *)pSVar3 = 0;
  *(undefined8 *)(pSVar3 + 8) = 0;
  pSVar3[0x50] = (Sprite)0x0;
  *(undefined8 *)(pSVar3 + 0x40) = 0;
  *(undefined8 *)(pSVar3 + 0x48) = 0;
  *(undefined8 *)(pSVar3 + 0x38) = 0;
  plVar5 = *(long **)(this + 0xa8);
  *(Sprite **)(this + 0xa8) = pSVar3;
  if (plVar5 != (long *)0x0) {
    if ((void *)plVar5[7] != (void *)0x0) {
      operator_delete__((void *)plVar5[7]);
    }
    if ((void *)plVar5[4] != (void *)0x0) {
      operator_delete__((void *)plVar5[4]);
    }
    plVar4 = (long *)*plVar5;
    if ((plVar4 != (long *)0x0) &&
       (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar4 + 8))();
    }
    operator_delete(plVar5);
    pSVar3 = *(Sprite **)(this + 0xa8);
  }
  Sprite::Init(pSVar3,param_1,2,4,false);
  pSVar3 = *(Sprite **)(this + 0xa8);
  local_68 = CONCAT44((float)((ulong)uVar6 >> 0x20) * -0.5,(float)uVar6 * -0.5);
  Vector2::Rounded();
  local_58 = local_60;
  local_6c = 0xffffffff;
  local_50 = uVar6;
  Sprite::AddRectangle
            (pSVar3,(Rectangle *)&local_58,(Rectangle *)(*(long *)param_1 + 0x5c),(Color *)&local_6c
            );
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


