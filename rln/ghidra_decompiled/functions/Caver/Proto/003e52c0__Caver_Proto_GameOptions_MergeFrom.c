/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e52c0
 * Function: Caver::Proto::GameOptions::MergeFrom
 * Signature: undefined __thiscall MergeFrom(GameOptions * this, GameOptions * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::GameOptions::MergeFrom(Caver::Proto::GameOptions const&) */

void __thiscall Caver::Proto::GameOptions::MergeFrom(GameOptions *this,GameOptions *param_1)

{
  GameOptions *pGVar1;
  int iVar2;
  undefined4 uVar3;
  GameOptions GVar4;
  long lVar5;
  LogMessage *pLVar6;
  int iVar7;
  uint uVar8;
  GUIViewLayout *pGVar9;
  MusicPlaylist *pMVar10;
  MusicPlaylist *this_00;
  long lVar11;
  LogFinisher aLStack_80 [8];
  LogMessage aLStack_78 [32];
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_78,3,"./../../../../Source/Caver/Content/Proto/GameData.pb.cc",0xf93);
    pLVar6 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_78,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_80,pLVar6);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_78);
  }
  google::protobuf::internal::RepeatedPtrFieldBase::Reserve
            ((RepeatedPtrFieldBase *)(this + 0x10),*(int *)(param_1 + 0x18) + *(int *)(this + 0x18))
  ;
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar11 = 0;
    do {
      iVar2 = *(int *)(this + 0x18);
      iVar7 = *(int *)(this + 0x1c);
      pMVar10 = *(MusicPlaylist **)(*(long *)(param_1 + 0x10) + lVar11 * 8);
      if (iVar2 < iVar7) {
        *(int *)(this + 0x18) = iVar2 + 1;
        this_00 = *(MusicPlaylist **)(*(long *)(this + 0x10) + (long)iVar2 * 8);
      }
      else {
        if (iVar7 == *(int *)(this + 0x20)) {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                    ((RepeatedPtrFieldBase *)(this + 0x10),iVar7 + 1);
          iVar7 = *(int *)(this + 0x1c);
        }
        *(int *)(this + 0x1c) = iVar7 + 1;
        this_00 = operator_new(0x58);
        MusicPlaylist::MusicPlaylist(this_00);
        iVar2 = *(int *)(this + 0x18);
        *(int *)(this + 0x18) = iVar2 + 1;
        *(MusicPlaylist **)(*(long *)(this + 0x10) + (long)iVar2 * 8) = this_00;
      }
      MusicPlaylist::MergeFrom(this_00,pMVar10);
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)(param_1 + 0x18));
  }
  uVar8 = *(uint *)(param_1 + 0x6c);
  if ((uVar8 & 0x1fe) != 0) {
    if ((uVar8 >> 1 & 1) != 0) {
      GVar4 = param_1[0x48];
      *(uint *)(this + 0x6c) = *(uint *)(this + 0x6c) | 2;
      this[0x48] = GVar4;
      uVar8 = *(uint *)(param_1 + 0x6c);
    }
    if ((uVar8 >> 2 & 1) != 0) {
      GVar4 = param_1[0x49];
      *(uint *)(this + 0x6c) = *(uint *)(this + 0x6c) | 4;
      this[0x49] = GVar4;
      uVar8 = *(uint *)(param_1 + 0x6c);
    }
    if ((uVar8 >> 3 & 1) != 0) {
      uVar3 = *(undefined4 *)(param_1 + 0x4c);
      *(uint *)(this + 0x6c) = *(uint *)(this + 0x6c) | 8;
      *(undefined4 *)(this + 0x4c) = uVar3;
      uVar8 = *(uint *)(param_1 + 0x6c);
    }
    if ((uVar8 >> 4 & 1) != 0) {
      uVar3 = *(undefined4 *)(param_1 + 0x50);
      *(uint *)(this + 0x6c) = *(uint *)(this + 0x6c) | 0x10;
      *(undefined4 *)(this + 0x50) = uVar3;
      uVar8 = *(uint *)(param_1 + 0x6c);
    }
    if ((uVar8 >> 5 & 1) != 0) {
      pGVar9 = *(GUIViewLayout **)(this + 0x58);
      *(uint *)(this + 0x6c) = *(uint *)(this + 0x6c) | 0x20;
      if (pGVar9 == (GUIViewLayout *)0x0) {
        pGVar9 = operator_new(0x60);
        GUIViewLayout::GUIViewLayout(pGVar9);
        *(GUIViewLayout **)(this + 0x58) = pGVar9;
      }
      pGVar1 = *(GameOptions **)PTR_default_instance__007e6d28;
      if (*(long *)(param_1 + 0x58) != 0) {
        pGVar1 = param_1;
      }
      GUIViewLayout::MergeFrom(pGVar9,*(GUIViewLayout **)(pGVar1 + 0x58));
      uVar8 = *(uint *)(param_1 + 0x6c);
    }
    if ((uVar8 >> 6 & 1) != 0) {
      pGVar9 = *(GUIViewLayout **)(this + 0x60);
      *(uint *)(this + 0x6c) = *(uint *)(this + 0x6c) | 0x40;
      if (pGVar9 == (GUIViewLayout *)0x0) {
        pGVar9 = operator_new(0x60);
        GUIViewLayout::GUIViewLayout(pGVar9);
        *(GUIViewLayout **)(this + 0x60) = pGVar9;
      }
      pGVar1 = *(GameOptions **)PTR_default_instance__007e6d28;
      if (*(long *)(param_1 + 0x60) != 0) {
        pGVar1 = param_1;
      }
      GUIViewLayout::MergeFrom(pGVar9,*(GUIViewLayout **)(pGVar1 + 0x60));
      uVar8 = *(uint *)(param_1 + 0x6c);
    }
    if ((uVar8 >> 7 & 1) != 0) {
      GVar4 = param_1[0x68];
      *(uint *)(this + 0x6c) = *(uint *)(this + 0x6c) | 0x80;
      this[0x68] = GVar4;
      uVar8 = *(uint *)(param_1 + 0x6c);
    }
  }
  if ((uVar8 & 0xff00) != 0) {
    if ((uVar8 >> 8 & 1) != 0) {
      GVar4 = param_1[0x69];
      *(uint *)(this + 0x6c) = *(uint *)(this + 0x6c) | 0x100;
      this[0x69] = GVar4;
      uVar8 = *(uint *)(param_1 + 0x6c);
    }
    if ((uVar8 >> 9 & 1) != 0) {
      GVar4 = param_1[0x6a];
      *(uint *)(this + 0x6c) = *(uint *)(this + 0x6c) | 0x200;
      this[0x6a] = GVar4;
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


