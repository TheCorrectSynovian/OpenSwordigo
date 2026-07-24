/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00338bd4
 * Function: Caver::ShapeComponent::SetDefaultShapeOfType
 * Signature: undefined __thiscall SetDefaultShapeOfType(ShapeComponent * this, Type param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::ShapeComponent::SetDefaultShapeOfType(Caver::Shape::Type) */

void __thiscall Caver::ShapeComponent::SetDefaultShapeOfType(ShapeComponent *this,Circle *param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((int)param_2 == 2) {
    pcVar3 = *(code **)(*(long *)this + 0x118);
    uStack_58 = CONCAT44(uStack_58._4_4_,0x42480000);
    local_60 = 0;
    Shape::ShapeWithCircle((Shape *)&local_60,param_2);
    (*pcVar3)(this,auStack_50);
  }
  else {
    if ((int)param_2 != 1) goto LAB_00338cac;
    pcVar3 = *(code **)(*(long *)this + 0x118);
    uStack_58 = _UNK_006847d8;
    local_60 = _DAT_006847d0;
    Shape::ShapeWithRectangle((Shape *)&local_60,(Rectangle *)param_2);
    (*pcVar3)(this,auStack_50);
  }
  if ((local_40 != (long *)0x0) && (lVar2 = local_40[1], local_40[1] = lVar2 + -1, lVar2 + -1 == 0))
  {
    (**(code **)(*local_40 + 0x10))(local_40);
    lVar2 = local_40[2];
    local_40[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*local_40 + 0x18))(local_40);
    }
  }
LAB_00338cac:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


