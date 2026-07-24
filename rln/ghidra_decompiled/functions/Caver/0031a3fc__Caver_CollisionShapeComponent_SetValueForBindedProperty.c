/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031a3fc
 * Function: Caver::CollisionShapeComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(CollisionShapeComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CollisionShapeComponent::SetValueForBindedProperty(int, Caver::BindingValue const&) */

void __thiscall
Caver::CollisionShapeComponent::SetValueForBindedProperty
          (CollisionShapeComponent *this,int param_1,BindingValue *param_2)

{
  CollisionShapeComponent CVar1;
  long lVar2;
  long lVar3;
  SceneObject *this_00;
  long *plVar4;
  Program aPStack_60 [8];
  undefined8 local_58;
  long lStack_50;
  undefined8 local_48;
  long lStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  switch(param_1) {
  case 200:
    CVar1 = **(CollisionShapeComponent **)(param_2 + 8);
    if (((CVar1 != this[0x178]) && (this[0x178] = CVar1, CVar1 != (CollisionShapeComponent)0x0)) &&
       (this_00 = *(SceneObject **)(this + 0x28), this_00[0xb4] == (SceneObject)0x0)) {
      SceneObject::RegisterForWorldBoundsUpdate(this_00);
      this_00[0xb4] = (SceneObject)0x1;
    }
    break;
  default:
    ShapeComponent::SetValueForBindedProperty((ShapeComponent *)this,param_1,param_2);
    break;
  case 0xca:
    *(undefined4 *)(this + 0x150) = **(undefined4 **)(param_2 + 8);
    break;
  case 0xcb:
    *(undefined4 *)(this + 0x154) = **(undefined4 **)(param_2 + 8);
    break;
  case 0xcc:
    this[0x17a] = **(CollisionShapeComponent **)(param_2 + 8);
    break;
  case 0xcd:
    this[0x17b] = **(CollisionShapeComponent **)(param_2 + 8);
    break;
  case 0xce:
    this[0x17c] = **(CollisionShapeComponent **)(param_2 + 8);
    break;
  case 0xcf:
    this[0x17d] = **(CollisionShapeComponent **)(param_2 + 8);
    break;
  case 0xd0:
    *(undefined4 *)(this + 0x180) = **(undefined4 **)(param_2 + 8);
    break;
  case 0xd1:
    *(undefined4 *)(this + 0x184) = **(undefined4 **)(param_2 + 8);
    break;
  case 0xd2:
    this[0x188] = **(CollisionShapeComponent **)(param_2 + 8);
    break;
  case 0xd3:
    BindingValue::ProgramValue();
    FUN_0066a6a8(this + 0x90,aPStack_60);
    if (lStack_50 != 0) {
      *(long *)(lStack_50 + 8) = *(long *)(lStack_50 + 8) + 1;
    }
    plVar4 = *(long **)(this + 0xa0);
    *(undefined8 *)(this + 0x98) = local_58;
    *(long *)(this + 0xa0) = lStack_50;
    if ((plVar4 != (long *)0x0) && (lVar3 = plVar4[1], plVar4[1] = lVar3 + -1, lVar3 + -1 == 0)) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      lVar3 = plVar4[2];
      plVar4[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
    if (lStack_40 != 0) {
      *(long *)(lStack_40 + 8) = *(long *)(lStack_40 + 8) + 1;
    }
    plVar4 = *(long **)(this + 0xb0);
    *(undefined8 *)(this + 0xa8) = local_48;
    *(long *)(this + 0xb0) = lStack_40;
    if ((plVar4 != (long *)0x0) && (lVar3 = plVar4[1], plVar4[1] = lVar3 + -1, lVar3 + -1 == 0)) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      lVar3 = plVar4[2];
      plVar4[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
    goto LAB_0031a72c;
  case 0xd4:
    BindingValue::ProgramValue();
    FUN_0066a6a8(this + 0xb8,aPStack_60);
    if (lStack_50 != 0) {
      *(long *)(lStack_50 + 8) = *(long *)(lStack_50 + 8) + 1;
    }
    plVar4 = *(long **)(this + 200);
    *(undefined8 *)(this + 0xc0) = local_58;
    *(long *)(this + 200) = lStack_50;
    if ((plVar4 != (long *)0x0) && (lVar3 = plVar4[1], plVar4[1] = lVar3 + -1, lVar3 + -1 == 0)) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      lVar3 = plVar4[2];
      plVar4[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
    if (lStack_40 != 0) {
      *(long *)(lStack_40 + 8) = *(long *)(lStack_40 + 8) + 1;
    }
    plVar4 = *(long **)(this + 0xd8);
    *(undefined8 *)(this + 0xd0) = local_48;
    *(long *)(this + 0xd8) = lStack_40;
    if ((plVar4 != (long *)0x0) && (lVar3 = plVar4[1], plVar4[1] = lVar3 + -1, lVar3 + -1 == 0)) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      lVar3 = plVar4[2];
      plVar4[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
    goto LAB_0031a72c;
  case 0xd5:
    BindingValue::ProgramValue();
    FUN_0066a6a8(this + 0xe0,aPStack_60);
    if (lStack_50 != 0) {
      *(long *)(lStack_50 + 8) = *(long *)(lStack_50 + 8) + 1;
    }
    plVar4 = *(long **)(this + 0xf0);
    *(undefined8 *)(this + 0xe8) = local_58;
    *(long *)(this + 0xf0) = lStack_50;
    if ((plVar4 != (long *)0x0) && (lVar3 = plVar4[1], plVar4[1] = lVar3 + -1, lVar3 + -1 == 0)) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      lVar3 = plVar4[2];
      plVar4[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
    if (lStack_40 != 0) {
      *(long *)(lStack_40 + 8) = *(long *)(lStack_40 + 8) + 1;
    }
    plVar4 = *(long **)(this + 0x100);
    *(undefined8 *)(this + 0xf8) = local_48;
    *(long *)(this + 0x100) = lStack_40;
    if ((plVar4 != (long *)0x0) && (lVar3 = plVar4[1], plVar4[1] = lVar3 + -1, lVar3 + -1 == 0)) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      lVar3 = plVar4[2];
      plVar4[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
LAB_0031a72c:
    Program::~Program(aPStack_60);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


