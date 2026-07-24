/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003dc804
 * Function: Caver::Proto::MapNode::MergeFrom
 * Signature: undefined __thiscall MergeFrom(MapNode * this, MapNode * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::MapNode::MergeFrom(Caver::Proto::MapNode const&) */

void __thiscall Caver::Proto::MapNode::MergeFrom(MapNode *this,MapNode *param_1)

{
  MapNode *pMVar1;
  undefined4 uVar2;
  MapNode MVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  LogMessage *pLVar7;
  long *plVar8;
  long *plVar9;
  uint uVar10;
  Vector2 *this_00;
  undefined8 uVar11;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/GameData.pb.cc",0x36a);
    pLVar7 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar7);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  google::protobuf::RepeatedPtrField<Caver::Proto::MapNode_Portal>::MergeFrom
            ((RepeatedPtrField<Caver::Proto::MapNode_Portal> *)(this + 0x28),
             (RepeatedPtrField *)(param_1 + 0x28));
  uVar10 = *(uint *)(param_1 + 0x84);
  if ((uVar10 & 0xff) != 0) {
    if ((uVar10 & 1) != 0) {
      this_00 = *(Vector2 **)(this + 0x10);
      *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 1;
      if (this_00 == (Vector2 *)0x0) {
        this_00 = operator_new(0x18);
        Vector2::Vector2(this_00);
        *(Vector2 **)(this + 0x10) = this_00;
      }
      pMVar1 = *(MapNode **)PTR_default_instance__007e5378;
      if (*(long *)(param_1 + 0x10) != 0) {
        pMVar1 = param_1;
      }
      Vector2::MergeFrom(this_00,*(Vector2 **)(pMVar1 + 0x10));
      uVar10 = *(uint *)(param_1 + 0x84);
    }
    puVar6 = PTR__default_level_name__007e5878;
    puVar5 = PTR__default_title__007e6348;
    if ((uVar10 >> 1 & 1) != 0) {
      plVar8 = *(long **)(this + 0x18);
      uVar11 = *(undefined8 *)(param_1 + 0x18);
      *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 2;
      if (plVar8 == (long *)puVar6) {
        plVar8 = operator_new(8);
        *plVar8 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0x18) = plVar8;
      }
      FUN_0066a6a8(plVar8,uVar11);
      uVar10 = *(uint *)(param_1 + 0x84);
      puVar5 = PTR__default_title__007e6348;
    }
    PTR__default_title__007e6348 = puVar5;
    if ((uVar10 >> 2 & 1) != 0) {
      plVar8 = *(long **)(this + 0x20);
      uVar11 = *(undefined8 *)(param_1 + 0x20);
      *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 4;
      if (plVar8 == (long *)puVar5) {
        plVar8 = operator_new(8);
        *plVar8 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0x20) = plVar8;
      }
      FUN_0066a6a8(plVar8,uVar11);
      uVar10 = *(uint *)(param_1 + 0x84);
    }
    if ((uVar10 >> 4 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x60);
      *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 0x10;
      *(undefined4 *)(this + 0x60) = uVar2;
      uVar10 = *(uint *)(param_1 + 0x84);
    }
    if ((uVar10 >> 5 & 1) != 0) {
      MVar3 = param_1[100];
      *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 0x20;
      this[100] = MVar3;
      uVar10 = *(uint *)(param_1 + 0x84);
    }
    plVar8 = (long *)PTR__default_music__007e7748;
    if ((uVar10 >> 6 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x68);
      *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 0x40;
      *(undefined4 *)(this + 0x68) = uVar2;
      uVar10 = *(uint *)(param_1 + 0x84);
      plVar8 = (long *)PTR__default_music__007e7748;
    }
    PTR__default_music__007e7748 = (undefined *)plVar8;
    if ((uVar10 >> 7 & 1) != 0) {
      plVar9 = *(long **)(this + 0x70);
      uVar11 = *(undefined8 *)(param_1 + 0x70);
      *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 0x80;
      if (plVar9 == plVar8) {
        plVar9 = operator_new(8);
        *plVar9 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0x70) = plVar9;
      }
      FUN_0066a6a8(plVar9,uVar11);
      uVar10 = *(uint *)(param_1 + 0x84);
    }
  }
  if ((uVar10 & 0xff00) != 0) {
    if ((uVar10 >> 8 & 1) != 0) {
      MVar3 = param_1[0x78];
      *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 0x100;
      this[0x78] = MVar3;
      uVar10 = *(uint *)(param_1 + 0x84);
    }
    if ((uVar10 >> 9 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x7c);
      *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 0x200;
      *(undefined4 *)(this + 0x7c) = uVar2;
      uVar10 = *(uint *)(param_1 + 0x84);
    }
    if ((uVar10 >> 10 & 1) != 0) {
      MVar3 = param_1[0x80];
      *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 0x400;
      this[0x80] = MVar3;
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


