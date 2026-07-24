/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e5f3c
 * Function: google::protobuf::io::CopyingInputStreamAdaptor::BackUp
 * Signature: undefined __thiscall BackUp(CopyingInputStreamAdaptor * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CopyingInputStreamAdaptor::BackUp(int) */

void __thiscall
google::protobuf::io::CopyingInputStreamAdaptor::BackUp(CopyingInputStreamAdaptor *this,int param_1)

{
  long lVar1;
  LogMessage *pLVar2;
  LogFinisher aLStack_b0 [8];
  LogMessage aLStack_a8 [32];
  LogFinisher aLStack_88 [8];
  LogMessage aLStack_80 [32];
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(int *)(this + 0x30) != 0) || (*(long *)(this + 0x20) == 0)) {
    internal::LogMessage::LogMessage(aLStack_58,3,&DAT_00699304,0x100);
    pLVar2 = (LogMessage *)
             internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: backup_bytes_ == 0 && buffer_.get() != NULL: ");
    pLVar2 = (LogMessage *)
             internal::LogMessage::operator<<(pLVar2," BackUp() can only be called after Next().");
    internal::LogFinisher::operator=(aLStack_60,pLVar2);
    internal::LogMessage::~LogMessage(aLStack_58);
  }
  if (*(int *)(this + 0x2c) < param_1) {
    internal::LogMessage::LogMessage(aLStack_80,3,&DAT_00699304,0x102);
    pLVar2 = (LogMessage *)
             internal::LogMessage::operator<<
                       (aLStack_80,"CHECK failed: (count) <= (buffer_used_): ");
    pLVar2 = (LogMessage *)
             internal::LogMessage::operator<<
                       (pLVar2,
                        " Can\'t back up over more bytes than were returned by the last call to Next()."
                       );
    internal::LogFinisher::operator=(aLStack_88,pLVar2);
    internal::LogMessage::~LogMessage(aLStack_80);
  }
  if (param_1 < 0) {
    internal::LogMessage::LogMessage(aLStack_a8,3,&DAT_00699304,0x105);
    pLVar2 = (LogMessage *)
             internal::LogMessage::operator<<(aLStack_a8,"CHECK failed: (count) >= (0): ");
    pLVar2 = (LogMessage *)
             internal::LogMessage::operator<<(pLVar2," Parameter to BackUp() can\'t be negative.");
                    /* try { // try from 005e6050 to 006e6077 has its CatchHandler @ 005e60f8 */
    internal::LogFinisher::operator=(aLStack_b0,pLVar2);
    internal::LogMessage::~LogMessage(aLStack_a8);
  }
  *(int *)(this + 0x30) = param_1;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


