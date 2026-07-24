/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003df868
 * Function: Caver::Proto::Item::MergeFrom
 * Signature: undefined __thiscall MergeFrom(Item * this, Item * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::Item::MergeFrom(Caver::Proto::Item const&) */

void __thiscall Caver::Proto::Item::MergeFrom(Item *this,Item *param_1)

{
  undefined4 uVar1;
  Item IVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  LogMessage *pLVar6;
  long *plVar7;
  uint uVar8;
  undefined8 uVar9;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/GameData.pb.cc",0x734);
    pLVar6 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar6);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  uVar8 = *(uint *)(param_1 + 0x40);
  if ((uVar8 & 0xff) != 0) {
    puVar5 = PTR__default_name__007e6888;
    if ((uVar8 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0xc);
      *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 1;
      *(undefined4 *)(this + 0xc) = uVar1;
      uVar8 = *(uint *)(param_1 + 0x40);
      puVar5 = PTR__default_name__007e6888;
    }
    puVar4 = PTR__default_title__007e4fd8;
    PTR__default_name__007e6888 = puVar5;
    if ((uVar8 >> 1 & 1) != 0) {
      plVar7 = *(long **)(this + 0x10);
      uVar9 = *(undefined8 *)(param_1 + 0x10);
      *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 2;
      if (plVar7 == (long *)puVar5) {
        plVar7 = operator_new(8);
        *plVar7 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0x10) = plVar7;
      }
      FUN_0066a6a8(plVar7,uVar9);
      uVar8 = *(uint *)(param_1 + 0x40);
      puVar4 = PTR__default_title__007e4fd8;
    }
    PTR__default_title__007e4fd8 = puVar4;
    puVar5 = PTR__default_short_description__007e6118;
    if ((uVar8 >> 2 & 1) != 0) {
      plVar7 = *(long **)(this + 0x18);
      uVar9 = *(undefined8 *)(param_1 + 0x18);
      *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 4;
      if (plVar7 == (long *)puVar4) {
        plVar7 = operator_new(8);
        *plVar7 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0x18) = plVar7;
      }
      FUN_0066a6a8(plVar7,uVar9);
      uVar8 = *(uint *)(param_1 + 0x40);
      puVar5 = PTR__default_short_description__007e6118;
    }
    PTR__default_short_description__007e6118 = puVar5;
    puVar4 = PTR__default_description__007e7e10;
    if ((uVar8 >> 3 & 1) != 0) {
      plVar7 = *(long **)(this + 0x20);
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 8;
      if (plVar7 == (long *)puVar5) {
        plVar7 = operator_new(8);
        *plVar7 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0x20) = plVar7;
      }
      FUN_0066a6a8(plVar7,uVar9);
      uVar8 = *(uint *)(param_1 + 0x40);
      puVar4 = PTR__default_description__007e7e10;
    }
    PTR__default_description__007e7e10 = puVar4;
    if ((uVar8 >> 4 & 1) != 0) {
      plVar7 = *(long **)(this + 0x28);
      uVar9 = *(undefined8 *)(param_1 + 0x28);
      *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 0x10;
      if (plVar7 == (long *)puVar4) {
        plVar7 = operator_new(8);
        *plVar7 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0x28) = plVar7;
      }
      FUN_0066a6a8(plVar7,uVar9);
      uVar8 = *(uint *)(param_1 + 0x40);
    }
    if ((uVar8 >> 5 & 1) != 0) {
      IVar2 = param_1[0x30];
      *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 0x20;
      this[0x30] = IVar2;
      uVar8 = *(uint *)(param_1 + 0x40);
    }
    if ((uVar8 >> 6 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x34);
      *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 0x40;
      *(undefined4 *)(this + 0x34) = uVar1;
      uVar8 = *(uint *)(param_1 + 0x40);
    }
    if ((uVar8 >> 7 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x38);
      *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 0x80;
      *(undefined4 *)(this + 0x38) = uVar1;
      uVar8 = *(uint *)(param_1 + 0x40);
    }
  }
  if ((uVar8 >> 8 & 1) != 0) {
    *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
    *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 0x100;
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


