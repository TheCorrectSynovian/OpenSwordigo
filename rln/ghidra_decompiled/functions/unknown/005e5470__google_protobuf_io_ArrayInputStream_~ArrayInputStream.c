/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e5470
 * Function: google::protobuf::io::ArrayInputStream::~ArrayInputStream
 * Signature: undefined __thiscall ~ArrayInputStream(ArrayInputStream * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::ArrayInputStream::~ArrayInputStream() */

void __thiscall google::protobuf::io::ArrayInputStream::~ArrayInputStream(ArrayInputStream *this)

{
  ZeroCopyInputStream::~ZeroCopyInputStream((ZeroCopyInputStream *)this);
                    /* try { // try from 005e5484 to 006e548f has its CatchHandler @ 005e5b30 */
  operator_delete(this);
  return;
}


