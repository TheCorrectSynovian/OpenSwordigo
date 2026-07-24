/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cfad0
 * Function: Caver::Proto::Circle::MergeFrom
 * Signature: undefined __thiscall MergeFrom(Circle * this, Circle * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Circle::MergeFrom(Caver::Proto::Circle const&) */

void __thiscall Caver::Proto::Circle::MergeFrom(Circle *this,Circle *param_1)

{
  Circle *pCVar1;
  Circle CVar2;
  long lVar3;
  undefined *puVar4;
  LogMessage *pLVar5;
  Vector2 *this_00;
  uint uVar6;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Common.pb.cc",0x58f);
    pLVar5 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar5);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  CVar2 = param_1[0x1c];
  uVar6 = (uint)(byte)CVar2;
  if (CVar2 != (Circle)0x0) {
    if (((byte)CVar2 & 1) != 0) {
      this_00 = *(Vector2 **)(this + 0x10);
      *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 1;
      if (this_00 == (Vector2 *)0x0) {
        this_00 = operator_new(0x18);
        puVar4 = PTR_vtable_007e6758;
        *(long *)(this_00 + 8) = 0;
        *(long *)(this_00 + 0x10) = 0;
        *(undefined **)this_00 = puVar4 + 0x10;
        *(Vector2 **)(this + 0x10) = this_00;
      }
      pCVar1 = *(Circle **)PTR_default_instance__007e76b0;
      if (*(long *)(param_1 + 0x10) != 0) {
        pCVar1 = param_1;
      }
      Vector2::MergeFrom(this_00,*(Vector2 **)(pCVar1 + 0x10));
      uVar6 = *(uint *)(param_1 + 0x1c);
    }
    if ((uVar6 >> 1 & 1) != 0) {
      *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
      *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 2;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


