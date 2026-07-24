/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005893dc
 * Function: Caver::SaveProtobufMessageToFile
 * Signature: undefined __cdecl SaveProtobufMessageToFile(MessageLite * param_1, string * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SaveProtobufMessageToFile(google::protobuf::MessageLite const&, std::string const&) */

uint Caver::SaveProtobufMessageToFile(MessageLite *param_1,string *param_2)

{
  uint uVar1;
  uchar *puVar2;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x48))();
  puVar2 = operator_new__((ulong)uVar1);
  google::protobuf::MessageLite::SerializeToArray(param_1,puVar2,uVar1);
                    /* try { // try from 0058942c to 00689433 has its CatchHandler @ 005899a0 */
  uVar1 = SaveByteBufferToFile(puVar2,uVar1,param_2);
                    /* try { // try from 00589434 to 00689447 has its CatchHandler @ 0058999c */
  operator_delete__(puVar2);
                    /* try { // try from 00589448 to 0068945b has its CatchHandler @ 005899c8 */
  return uVar1 & 1;
}


