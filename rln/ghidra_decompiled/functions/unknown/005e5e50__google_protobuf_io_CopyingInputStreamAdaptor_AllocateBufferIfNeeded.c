/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e5e50
 * Function: google::protobuf::io::CopyingInputStreamAdaptor::AllocateBufferIfNeeded
 * Signature: undefined __thiscall AllocateBufferIfNeeded(CopyingInputStreamAdaptor * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CopyingInputStreamAdaptor::AllocateBufferIfNeeded() */

void __thiscall
google::protobuf::io::CopyingInputStreamAdaptor::AllocateBufferIfNeeded
          (CopyingInputStreamAdaptor *this)

{
  void *pvVar1;
  ulong uVar2;
  
  if (*(long *)(this + 0x20) == 0) {
    uVar2 = (ulong)*(int *)(this + 0x28);
    if ((long)uVar2 < 0) {
      uVar2 = 0xffffffffffffffff;
    }
    pvVar1 = operator_new__(uVar2);
    *(void **)(this + 0x20) = pvVar1;
  }
  return;
}


