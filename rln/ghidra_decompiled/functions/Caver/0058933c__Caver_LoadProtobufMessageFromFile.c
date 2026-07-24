/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058933c
 * Function: Caver::LoadProtobufMessageFromFile
 * Signature: undefined __cdecl LoadProtobufMessageFromFile(MessageLite * param_1, string * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::LoadProtobufMessageFromFile(google::protobuf::MessageLite*, std::string const&) */

uint Caver::LoadProtobufMessageFromFile(MessageLite *param_1,string *param_2)

{
  long lVar1;
  uint uVar2;
  void *pvVar3;
  uint local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0058935c to 006893ab has its CatchHandler @ 0058935c
                       catch() { ... } // from try @ 0058935c with catch @ 0058935c
                       catch() { ... } // from try @ 00589788 with catch @ 0058935c
                       catch() { ... } // from try @ 00589b10 with catch @ 0058935c */
  pvVar3 = (void *)NewByteBufferFromFile(param_2,&local_3c);
  if (pvVar3 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = google::protobuf::MessageLite::ParseFromArray(param_1,pvVar3,local_3c);
    operator_delete__(pvVar3);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 005893ac to 006893b7 has its CatchHandler @ 00589a74 */
                    /* try { // try from 005893b8 to 006893bf has its CatchHandler @ 005899b0 */
                    /* try { // try from 005893c0 to 00689427 has its CatchHandler @ 00589a74 */
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


