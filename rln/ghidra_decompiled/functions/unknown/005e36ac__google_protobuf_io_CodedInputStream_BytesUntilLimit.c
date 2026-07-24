/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e36ac
 * Function: google::protobuf::io::CodedInputStream::BytesUntilLimit
 * Signature: undefined __thiscall BytesUntilLimit(CodedInputStream * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CodedInputStream::BytesUntilLimit() */

int __thiscall google::protobuf::io::CodedInputStream::BytesUntilLimit(CodedInputStream *this)

{
  if (*(int *)(this + 0x28) == 0x7fffffff) {
    return -1;
  }
  return (*(int *)(this + 0x28) - *(int *)(this + 0x18)) + *(int *)(this + 0x2c) +
         (*(int *)(this + 0x10) - *(int *)(this + 8));
}


