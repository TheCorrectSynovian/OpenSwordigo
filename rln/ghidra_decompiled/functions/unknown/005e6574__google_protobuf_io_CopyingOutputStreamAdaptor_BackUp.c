/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e6574
 * Function: google::protobuf::io::CopyingOutputStreamAdaptor::BackUp
 * Signature: undefined __thiscall BackUp(CopyingOutputStreamAdaptor * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CopyingOutputStreamAdaptor::BackUp(int) */

void __thiscall
google::protobuf::io::CopyingOutputStreamAdaptor::BackUp
          (CopyingOutputStreamAdaptor *this,int param_1)

{
  long lVar1;
  LogMessage *pLVar2;
  int iVar3;
  LogFinisher aLStack_b0 [8];
  LogMessage aLStack_a8 [32];
  LogFinisher aLStack_88 [8];
  LogMessage aLStack_80 [32];
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 < 0) {
                    /* catch() { ... } // from try @ 005e638c with catch @ 005e65b0 */
    internal::LogMessage::LogMessage(aLStack_58,3,&DAT_00699304,0x159);
                    /* catch() { ... } // from try @ 005e62b8 with catch @ 005e65c0
                       catch() { ... } // from try @ 005e635c with catch @ 005e65c0 */
    pLVar2 = (LogMessage *)
             internal::LogMessage::operator<<(aLStack_58,"CHECK failed: (count) >= (0): ");
    internal::LogFinisher::operator=(aLStack_60,pLVar2);
    internal::LogMessage::~LogMessage(aLStack_58);
  }
  iVar3 = *(int *)(this + 0x2c);
  if (iVar3 != *(int *)(this + 0x28)) {
    internal::LogMessage::LogMessage(aLStack_80,3,&DAT_00699304,0x15a);
                    /* try { // try from 005e660c to 006e6617 has its CatchHandler @ 005e611c */
    pLVar2 = (LogMessage *)
             internal::LogMessage::operator<<
                       (aLStack_80,"CHECK failed: (buffer_used_) == (buffer_size_): ");
                    /* catch() { ... } // from try @ 005e64d0 with catch @ 005e6614 */
                    /* try { // try from 005e6618 to 006e68df has its CatchHandler @ 005e6618
                       catch() { ... } // from try @ 005e6618 with catch @ 005e6618
                       catch() { ... } // from try @ 005e6940 with catch @ 005e6618
                       catch() { ... } // from try @ 005e6a04 with catch @ 005e6618 */
    pLVar2 = (LogMessage *)
             internal::LogMessage::operator<<(pLVar2," BackUp() can only be called after Next().");
    internal::LogFinisher::operator=(aLStack_88,pLVar2);
    internal::LogMessage::~LogMessage(aLStack_80);
    iVar3 = *(int *)(this + 0x2c);
  }
  if (iVar3 < param_1) {
    internal::LogMessage::LogMessage(aLStack_a8,3,&DAT_00699304,0x15c);
    pLVar2 = (LogMessage *)
             internal::LogMessage::operator<<
                       (aLStack_a8,"CHECK failed: (count) <= (buffer_used_): ");
    pLVar2 = (LogMessage *)
             internal::LogMessage::operator<<
                       (pLVar2,
                        " Can\'t back up over more bytes than were returned by the last call to Next()."
                       );
    internal::LogFinisher::operator=(aLStack_b0,pLVar2);
    internal::LogMessage::~LogMessage(aLStack_a8);
    iVar3 = *(int *)(this + 0x2c);
  }
  *(int *)(this + 0x2c) = iVar3 - param_1;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


