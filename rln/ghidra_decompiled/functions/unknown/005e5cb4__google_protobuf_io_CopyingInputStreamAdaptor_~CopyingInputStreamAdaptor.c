/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e5cb4
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
                    /* catch() { ... } // from try @ 005e5128 with catch @ 005e5cbc */
  *(undefined **)this = PTR_vtable_007e6c80 + 0x10;
  if ((this[0x10] != (CopyingInputStreamAdaptor)0x0) && (*(long **)(this + 8) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  if (*(void **)(this + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x20));
  }
  ZeroCopyInputStream::~ZeroCopyInputStream((ZeroCopyInputStream *)this);
  return;
}


