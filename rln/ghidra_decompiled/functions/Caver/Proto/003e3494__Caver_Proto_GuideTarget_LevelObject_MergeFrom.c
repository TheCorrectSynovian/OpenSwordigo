/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e3494
 * Function: Caver::Proto::GuideTarget_LevelObject::MergeFrom
 * Signature: undefined __thiscall MergeFrom(GuideTarget_LevelObject * this, GuideTarget_LevelObject * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GuideTarget_LevelObject::MergeFrom(Caver::Proto::GuideTarget_LevelObject const&) */

void __thiscall
Caver::Proto::GuideTarget_LevelObject::MergeFrom
          (GuideTarget_LevelObject *this,GuideTarget_LevelObject *param_1)

{
  GuideTarget_LevelObject GVar1;
  long lVar2;
  undefined *puVar3;
  LogMessage *pLVar4;
  long *plVar5;
  uint uVar6;
  undefined8 uVar7;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/GameData.pb.cc",0xc52);
    pLVar4 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar4);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  puVar3 = PTR__default_level_name__007e6158;
  GVar1 = param_1[0x20];
  uVar6 = (uint)(byte)GVar1;
  if (GVar1 != (GuideTarget_LevelObject)0x0) {
    if (((byte)GVar1 & 1) != 0) {
      plVar5 = *(long **)(this + 0x10);
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 1;
      if (plVar5 == (long *)puVar3) {
        plVar5 = operator_new(8);
        *plVar5 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0x10) = plVar5;
      }
      FUN_0066a6a8(plVar5,uVar7);
      uVar6 = *(uint *)(param_1 + 0x20);
    }
    puVar3 = PTR__default_object_identifier__007e7308;
    if ((uVar6 >> 1 & 1) != 0) {
      plVar5 = *(long **)(this + 0x18);
      uVar7 = *(undefined8 *)(param_1 + 0x18);
      *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 2;
      if (plVar5 == (long *)puVar3) {
        plVar5 = operator_new(8);
        *plVar5 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0x18) = plVar5;
      }
      FUN_0066a6a8(plVar5,uVar7);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


