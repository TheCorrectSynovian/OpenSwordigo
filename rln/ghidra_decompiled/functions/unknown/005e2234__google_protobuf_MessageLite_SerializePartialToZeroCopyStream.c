/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e2234
 * Function: google::protobuf::MessageLite::SerializePartialToZeroCopyStream
 * Signature: undefined __thiscall SerializePartialToZeroCopyStream(MessageLite * this, ZeroCopyOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::MessageLite::SerializePartialToZeroCopyStream(google::protobuf::io::ZeroCopyOutputStream*)
   const */

uint __thiscall
google::protobuf::MessageLite::SerializePartialToZeroCopyStream
          (MessageLite *this,ZeroCopyOutputStream *param_1)

{
  long lVar1;
  uint uVar2;
  CodedOutputStream aCStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 005e2254 to 006e225f has its CatchHandler @ 005e2394 */
  io::CodedOutputStream::CodedOutputStream(aCStack_48,param_1);
  uVar2 = SerializePartialToCodedStream(this,aCStack_48);
  io::CodedOutputStream::~CodedOutputStream(aCStack_48);
                    /* try { // try from 005e227c to 006e22a3 has its CatchHandler @ 005e24b8 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


