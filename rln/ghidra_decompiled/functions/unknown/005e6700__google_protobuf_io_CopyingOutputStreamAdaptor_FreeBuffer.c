/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e6700
 * Function: google::protobuf::io::CopyingOutputStreamAdaptor::FreeBuffer
 * Signature: undefined __thiscall FreeBuffer(CopyingOutputStreamAdaptor * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CopyingOutputStreamAdaptor::FreeBuffer() */

void __thiscall
google::protobuf::io::CopyingOutputStreamAdaptor::FreeBuffer(CopyingOutputStreamAdaptor *this)

{
  *(undefined4 *)(this + 0x2c) = 0;
  if (*(void **)(this + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x20));
    *(undefined8 *)(this + 0x20) = 0;
  }
  return;
}


