/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003de064
 * Function: Caver::Proto::MapZone::MergeFrom
 * Signature: undefined __thiscall MergeFrom(MapZone * this, MapZone * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MapZone::MergeFrom(Caver::Proto::MapZone const&) */

void __thiscall Caver::Proto::MapZone::MergeFrom(MapZone *this,MapZone *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  MapZone MVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  LogMessage *pLVar8;
  MapNode *this_00;
  long *plVar9;
  long *plVar10;
  int iVar11;
  uint uVar12;
  undefined8 uVar13;
  MapNode *pMVar14;
  long lVar15;
  int iVar16;
  LogFinisher aLStack_90 [8];
  LogMessage aLStack_88 [32];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_88,3,"./../../../../Source/Caver/Content/Proto/GameData.pb.cc",0x4c1);
    pLVar8 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_88,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_90,pLVar8);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_88);
  }
  google::protobuf::internal::RepeatedPtrFieldBase::Reserve
            ((RepeatedPtrFieldBase *)(this + 0x20),*(int *)(param_1 + 0x28) + *(int *)(this + 0x28))
  ;
  puVar7 = PTR__default_music__007e7748;
  puVar6 = PTR__default_title__007e6348;
  puVar5 = PTR__default_level_name__007e5878;
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar15 = 0;
    puVar1 = PTR_vtable_007e68a0 + 0x10;
    do {
      iVar16 = *(int *)(this + 0x28);
      iVar11 = *(int *)(this + 0x2c);
      pMVar14 = *(MapNode **)(*(long *)(param_1 + 0x20) + lVar15 * 8);
      if (iVar16 < iVar11) {
        *(int *)(this + 0x28) = iVar16 + 1;
        this_00 = *(MapNode **)(*(long *)(this + 0x20) + (long)iVar16 * 8);
      }
      else {
        if (iVar11 == *(int *)(this + 0x30)) {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                    ((RepeatedPtrFieldBase *)(this + 0x20),iVar11 + 1);
          iVar16 = *(int *)(this + 0x28);
          iVar11 = *(int *)(this + 0x2c);
        }
        *(int *)(this + 0x2c) = iVar11 + 1;
        this_00 = operator_new(0x88);
        *(undefined **)this_00 = puVar1;
        *(MapNode **)(this_00 + 0x28) = this_00 + 0x40;
        *(long *)(this_00 + 0x30) = 0;
        *(undefined4 *)(this_00 + 0x38) = 4;
        *(undefined4 *)(this_00 + 8) = 0;
        *(long *)(this_00 + 0x10) = 0;
        *(undefined **)(this_00 + 0x20) = puVar6;
        *(undefined **)(this_00 + 0x18) = puVar5;
        *(undefined4 *)(this_00 + 0x60) = 0;
        this_00[100] = (MapNode)0x0;
        *(undefined4 *)(this_00 + 0x68) = 0;
        *(undefined **)(this_00 + 0x70) = puVar7;
        this_00[0x78] = (MapNode)0x0;
        *(undefined4 *)(this_00 + 0x7c) = 0;
        this_00[0x80] = (MapNode)0x0;
        *(undefined4 *)(this_00 + 0x84) = 0;
        *(int *)(this + 0x28) = iVar16 + 1;
        *(MapNode **)(*(long *)(this + 0x20) + (long)iVar16 * 8) = this_00;
      }
      MapNode::MergeFrom(this_00,pMVar14);
      lVar15 = lVar15 + 1;
    } while (lVar15 < *(int *)(param_1 + 0x28));
  }
  puVar5 = PTR__default_name__007e5428;
  MVar3 = param_1[0x68];
  uVar12 = (uint)(byte)MVar3;
  if (MVar3 == (MapZone)0x0) goto LAB_003de318;
  if (((byte)MVar3 & 1) == 0) {
    if (((byte)MVar3 >> 1 & 1) != 0) {
LAB_003de264:
      puVar5 = PTR__default_title__007e7d78;
      plVar9 = *(long **)(this + 0x18);
      uVar13 = *(undefined8 *)(param_1 + 0x18);
      *(uint *)(this + 0x68) = *(uint *)(this + 0x68) | 2;
      if (plVar9 == (long *)puVar5) {
        plVar9 = operator_new(8);
        *plVar9 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0x18) = plVar9;
      }
      FUN_0066a6a8(plVar9,uVar13);
      uVar12 = *(uint *)(param_1 + 0x68);
    }
  }
  else {
    plVar9 = *(long **)(this + 0x10);
    uVar13 = *(undefined8 *)(param_1 + 0x10);
    *(uint *)(this + 0x68) = *(uint *)(this + 0x68) | 1;
    if (plVar9 == (long *)puVar5) {
      plVar9 = operator_new(8);
      *plVar9 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(this + 0x10) = plVar9;
    }
    FUN_0066a6a8(plVar9,uVar13);
    uVar12 = *(uint *)(param_1 + 0x68);
    if ((uVar12 >> 1 & 1) != 0) goto LAB_003de264;
  }
  plVar9 = (long *)PTR__default_music__007e5568;
  if ((uVar12 >> 3 & 1) != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x58);
    *(uint *)(this + 0x68) = *(uint *)(this + 0x68) | 8;
    *(undefined4 *)(this + 0x58) = uVar2;
    uVar12 = *(uint *)(param_1 + 0x68);
    plVar9 = (long *)PTR__default_music__007e5568;
  }
  PTR__default_music__007e5568 = (undefined *)plVar9;
  if ((uVar12 >> 4 & 1) != 0) {
    plVar10 = *(long **)(this + 0x60);
    uVar13 = *(undefined8 *)(param_1 + 0x60);
    *(uint *)(this + 0x68) = *(uint *)(this + 0x68) | 0x10;
    if (plVar10 == plVar9) {
      plVar10 = operator_new(8);
      *plVar10 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(this + 0x60) = plVar10;
    }
    FUN_0066a6a8(plVar10,uVar13);
  }
LAB_003de318:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


