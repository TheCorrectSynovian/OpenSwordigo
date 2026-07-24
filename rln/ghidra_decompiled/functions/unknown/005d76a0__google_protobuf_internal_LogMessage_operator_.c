/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d76a0
 * Function: google::protobuf::internal::LogMessage::operator<<
 * Signature: undefined __thiscall operator<<(LogMessage * this, ulong param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::LogMessage::TEMPNAMEPLACEHOLDERVALUE(unsigned long) */

LogMessage * __thiscall
google::protobuf::internal::LogMessage::operator<<(LogMessage *this,ulong param_1)

{
  long lVar1;
  size_t sVar2;
  char acStack_b8 [127];
  undefined1 local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 005d75b8 with catch @ 005d76bc */
  snprintf(acStack_b8,0x80,"%lu",param_1);
  local_39 = 0;
  sVar2 = strlen(acStack_b8);
  FUN_006677d4(this + 0x18,acStack_b8,sVar2);
                    /* try { // try from 005d7708 to 006d7713 has its CatchHandler @ 005d7578 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 005d7690 with catch @ 005d7710 */
                    /* try { // try from 005d7714 to 006d774b has its CatchHandler @ 005d7714
                       catch() { ... } // from try @ 005d7714 with catch @ 005d7714
                       catch() { ... } // from try @ 005d7750 with catch @ 005d7714
                       catch() { ... } // from try @ 005d7804 with catch @ 005d7714
                       catch() { ... } // from try @ 005d78ec with catch @ 005d7714 */
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


