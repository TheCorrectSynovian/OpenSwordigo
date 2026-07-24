/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e577c
 * Function: google::protobuf::io::ArrayOutputStream::~ArrayOutputStream
 * Signature: undefined __thiscall ~ArrayOutputStream(ArrayOutputStream * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::ArrayOutputStream::~ArrayOutputStream() */

void __thiscall google::protobuf::io::ArrayOutputStream::~ArrayOutputStream(ArrayOutputStream *this)

{
                    /* try { // try from 005e5780 to 006e5783 has its CatchHandler @ 005e5d30 */
                    /* try { // try from 005e5784 to 006e598b has its CatchHandler @ 005e4fb8 */
  ZeroCopyOutputStream::~ZeroCopyOutputStream((ZeroCopyOutputStream *)this);
  operator_delete(this);
  return;
}


