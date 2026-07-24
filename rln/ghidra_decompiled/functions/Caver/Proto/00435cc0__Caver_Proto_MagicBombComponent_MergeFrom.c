/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00435cc0
 * Function: Caver::Proto::MagicBombComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(MagicBombComponent * this, MagicBombComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MagicBombComponent::MergeFrom(Caver::Proto::MagicBombComponent const&) */

void __thiscall
Caver::Proto::MagicBombComponent::MergeFrom(MagicBombComponent *this,MagicBombComponent *param_1)

{
  MagicBombComponent *pMVar1;
  MagicBombComponent MVar2;
  long lVar3;
  LogMessage *pLVar4;
  FloatColor *this_00;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x62da);
    pLVar4 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar4);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
    MVar2 = param_1[0x18];
  }
  else {
    MVar2 = param_1[0x18];
  }
  if (((byte)MVar2 & 1) != 0) {
    this_00 = *(FloatColor **)(this + 0x10);
    *(uint *)(this + 0x18) = *(uint *)(this + 0x18) | 1;
    if (this_00 == (FloatColor *)0x0) {
      this_00 = operator_new(0x20);
      FloatColor::FloatColor(this_00);
      *(FloatColor **)(this + 0x10) = this_00;
    }
    pMVar1 = *(MagicBombComponent **)PTR_default_instance__007e7bd0;
    if (*(long *)(param_1 + 0x10) != 0) {
      pMVar1 = param_1;
    }
    FloatColor::MergeFrom(this_00,*(FloatColor **)(pMVar1 + 0x10));
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


