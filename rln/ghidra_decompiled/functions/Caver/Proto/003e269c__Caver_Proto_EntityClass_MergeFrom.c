/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e269c
 * Function: Caver::Proto::EntityClass::MergeFrom
 * Signature: undefined __thiscall MergeFrom(EntityClass * this, EntityClass * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::EntityClass::MergeFrom(Caver::Proto::EntityClass const&) */

void __thiscall Caver::Proto::EntityClass::MergeFrom(EntityClass *this,EntityClass *param_1)

{
  undefined4 uVar1;
  EntityClass EVar2;
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
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/GameData.pb.cc",0xb54);
    pLVar5 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar5);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  puVar4 = PTR__default_name__007e5c18;
  EVar2 = param_1[0x2c];
  uVar7 = (uint)(byte)EVar2;
  if (EVar2 == (EntityClass)0x0) goto LAB_003e2740;
  if (((byte)EVar2 & 1) == 0) {
    if (((byte)EVar2 >> 1 & 1) != 0) {
LAB_003e27b4:
      puVar4 = PTR__default_title__007e56f8;
      plVar6 = *(long **)(this + 0x18);
      uVar8 = *(undefined8 *)(param_1 + 0x18);
      *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 2;
      if (plVar6 == (long *)puVar4) {
        plVar6 = operator_new(8);
        *plVar6 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0x18) = plVar6;
      }
      FUN_0066a6a8(plVar6,uVar8);
      uVar7 = *(uint *)(param_1 + 0x2c);
    }
  }
  else {
    plVar6 = *(long **)(this + 0x10);
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 1;
    if (plVar6 == (long *)puVar4) {
      plVar6 = operator_new(8);
      *plVar6 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(this + 0x10) = plVar6;
    }
    FUN_0066a6a8(plVar6,uVar8);
    uVar7 = *(uint *)(param_1 + 0x2c);
    if ((uVar7 >> 1 & 1) != 0) goto LAB_003e27b4;
  }
  if ((uVar7 >> 2 & 1) != 0) {
    EVar2 = param_1[0x20];
    *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 4;
    this[0x20] = EVar2;
    uVar7 = *(uint *)(param_1 + 0x2c);
  }
  if ((uVar7 >> 3 & 1) != 0) {
    EVar2 = param_1[0x21];
    *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 8;
    this[0x21] = EVar2;
    uVar7 = *(uint *)(param_1 + 0x2c);
  }
  if ((uVar7 >> 4 & 1) != 0) {
    EVar2 = param_1[0x22];
    *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 0x10;
    this[0x22] = EVar2;
    uVar7 = *(uint *)(param_1 + 0x2c);
  }
  if ((uVar7 >> 5 & 1) != 0) {
    EVar2 = param_1[0x23];
    *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 0x20;
    this[0x23] = EVar2;
    uVar7 = *(uint *)(param_1 + 0x2c);
  }
  if ((uVar7 >> 6 & 1) != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x24);
    *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 0x40;
    *(undefined4 *)(this + 0x24) = uVar1;
    uVar7 = *(uint *)(param_1 + 0x2c);
  }
  if ((uVar7 >> 7 & 1) != 0) {
    *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
    *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 0x80;
  }
LAB_003e2740:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


