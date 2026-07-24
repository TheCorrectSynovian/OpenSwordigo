/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ce674
 * Function: Caver::Proto::Vector3::MergeFrom
 * Signature: undefined __thiscall MergeFrom(Vector3 * this, Vector3 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Vector3::MergeFrom(Caver::Proto::Vector3 const&) */

void __thiscall Caver::Proto::Vector3::MergeFrom(Vector3 *this,Vector3 *param_1)

{
  undefined4 uVar1;
  Vector3 VVar2;
  long lVar3;
  LogMessage *pLVar4;
  uint uVar5;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Common.pb.cc",0x289);
    pLVar4 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar4);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  VVar2 = param_1[0x18];
  uVar5 = (uint)(byte)VVar2;
  if (VVar2 == (Vector3)0x0) goto LAB_003ce704;
  if (((byte)VVar2 & 1) == 0) {
    if (((byte)VVar2 >> 1 & 1) != 0) {
LAB_003ce744:
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      *(uint *)(this + 0x18) = *(uint *)(this + 0x18) | 2;
      *(undefined4 *)(this + 0x10) = uVar1;
      uVar5 = *(uint *)(param_1 + 0x18);
    }
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    *(uint *)(this + 0x18) = *(uint *)(this + 0x18) | 1;
    *(undefined4 *)(this + 0xc) = uVar1;
    uVar5 = *(uint *)(param_1 + 0x18);
    if ((uVar5 >> 1 & 1) != 0) goto LAB_003ce744;
  }
  if ((uVar5 >> 2 & 1) != 0) {
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(uint *)(this + 0x18) = *(uint *)(this + 0x18) | 4;
  }
LAB_003ce704:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


