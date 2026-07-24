/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d567c
 * Function: Caver::Proto::Program::MergeFrom
 * Signature: undefined __thiscall MergeFrom(Program * this, Program * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Program::MergeFrom(Caver::Proto::Program const&) */

void __thiscall Caver::Proto::Program::MergeFrom(Program *this,Program *param_1)

{
  Program PVar1;
  long lVar2;
  undefined *puVar3;
  LogMessage *pLVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  undefined8 uVar8;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Common.pb.cc",0xdff);
    pLVar4 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar4);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  puVar3 = PTR__default_name__007e7d20;
  PVar1 = param_1[0x28];
  uVar7 = (uint)(byte)PVar1;
  if (PVar1 == (Program)0x0) goto LAB_003d57e8;
  if (((byte)PVar1 & 1) == 0) {
    plVar5 = (long *)PTR__default_bytes__007e7070;
    if (((byte)PVar1 >> 1 & 1) != 0) {
LAB_003d5750:
      puVar3 = PTR__default_string__007e54d8;
      plVar5 = *(long **)(this + 0x18);
      uVar8 = *(undefined8 *)(param_1 + 0x18);
      *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 2;
      if (plVar5 == (long *)puVar3) {
        plVar5 = operator_new(8);
        *plVar5 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0x18) = plVar5;
      }
      FUN_0066a6a8(plVar5,uVar8);
      uVar7 = *(uint *)(param_1 + 0x28);
      plVar5 = (long *)PTR__default_bytes__007e7070;
    }
  }
  else {
    plVar5 = *(long **)(this + 0x10);
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 1;
    if (plVar5 == (long *)puVar3) {
      plVar5 = operator_new(8);
      *plVar5 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(this + 0x10) = plVar5;
    }
    FUN_0066a6a8(plVar5,uVar8);
    uVar7 = *(uint *)(param_1 + 0x28);
    plVar5 = (long *)PTR__default_bytes__007e7070;
    if ((uVar7 >> 1 & 1) != 0) goto LAB_003d5750;
  }
  PTR__default_bytes__007e7070 = (undefined *)plVar5;
  if ((uVar7 >> 2 & 1) != 0) {
    plVar6 = *(long **)(this + 0x20);
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 4;
    if (plVar6 == plVar5) {
      plVar6 = operator_new(8);
      *plVar6 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(this + 0x20) = plVar6;
    }
    FUN_0066a6a8(plVar6,uVar8);
  }
LAB_003d57e8:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


