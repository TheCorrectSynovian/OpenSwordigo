/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00389a6c
 * Function: Caver::MagicHookshotComponent::Prepare
 * Signature: undefined __thiscall Prepare(MagicHookshotComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicHookshotComponent::Prepare() */

void __thiscall Caver::MagicHookshotComponent::Prepare(MagicHookshotComponent *this)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  HookshotTrailComponent *this_00;
  code *pcVar5;
  undefined8 uVar6;
  HookshotTrailComponent *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  SpellComponent::Prepare();
  SceneObject::SetAlwaysActive(*(SceneObject **)(this + 0x28),true);
  lVar3 = SceneObject::ComponentWithInterface
                    (*(SceneObject **)(this + 0x28),(long)PTR_Interface_007e6cd0);
  if (lVar3 != 0) {
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
  }
  plVar4 = *(long **)(this + 0x138);
  *(long *)(this + 0x138) = lVar3;
  if ((plVar4 != (long *)0x0) &&
     (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  lVar3 = SceneObject::ComponentWithInterface
                    (*(SceneObject **)(this + 0x28),(long)PTR_Interface_007e6500);
  if (lVar3 != 0) {
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
  }
  plVar4 = *(long **)(this + 0x120);
  *(long *)(this + 0x120) = lVar3;
  if ((plVar4 != (long *)0x0) &&
     (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar4 + 8))(plVar4);
    lVar3 = *(long *)(this + 0x120);
  }
  if (lVar3 == 0) {
    this_00 = operator_new(200);
    HookshotTrailComponent::HookshotTrailComponent(this_00);
    *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
    plVar4 = *(long **)(this + 0x120);
    *(HookshotTrailComponent **)(this + 0x120) = this_00;
    if ((plVar4 != (long *)0x0) &&
       (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar4 + 8))();
      this_00 = *(HookshotTrailComponent **)(this + 0x120);
    }
    plVar4 = *(long **)(this + 0x28);
    pcVar5 = *(code **)(*plVar4 + 0x48);
    if (this_00 != (HookshotTrailComponent *)0x0) {
      *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
    }
    local_40 = this_00;
    (*pcVar5)(plVar4,&local_40);
    if ((local_40 != (HookshotTrailComponent *)0x0) &&
       (iVar1 = *(int *)(local_40 + 8), *(int *)(local_40 + 8) = iVar1 + -1, iVar1 + -1 == 0)) {
      (**(code **)(*(long *)local_40 + 8))();
    }
    lVar3 = *(long *)(this + 0x120);
  }
  uVar6 = *(undefined8 *)(this + 0x128);
  *(undefined8 *)(lVar3 + 0xbc) = *(undefined8 *)(this + 0x130);
  *(undefined8 *)(lVar3 + 0xb4) = uVar6;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


