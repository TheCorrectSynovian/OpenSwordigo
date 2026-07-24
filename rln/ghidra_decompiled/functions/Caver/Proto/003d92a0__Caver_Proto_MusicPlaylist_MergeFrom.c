/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d92a0
 * Function: Caver::Proto::MusicPlaylist::MergeFrom
 * Signature: undefined __thiscall MergeFrom(MusicPlaylist * this, MusicPlaylist * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MusicPlaylist::MergeFrom(Caver::Proto::MusicPlaylist const&) */

void __thiscall Caver::Proto::MusicPlaylist::MergeFrom(MusicPlaylist *this,MusicPlaylist *param_1)

{
  long lVar1;
  undefined *puVar2;
  LogMessage *pLVar3;
  long *plVar4;
  undefined8 uVar5;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Common.pb.cc",0x1324);
    pLVar3 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar3);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  google::protobuf::RepeatedPtrField<Caver::Proto::MusicTrack>::MergeFrom
            ((RepeatedPtrField<Caver::Proto::MusicTrack> *)(this + 0x18),
             (RepeatedPtrField *)(param_1 + 0x18));
  puVar2 = PTR__default_name__007e5710;
  if (((byte)param_1[0x50] & 1) != 0) {
    plVar4 = *(long **)(this + 0x10);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    *(uint *)(this + 0x50) = *(uint *)(this + 0x50) | 1;
    if (plVar4 == (long *)puVar2) {
      plVar4 = operator_new(8);
      *plVar4 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(this + 0x10) = plVar4;
    }
    FUN_0066a6a8(plVar4,uVar5);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


