/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e21b4
 * Function: google::protobuf::MessageLite::SerializeToZeroCopyStream
 * Signature: undefined __thiscall SerializeToZeroCopyStream(MessageLite * this, ZeroCopyOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::MessageLite::SerializeToZeroCopyStream(google::protobuf::io::ZeroCopyOutputStream*)
   const */

uint __thiscall
google::protobuf::MessageLite::SerializeToZeroCopyStream
          (MessageLite *this,ZeroCopyOutputStream *param_1)

{
  long lVar1;
  uint uVar2;
  CodedOutputStream aCStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 005e21c8 to 006e21df has its CatchHandler @ 005e24d8 */
  local_28 = *(long *)(lVar1 + 0x28);
  io::CodedOutputStream::CodedOutputStream(aCStack_48,param_1);
  uVar2 = SerializePartialToCodedStream(this,aCStack_48);
  io::CodedOutputStream::~CodedOutputStream(aCStack_48);
                    /* try { // try from 005e2200 to 006e220b has its CatchHandler @ 005e239c */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


