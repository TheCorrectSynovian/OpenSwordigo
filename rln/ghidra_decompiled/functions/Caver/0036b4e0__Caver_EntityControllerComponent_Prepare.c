/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036b4e0
 * Function: Caver::EntityControllerComponent::Prepare
 * Signature: undefined __thiscall Prepare(EntityControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::EntityControllerComponent::Prepare() */

void __thiscall Caver::EntityControllerComponent::Prepare(EntityControllerComponent *this)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  Vector2 aVStack_78 [16];
  Vector2 aVStack_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  RegisterLibrary(this);
  plVar3 = *(long **)(this + 0xb0);
  if (plVar3 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xa0),(Component *)this);
    plVar3 = *(long **)(this + 0xb0);
    if (plVar3 != (long *)0x0) goto LAB_0036b528;
  }
  else {
LAB_0036b528:
    plVar3 = (long *)(**(code **)(*plVar3 + 0x108))();
    if (plVar3 != (long *)0x0) {
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    }
    local_58 = plVar3;
    SetMoveAnimation(this,(intrusive_ptr *)&local_58);
    if ((plVar3 != (long *)0x0) &&
       (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
  }
  fVar6 = *(float *)(this + 0xe0);
  lVar4 = *(long *)(this + 0x80);
  *(float *)(this + 0x10c) = fVar6;
  if (lVar4 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    lVar4 = *(long *)(this + 0x80);
    if (lVar4 != 0) goto LAB_0036b5a0;
  }
  else {
LAB_0036b5a0:
    *(float *)(lVar4 + 0xb0) = fVar6 * (float)*(int *)(this + 0x108);
  }
  if ((*(long *)(this + 0x100) != 0) && (DAT_00683944 < *(float *)(this + 0x10c))) {
    *(float *)(*(long *)(this + 0x100) + 0x34) =
         *(float *)(this + 0x10c) / (*(float *)(*(long *)(this + 0x28) + 0x8c) * _DAT_0068782c);
  }
  uVar5 = *(undefined4 *)(this + 0xe4);
  *(undefined4 *)(this + 0x110) = uVar5;
  if (lVar4 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    lVar4 = *(long *)(this + 0x80);
    if (lVar4 != 0) goto LAB_0036b60c;
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    lVar4 = *(long *)(this + 0x80);
    if (lVar4 == 0) {
      uVar5 = 0;
      goto LAB_0036b614;
    }
  }
  else {
LAB_0036b60c:
    *(undefined4 *)(lVar4 + 0xb4) = uVar5;
  }
  uVar5 = *(undefined4 *)(lVar4 + 0x70);
LAB_0036b614:
  *(undefined4 *)(this + 0x128) = uVar5;
  *(undefined4 *)(this + 300) = *(undefined4 *)(this + 0x108);
  if ((*(long *)(this + 200) != 0) ||
     (ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xb8),(Component *)this),
     *(long *)(this + 200) != 0)) {
    Shape::Bounds();
    local_58 = (long *)CONCAT44(*(undefined4 *)(*(long *)(this + 0x28) + 0x8c),
                                *(undefined4 *)(*(long *)(this + 0x28) + 0x8c));
    Rectangle::ScaledRectangle(aVStack_68);
    Rectangle::TranslatedRectangle(aVStack_78);
    *(undefined8 *)(this + 0xd8) = uStack_50;
    *(long **)(this + 0xd0) = local_58;
  }
  SceneObject::GetComponentsWithInterface<Caver::SwingableWeaponControllerComponent>
            (*(SceneObject **)(this + 0x28),(vector *)(this + 0x138));
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


