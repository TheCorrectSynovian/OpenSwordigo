/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e5e88
 * Function: google::protobuf::io::CopyingInputStreamAdaptor::FreeBuffer
 * Signature: undefined __thiscall FreeBuffer(CopyingInputStreamAdaptor * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CopyingInputStreamAdaptor::FreeBuffer() */

void __thiscall
google::protobuf::io::CopyingInputStreamAdaptor::FreeBuffer(CopyingInputStreamAdaptor *this)

{
  long lVar1;
  LogMessage *pLVar2;
  LogFinisher aLStack_50 [8];
  LogMessage aLStack_48 [32];
  long local_28;
  
                    /* catch() { ... } // from try @ 005e502c with catch @ 005e5e88
                       catch() { ... } // from try @ 005e50c0 with catch @ 005e5e88 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(int *)(this + 0x30) != 0) {
    internal::LogMessage::LogMessage(aLStack_48,3,&DAT_00699304,0x12d);
    pLVar2 = (LogMessage *)
             internal::LogMessage::operator<<(aLStack_48,"CHECK failed: (backup_bytes_) == (0): ");
    internal::LogFinisher::operator=(aLStack_50,pLVar2);
    internal::LogMessage::~LogMessage(aLStack_48);
  }
                    /* catch() { ... } // from try @ 005e517c with catch @ 005e5ef0
                       catch() { ... } // from try @ 005e5190 with catch @ 005e5ef0 */
  *(undefined4 *)(this + 0x2c) = 0;
  if (*(void **)(this + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x20));
    *(undefined8 *)(this + 0x20) = 0;
  }
                    /* catch() { ... } // from try @ 005e53fc with catch @ 005e5f00
                       catch() { ... } // from try @ 005e545c with catch @ 005e5f00
                       catch() { ... } // from try @ 005e5518 with catch @ 005e5f00 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


