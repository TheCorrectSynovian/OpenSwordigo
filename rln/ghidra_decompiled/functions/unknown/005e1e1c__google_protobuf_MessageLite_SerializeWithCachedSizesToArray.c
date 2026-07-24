/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e1e1c
 * Function: google::protobuf::MessageLite::SerializeWithCachedSizesToArray
 * Signature: undefined __thiscall SerializeWithCachedSizesToArray(MessageLite * this, uchar * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::MessageLite::SerializeWithCachedSizesToArray(unsigned char*) const */

uchar * __thiscall
google::protobuf::MessageLite::SerializeWithCachedSizesToArray(MessageLite *this,uchar *param_1)

{
  long lVar1;
  int iVar2;
  LogMessage *pLVar3;
  LogFinisher aLStack_a0 [8];
  LogMessage aLStack_98 [32];
  ArrayOutputStream aAStack_78 [32];
  CodedOutputStream aCStack_58 [24];
  char local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 005e1d40 with catch @ 005e1e28 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 005e1e4c to 006e1e53 has its CatchHandler @ 005e1e58 */
  iVar2 = (**(code **)(*(long *)this + 0x60))();
                    /* catch() { ... } // from try @ 005e1e4c with catch @ 005e1e58 */
                    /* catch() { ... } // from try @ 005e1838 with catch @ 005e1e5c
                       catch() { ... } // from try @ 005e18cc with catch @ 005e1e5c */
                    /* catch() { ... } // from try @ 005e1774 with catch @ 005e1e60
                       catch() { ... } // from try @ 005e180c with catch @ 005e1e60 */
  io::ArrayOutputStream::ArrayOutputStream(aAStack_78,param_1,iVar2,-1);
  io::CodedOutputStream::CodedOutputStream(aCStack_58,(ZeroCopyOutputStream *)aAStack_78);
                    /* try { // try from 005e1e84 to 006e1eab has its CatchHandler @ 005e1eb4 */
  (**(code **)(*(long *)this + 0x50))(this,aCStack_58);
  if (local_40 != '\0') {
    internal::LogMessage::LogMessage(aLStack_98,3,&DAT_00698d03,0xe0);
                    /* try { // try from 005e1eac to 006e1ebf has its CatchHandler @ 005e1704 */
                    /* catch() { ... } // from try @ 005e1c7c with catch @ 005e1eb4
                       catch() { ... } // from try @ 005e1d70 with catch @ 005e1eb4
                       catch() { ... } // from try @ 005e1e84 with catch @ 005e1eb4 */
    pLVar3 = (LogMessage *)
             internal::LogMessage::operator<<(aLStack_98,"CHECK failed: !coded_out.HadError(): ");
                    /* try { // try from 005e1ec0 to 006e1efb has its CatchHandler @ 005e1ec0
                       catch() { ... } // from try @ 005e1ec0 with catch @ 005e1ec0
                       catch() { ... } // from try @ 005e1f00 with catch @ 005e1ec0
                       catch() { ... } // from try @ 005e22f0 with catch @ 005e1ec0
                       catch() { ... } // from try @ 005e2378 with catch @ 005e1ec0
                       catch() { ... } // from try @ 005e24b0 with catch @ 005e1ec0
                       catch() { ... } // from try @ 005e2668 with catch @ 005e1ec0 */
    internal::LogFinisher::operator=(aLStack_a0,pLVar3);
    internal::LogMessage::~LogMessage(aLStack_98);
  }
  io::CodedOutputStream::~CodedOutputStream(aCStack_58);
  io::ArrayOutputStream::~ArrayOutputStream(aAStack_78);
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 005e1efc to 006e1eff has its CatchHandler @ 005e24c4 */
                    /* try { // try from 005e1f00 to 006e1f2f has its CatchHandler @ 005e1ec0 */
    return param_1 + iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


