/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d6104
 * Function: Caver::Proto::GUIMargins::MergeFrom
 * Signature: undefined __thiscall MergeFrom(GUIMargins * this, GUIMargins * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GUIMargins::MergeFrom(Caver::Proto::GUIMargins const&) */

void __thiscall Caver::Proto::GUIMargins::MergeFrom(GUIMargins *this,GUIMargins *param_1)

{
  undefined4 uVar1;
  GUIMargins GVar2;
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
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Common.pb.cc",0xefa);
    pLVar4 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar4);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  GVar2 = param_1[0x1c];
  uVar5 = (uint)(byte)GVar2;
  if (GVar2 == (GUIMargins)0x0) goto LAB_003d6198;
  if (((byte)GVar2 & 1) == 0) {
    if (((byte)GVar2 >> 1 & 1) != 0) {
LAB_003d61d8:
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 2;
      *(undefined4 *)(this + 0x10) = uVar1;
      uVar5 = *(uint *)(param_1 + 0x1c);
    }
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 1;
    *(undefined4 *)(this + 0xc) = uVar1;
    uVar5 = *(uint *)(param_1 + 0x1c);
    if ((uVar5 >> 1 & 1) != 0) goto LAB_003d61d8;
  }
  if ((uVar5 >> 2 & 1) != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x14);
    *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 4;
    *(undefined4 *)(this + 0x14) = uVar1;
    uVar5 = *(uint *)(param_1 + 0x1c);
  }
  if ((uVar5 >> 3 & 1) != 0) {
    *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
    *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 8;
  }
LAB_003d6198:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


