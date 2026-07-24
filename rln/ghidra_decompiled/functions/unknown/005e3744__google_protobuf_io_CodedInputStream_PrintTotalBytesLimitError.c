/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e3744
 * Function: google::protobuf::io::CodedInputStream::PrintTotalBytesLimitError
 * Signature: undefined __thiscall PrintTotalBytesLimitError(CodedInputStream * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CodedInputStream::PrintTotalBytesLimitError() */

void __thiscall
google::protobuf::io::CodedInputStream::PrintTotalBytesLimitError(CodedInputStream *this)

{
  long lVar1;
  LogMessage *pLVar2;
  LogFinisher aLStack_50 [8];
  LogMessage aLStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 005e3774 to 006e379b has its CatchHandler @ 005e3c34 */
  internal::LogMessage::LogMessage
            (aLStack_48,2,
             "./../../../../Dependencies/protobuf/src/google/protobuf/io/coded_stream.cc",0x93);
  pLVar2 = (LogMessage *)
           internal::LogMessage::operator<<
                     (aLStack_48,
                      "A protocol message was rejected because it was too big (more than ");
  pLVar2 = (LogMessage *)internal::LogMessage::operator<<(pLVar2,*(int *)(this + 0x30));
                    /* try { // try from 005e379c to 006e37ff has its CatchHandler @ 005e3474 */
  pLVar2 = (LogMessage *)
           internal::LogMessage::operator<<
                     (pLVar2,
                      " bytes).  To increase the limit (or to disable these warnings), see CodedInputStream::SetTotalBytesLimit() in google/protobuf/io/coded_stream.h."
                     );
  internal::LogFinisher::operator=(aLStack_50,pLVar2);
  internal::LogMessage::~LogMessage(aLStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


