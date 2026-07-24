/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00434898
 * Function: Caver::Proto::MagicSpellCastComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(MagicSpellCastComponent * this, MagicSpellCastComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MagicSpellCastComponent::MergeFrom(Caver::Proto::MagicSpellCastComponent const&) */

void __thiscall
Caver::Proto::MagicSpellCastComponent::MergeFrom
          (MagicSpellCastComponent *this,MagicSpellCastComponent *param_1)

{
  undefined4 uVar1;
  MagicSpellCastComponent MVar2;
  long lVar3;
  LogMessage *pLVar4;
  uint uVar5;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x607f);
    pLVar4 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar4);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  MVar2 = param_1[0x14];
  uVar5 = (uint)(byte)MVar2;
  if (MVar2 != (MagicSpellCastComponent)0x0) {
    if (((byte)MVar2 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0xc);
      *(uint *)(this + 0x14) = *(uint *)(this + 0x14) | 1;
      *(undefined4 *)(this + 0xc) = uVar1;
      uVar5 = *(uint *)(param_1 + 0x14);
    }
    if ((uVar5 >> 1 & 1) != 0) {
      *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
      *(uint *)(this + 0x14) = *(uint *)(this + 0x14) | 2;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


