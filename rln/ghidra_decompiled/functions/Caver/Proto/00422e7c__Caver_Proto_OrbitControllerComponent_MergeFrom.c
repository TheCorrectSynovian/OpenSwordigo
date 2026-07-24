/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00422e7c
 * Function: Caver::Proto::OrbitControllerComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(OrbitControllerComponent * this, OrbitControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::OrbitControllerComponent::MergeFrom(Caver::Proto::OrbitControllerComponent const&)
    */

void __thiscall
Caver::Proto::OrbitControllerComponent::MergeFrom
          (OrbitControllerComponent *this,OrbitControllerComponent *param_1)

{
  OrbitControllerComponent *pOVar1;
  undefined4 uVar2;
  OrbitControllerComponent OVar3;
  long lVar4;
  LogMessage *pLVar5;
  uint uVar6;
  Vector3 *this_00;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x4078);
    pLVar5 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar5);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
    OVar3 = param_1[0x20];
  }
  else {
    OVar3 = param_1[0x20];
  }
  if (OVar3 != (OrbitControllerComponent)0x0) {
    uVar6 = (uint)(byte)OVar3;
    if (((byte)OVar3 & 1) != 0) {
      this_00 = *(Vector3 **)(this + 0x10);
      *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 1;
      if (this_00 == (Vector3 *)0x0) {
        this_00 = operator_new(0x20);
        Vector3::Vector3(this_00);
        *(Vector3 **)(this + 0x10) = this_00;
      }
      pOVar1 = *(OrbitControllerComponent **)PTR_default_instance__007e68f8;
      if (*(long *)(param_1 + 0x10) != 0) {
        pOVar1 = param_1;
      }
      Vector3::MergeFrom(this_00,*(Vector3 **)(pOVar1 + 0x10));
      uVar6 = *(uint *)(param_1 + 0x20);
    }
    if ((uVar6 >> 1 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x18);
      *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 2;
      *(undefined4 *)(this + 0x18) = uVar2;
      uVar6 = *(uint *)(param_1 + 0x20);
    }
    if ((uVar6 >> 2 & 1) != 0) {
      *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
      *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 4;
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


