/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e4784
 * Function: google::protobuf::io::CodedOutputStream::~CodedOutputStream
 * Signature: undefined __thiscall ~CodedOutputStream(CodedOutputStream * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CodedOutputStream::~CodedOutputStream() */

void __thiscall google::protobuf::io::CodedOutputStream::~CodedOutputStream(CodedOutputStream *this)

{
                    /* try { // try from 005e4784 to 006e4787 has its CatchHandler @ 005e48f4 */
  if (0 < *(int *)(this + 0x10)) {
                    /* WARNING: Could not recover jumptable at 0x005e479c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)this + 0x18))();
    return;
  }
  return;
}


