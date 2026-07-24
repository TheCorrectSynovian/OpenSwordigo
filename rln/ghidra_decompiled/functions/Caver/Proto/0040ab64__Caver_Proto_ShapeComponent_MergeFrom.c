/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040ab64
 * Function: Caver::Proto::ShapeComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(ShapeComponent * this, ShapeComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ShapeComponent::MergeFrom(Caver::Proto::ShapeComponent const&) */

void __thiscall
Caver::Proto::ShapeComponent::MergeFrom(ShapeComponent *this,ShapeComponent *param_1)

{
  ShapeComponent *pSVar1;
  ShapeComponent SVar2;
  long lVar3;
  LogMessage *pLVar4;
  uint uVar5;
  Rectangle *this_00;
  Circle *this_01;
  Polygon *this_02;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x17ee);
    pLVar4 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar4);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
    SVar2 = param_1[0x28];
  }
  else {
    SVar2 = param_1[0x28];
  }
  if (SVar2 != (ShapeComponent)0x0) {
    uVar5 = (uint)(byte)SVar2;
    if (((byte)SVar2 & 1) != 0) {
      this_00 = *(Rectangle **)(this + 0x10);
      *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 1;
      if (this_00 == (Rectangle *)0x0) {
        this_00 = operator_new(0x20);
        Rectangle::Rectangle(this_00);
        *(Rectangle **)(this + 0x10) = this_00;
      }
      pSVar1 = *(ShapeComponent **)PTR_default_instance__007e7b10;
      if (*(long *)(param_1 + 0x10) != 0) {
        pSVar1 = param_1;
      }
      Rectangle::MergeFrom(this_00,*(Rectangle **)(pSVar1 + 0x10));
      uVar5 = *(uint *)(param_1 + 0x28);
    }
    if ((uVar5 >> 1 & 1) != 0) {
      this_01 = *(Circle **)(this + 0x18);
      *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 2;
      if (this_01 == (Circle *)0x0) {
        this_01 = operator_new(0x20);
        Circle::Circle(this_01);
        *(Circle **)(this + 0x18) = this_01;
      }
      pSVar1 = *(ShapeComponent **)PTR_default_instance__007e7b10;
      if (*(long *)(param_1 + 0x18) != 0) {
        pSVar1 = param_1;
      }
      Circle::MergeFrom(this_01,*(Circle **)(pSVar1 + 0x18));
      uVar5 = *(uint *)(param_1 + 0x28);
    }
    if ((uVar5 >> 2 & 1) != 0) {
      this_02 = *(Polygon **)(this + 0x20);
      *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 4;
      if (this_02 == (Polygon *)0x0) {
        this_02 = operator_new(0x50);
        Polygon::Polygon(this_02);
        *(Polygon **)(this + 0x20) = this_02;
      }
      pSVar1 = *(ShapeComponent **)PTR_default_instance__007e7b10;
      if (*(long *)(param_1 + 0x20) != 0) {
        pSVar1 = param_1;
      }
      Polygon::MergeFrom(this_02,*(Polygon **)(pSVar1 + 0x20));
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


