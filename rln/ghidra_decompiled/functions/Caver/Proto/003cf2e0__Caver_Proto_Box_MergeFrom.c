/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cf2e0
 * Function: Caver::Proto::Box::MergeFrom
 * Signature: undefined __thiscall MergeFrom(Box * this, Box * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::Box::MergeFrom(Caver::Proto::Box const&) */

void __thiscall Caver::Proto::Box::MergeFrom(Box *this,Box *param_1)

{
  undefined4 uVar1;
  Box BVar2;
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
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Common.pb.cc",0x4bd);
    pLVar4 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar4);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  BVar2 = param_1[0x24];
  uVar5 = (uint)(byte)BVar2;
  if (BVar2 == (Box)0x0) goto LAB_003cf37c;
  if (((byte)BVar2 & 1) == 0) {
    if (((byte)BVar2 >> 1 & 1) != 0) {
LAB_003cf3bc:
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 2;
      *(undefined4 *)(this + 0x10) = uVar1;
      uVar5 = *(uint *)(param_1 + 0x24);
    }
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 1;
    *(undefined4 *)(this + 0xc) = uVar1;
    uVar5 = *(uint *)(param_1 + 0x24);
    if ((uVar5 >> 1 & 1) != 0) goto LAB_003cf3bc;
  }
  if ((uVar5 >> 2 & 1) != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x14);
    *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 4;
    *(undefined4 *)(this + 0x14) = uVar1;
    uVar5 = *(uint *)(param_1 + 0x24);
  }
  if ((uVar5 >> 3 & 1) != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 8;
    *(undefined4 *)(this + 0x18) = uVar1;
    uVar5 = *(uint *)(param_1 + 0x24);
  }
  if ((uVar5 >> 4 & 1) != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x1c);
    *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 0x10;
    *(undefined4 *)(this + 0x1c) = uVar1;
    uVar5 = *(uint *)(param_1 + 0x24);
  }
  if ((uVar5 >> 5 & 1) != 0) {
    *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
    *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 0x20;
  }
LAB_003cf37c:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


