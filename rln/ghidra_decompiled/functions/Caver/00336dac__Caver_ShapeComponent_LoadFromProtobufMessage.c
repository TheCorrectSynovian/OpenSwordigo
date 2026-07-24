/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00336dac
 * Function: Caver::ShapeComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(ShapeComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ShapeComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::ShapeComponent::LoadFromProtobufMessage(ShapeComponent *this,Component *param_1)

{
  uint uVar1;
  long lVar2;
  Polygon *this_00;
  Polygon *extraout_x1;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined8 local_60;
  undefined8 local_58;
  undefined1 auStack_50 [16];
  long *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  Component::LoadFromProtobufMessage((Component *)this,param_1);
  auVar6 = google::protobuf::internal::ExtensionSet::GetMessage
                     ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e6128,
                      *(MessageLite **)(PTR_extension_007e6128 + 8));
  lVar4 = auVar6._0_8_;
  uVar1 = *(uint *)(lVar4 + 0x28);
  if ((uVar1 & 1) == 0) {
    if ((uVar1 >> 1 & 1) == 0) {
      if ((uVar1 >> 2 & 1) == 0) goto LAB_00336f64;
      this_00 = operator_new(0x28);
      *(undefined4 *)this_00 = 0;
      *(undefined8 *)(this_00 + 0x10) = 0;
      *(undefined8 *)(this_00 + 0x18) = 0;
      *(undefined8 *)(this_00 + 8) = 0;
      *(undefined2 *)(this_00 + 0x20) = 0x100;
      lVar3 = *(long *)PTR_default_instance__007e7b10;
      if (*(long *)(lVar4 + 0x20) != 0) {
        lVar3 = lVar4;
      }
      LoadPolygonFromProtobufMessage(this_00,*(Polygon **)(lVar3 + 0x20));
      pcVar5 = *(code **)(*(long *)this + 0x118);
      Shape::ShapeWithPolygonNoCopy((Shape *)this_00,extraout_x1);
      (*pcVar5)(this,auStack_50);
    }
    else {
      lVar3 = *(long *)PTR_default_instance__007e7b10;
      if (*(long *)(lVar4 + 0x18) != 0) {
        lVar3 = lVar4;
      }
      lVar3 = *(long *)(lVar3 + 0x18);
      lVar4 = *(long *)PTR_default_instance__007e76b0;
      if (*(long *)(lVar3 + 0x10) != 0) {
        lVar4 = lVar3;
      }
      pcVar5 = *(code **)(*(long *)this + 0x118);
      local_60 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0xc);
      local_58 = CONCAT44(local_58._4_4_,*(undefined4 *)(lVar3 + 0x18));
      Shape::ShapeWithCircle((Shape *)&local_60,(Circle *)auVar6._8_8_);
      (*pcVar5)(this,auStack_50);
    }
  }
  else {
    lVar3 = *(long *)PTR_default_instance__007e7b10;
    if (*(long *)(lVar4 + 0x10) != 0) {
      lVar3 = lVar4;
    }
    local_60 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0xc);
    local_58 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x14);
    pcVar5 = *(code **)(*(long *)this + 0x118);
    Shape::ShapeWithRectangle((Shape *)&local_60,auVar6._8_8_);
    (*pcVar5)(this,auStack_50);
  }
  if ((local_40 != (long *)0x0) && (lVar4 = local_40[1], local_40[1] = lVar4 + -1, lVar4 + -1 == 0))
  {
    (**(code **)(*local_40 + 0x10))(local_40);
    lVar4 = local_40[2];
    local_40[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*local_40 + 0x18))(local_40);
    }
  }
LAB_00336f64:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


