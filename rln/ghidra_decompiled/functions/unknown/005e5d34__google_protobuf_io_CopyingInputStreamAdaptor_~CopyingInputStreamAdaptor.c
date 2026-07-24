/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e5d34
 * Function: google::protobuf::io::CopyingInputStreamAdaptor::~CopyingInputStreamAdaptor
 * Signature: undefined __thiscall ~CopyingInputStreamAdaptor(CopyingInputStreamAdaptor * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CopyingInputStreamAdaptor::~CopyingInputStreamAdaptor() */

void __thiscall
google::protobuf::io::CopyingInputStreamAdaptor::~CopyingInputStreamAdaptor
          (CopyingInputStreamAdaptor *this)

{
                    /* catch() { ... } // from try @ 005e5580 with catch @ 005e5d34
                       catch() { ... } // from try @ 005e5610 with catch @ 005e5d34 */
  ~CopyingInputStreamAdaptor(this);
  operator_delete(this);
  return;
}


