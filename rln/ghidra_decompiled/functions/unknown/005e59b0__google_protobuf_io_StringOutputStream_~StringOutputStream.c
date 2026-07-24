/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e59b0
 * Function: google::protobuf::io::StringOutputStream::~StringOutputStream
 * Signature: undefined __thiscall ~StringOutputStream(StringOutputStream * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::StringOutputStream::~StringOutputStream() */

void __thiscall
google::protobuf::io::StringOutputStream::~StringOutputStream(StringOutputStream *this)

{
                    /* catch() { ... } // from try @ 005e54b0 with catch @ 005e59b8 */
                    /* catch() { ... } // from try @ 005e5340 with catch @ 005e59bc */
  ZeroCopyOutputStream::~ZeroCopyOutputStream((ZeroCopyOutputStream *)this);
  operator_delete(this);
  return;
}


