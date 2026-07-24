/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031d4a8
 * Function: Caver::BackgroundComponent::BackgroundComponent
 * Signature: undefined __thiscall BackgroundComponent(BackgroundComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BackgroundComponent::BackgroundComponent() */

void __thiscall Caver::BackgroundComponent::BackgroundComponent(BackgroundComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  Sprite *pSVar6;
  long lVar7;
  BackgroundComponent *pBVar8;
  Sprite *local_48;
  long *local_40;
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  puVar1 = PTR_vtable_007e5dc0 + 0x130;
  puVar2 = PTR_vtable_007e5dc0 + 0x170;
  puVar3 = PTR_vtable_007e5dc0 + 0x10;
  *(undefined **)(this + 0x38) = PTR_DAT_007e5de8 + 0x18;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (BackgroundComponent)0x0;
  pBVar8 = this + 0x48;
  *(undefined8 *)pBVar8 = 0;
  *(undefined **)this = puVar3;
  *(undefined8 *)(this + 0x50) = 0;
  *(BackgroundComponent **)(this + 0x58) = pBVar8;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  *(undefined4 *)(this + 0x78) = 0xbf800000;
  *(BackgroundComponent **)(this + 0x60) = pBVar8;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  pSVar6 = operator_new(0x58);
  *(undefined4 *)(pSVar6 + 0x30) = 0;
  pSVar6[0x50] = (Sprite)0x0;
  *(undefined8 *)(pSVar6 + 0x38) = 0;
  *(undefined8 *)(pSVar6 + 0x18) = 0;
  *(undefined8 *)(pSVar6 + 0x10) = 0;
  *(undefined8 *)(pSVar6 + 0x28) = 0;
  *(undefined8 *)(pSVar6 + 0x20) = 0;
  *(undefined8 *)(pSVar6 + 8) = 0;
  *(undefined8 *)pSVar6 = 0;
  *(undefined8 *)(pSVar6 + 0x48) = 0;
  *(undefined8 *)(pSVar6 + 0x40) = 0;
  local_48 = pSVar6;
  boost::detail::shared_count::shared_count<Caver::Sprite>((shared_count *)&local_40,pSVar6);
  boost::detail::sp_enable_shared_from_this(&local_48,pSVar6,pSVar6);
  pSVar6 = *(Sprite **)(this + 0x80);
  plVar4 = *(long **)(this + 0x88);
  *(Sprite **)(this + 0x80) = local_48;
  *(long **)(this + 0x88) = local_40;
  local_48 = pSVar6;
  local_40 = plVar4;
  if ((plVar4 != (long *)0x0) && (lVar7 = plVar4[1], plVar4[1] = lVar7 + -1, lVar7 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar7 = plVar4[2];
    plVar4[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


