/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d7698
 * Function: Caver::Proto::SoundEffect::MergeFrom
 * Signature: undefined __thiscall MergeFrom(SoundEffect * this, SoundEffect * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SoundEffect::MergeFrom(Caver::Proto::SoundEffect const&) */

void __thiscall Caver::Proto::SoundEffect::MergeFrom(SoundEffect *this,SoundEffect *param_1)

{
  undefined4 uVar1;
  SoundEffect SVar2;
  long lVar3;
  undefined *puVar4;
  LogMessage *pLVar5;
  long *plVar6;
  uint uVar7;
  undefined8 uVar8;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Common.pb.cc",0x10f7);
    pLVar5 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar5);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  puVar4 = PTR__default_name__007e7200;
  SVar2 = param_1[0x28];
  uVar7 = (uint)(byte)SVar2;
  if (SVar2 == (SoundEffect)0x0) goto LAB_003d772c;
  if (((byte)SVar2 & 1) == 0) {
    if (((byte)SVar2 >> 1 & 1) != 0) {
LAB_003d77a0:
      puVar4 = PTR__default_resource_name__007e66e8;
      plVar6 = *(long **)(this + 0x18);
      uVar8 = *(undefined8 *)(param_1 + 0x18);
      *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 2;
      if (plVar6 == (long *)puVar4) {
        plVar6 = operator_new(8);
        *plVar6 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0x18) = plVar6;
      }
      FUN_0066a6a8(plVar6,uVar8);
      uVar7 = *(uint *)(param_1 + 0x28);
    }
  }
  else {
    plVar6 = *(long **)(this + 0x10);
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 1;
    if (plVar6 == (long *)puVar4) {
      plVar6 = operator_new(8);
      *plVar6 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(this + 0x10) = plVar6;
    }
    FUN_0066a6a8(plVar6,uVar8);
    uVar7 = *(uint *)(param_1 + 0x28);
    if ((uVar7 >> 1 & 1) != 0) goto LAB_003d77a0;
  }
  if ((uVar7 >> 2 & 1) != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x20);
    *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 4;
    *(undefined4 *)(this + 0x20) = uVar1;
    uVar7 = *(uint *)(param_1 + 0x28);
  }
  if ((uVar7 >> 3 & 1) != 0) {
    *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
    *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 8;
  }
LAB_003d772c:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


