/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00410f00
 * Function: Caver::Proto::SoundEffectComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(SoundEffectComponent * this, SoundEffectComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SoundEffectComponent::MergeFrom(Caver::Proto::SoundEffectComponent const&) */

void __thiscall
Caver::Proto::SoundEffectComponent::MergeFrom
          (SoundEffectComponent *this,SoundEffectComponent *param_1)

{
  undefined4 uVar1;
  SoundEffectComponent SVar2;
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
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x228b);
    pLVar5 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar5);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  puVar4 = PTR__default_name__007e7518;
  SVar2 = param_1[0x20];
  uVar7 = (uint)(byte)SVar2;
  if (SVar2 == (SoundEffectComponent)0x0) goto LAB_00410f90;
  if (((byte)SVar2 & 1) == 0) {
    if (((byte)SVar2 >> 1 & 1) != 0) {
LAB_00411004:
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 2;
      *(undefined4 *)(this + 0x18) = uVar1;
      uVar7 = *(uint *)(param_1 + 0x20);
    }
  }
  else {
    plVar6 = *(long **)(this + 0x10);
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 1;
    if (plVar6 == (long *)puVar4) {
      plVar6 = operator_new(8);
      *plVar6 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(this + 0x10) = plVar6;
    }
    FUN_0066a6a8(plVar6,uVar8);
    uVar7 = *(uint *)(param_1 + 0x20);
    if ((uVar7 >> 1 & 1) != 0) goto LAB_00411004;
  }
  if ((uVar7 >> 2 & 1) != 0) {
    *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 4;
  }
LAB_00410f90:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


