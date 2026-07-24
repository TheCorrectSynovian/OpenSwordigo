/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d772c
 * Function: google::protobuf::internal::LogMessage::operator<<
 * Signature: undefined __thiscall operator<<(LogMessage * this, double param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::LogMessage::TEMPNAMEPLACEHOLDERVALUE(double) */

LogMessage * __thiscall
google::protobuf::internal::LogMessage::operator<<(LogMessage *this,double param_1)

{
  long lVar1;
  size_t sVar2;
  char acStack_b8 [127];
  undefined1 local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 005d774c to 006d774f has its CatchHandler @ 005d7834 */
                    /* try { // try from 005d7750 to 006d77a3 has its CatchHandler @ 005d7714 */
  snprintf(acStack_b8,0x80,"%g");
  local_39 = 0;
  sVar2 = strlen(acStack_b8);
  FUN_006677d4(this + 0x18,acStack_b8,sVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 005d77a4 to 006d77af has its CatchHandler @ 005d78a0 */
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


