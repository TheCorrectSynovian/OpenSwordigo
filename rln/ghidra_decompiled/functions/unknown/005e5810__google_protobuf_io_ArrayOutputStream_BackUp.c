/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e5810
 * Function: google::protobuf::io::ArrayOutputStream::BackUp
 * Signature: undefined __thiscall BackUp(ArrayOutputStream * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::ArrayOutputStream::BackUp(int) */

void __thiscall google::protobuf::io::ArrayOutputStream::BackUp(ArrayOutputStream *this,int param_1)

{
  int iVar1;
  long lVar2;
  LogMessage *pLVar3;
  LogFinisher aLStack_b0 [8];
  LogMessage aLStack_a8 [32];
  LogFinisher aLStack_88 [8];
  LogMessage aLStack_80 [32];
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)(this + 0x1c);
  if (iVar1 < 1) {
    internal::LogMessage::LogMessage(aLStack_58,3,&DAT_00699304,0x84);
    pLVar3 = (LogMessage *)
             internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (last_returned_size_) > (0): ");
    pLVar3 = (LogMessage *)
             internal::LogMessage::operator<<
                       (pLVar3,"BackUp() can only be called after a successful Next().");
    internal::LogFinisher::operator=(aLStack_60,pLVar3);
    internal::LogMessage::~LogMessage(aLStack_58);
    iVar1 = *(int *)(this + 0x1c);
  }
  if (iVar1 < param_1) {
    internal::LogMessage::LogMessage(aLStack_80,3,&DAT_00699304,0x86);
    pLVar3 = (LogMessage *)
             internal::LogMessage::operator<<
                       (aLStack_80,"CHECK failed: (count) <= (last_returned_size_): ");
    internal::LogFinisher::operator=(aLStack_88,pLVar3);
    internal::LogMessage::~LogMessage(aLStack_80);
  }
  if (param_1 < 0) {
    internal::LogMessage::LogMessage(aLStack_a8,3,&DAT_00699304,0x87);
    pLVar3 = (LogMessage *)
             internal::LogMessage::operator<<(aLStack_a8,"CHECK failed: (count) >= (0): ");
    internal::LogFinisher::operator=(aLStack_b0,pLVar3);
    internal::LogMessage::~LogMessage(aLStack_a8);
  }
  *(int *)(this + 0x18) = *(int *)(this + 0x18) - param_1;
  *(undefined4 *)(this + 0x1c) = 0;
  if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 005e53f4 with catch @ 005e5950 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 005e53d0 with catch @ 005e5954 */
  __stack_chk_fail();
}


