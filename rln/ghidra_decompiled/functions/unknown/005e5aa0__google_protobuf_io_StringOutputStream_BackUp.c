/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e5aa0
 * Function: google::protobuf::io::StringOutputStream::BackUp
 * Signature: undefined __thiscall BackUp(StringOutputStream * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::StringOutputStream::BackUp(int) */

void __thiscall
google::protobuf::io::StringOutputStream::BackUp(StringOutputStream *this,int param_1)

{
  long lVar1;
  LogMessage *pLVar2;
  long *plVar3;
  ulong uVar4;
  LogFinisher aLStack_88 [8];
  LogMessage aLStack_80 [32];
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
                    /* catch() { ... } // from try @ 005e56b8 with catch @ 005e5ab4 */
  lVar1 = tpidr_el0;
                    /* catch() { ... } // from try @ 005e5558 with catch @ 005e5ab8 */
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 005e5550 with catch @ 005e5abc */
  if (param_1 < 0) {
                    /* catch() { ... } // from try @ 005e5528 with catch @ 005e5acc */
                    /* catch() { ... } // from try @ 005e5520 with catch @ 005e5ad0 */
                    /* catch() { ... } // from try @ 005e54f0 with catch @ 005e5ad4 */
    internal::LogMessage::LogMessage(aLStack_58,3,&DAT_00699304,0xb0);
    pLVar2 = (LogMessage *)
             internal::LogMessage::operator<<(aLStack_58,"CHECK failed: (count) >= (0): ");
    internal::LogFinisher::operator=(aLStack_60,pLVar2);
    internal::LogMessage::~LogMessage(aLStack_58);
  }
  plVar3 = *(long **)(this + 8);
  uVar4 = *(ulong *)(*plVar3 + -0x18);
  if (uVar4 < (ulong)(long)param_1) {
                    /* catch() { ... } // from try @ 005e54dc with catch @ 005e5b2c */
                    /* catch() { ... } // from try @ 005e5484 with catch @ 005e5b30 */
    internal::LogMessage::LogMessage(aLStack_80,3,&DAT_00699304,0xb1);
    pLVar2 = (LogMessage *)
             internal::LogMessage::operator<<
                       (aLStack_80,"CHECK failed: (count) <= (target_->size()): ");
    internal::LogFinisher::operator=(aLStack_88,pLVar2);
    internal::LogMessage::~LogMessage(aLStack_80);
    plVar3 = *(long **)(this + 8);
    uVar4 = *(ulong *)(*plVar3 + -0x18);
  }
  FUN_00669650(plVar3,uVar4 - (long)param_1,0);
                    /* catch() { ... } // from try @ 005e5434 with catch @ 005e5b80 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 005e52d0 with catch @ 005e5b90 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


