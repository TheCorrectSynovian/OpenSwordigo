/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e653c
 * Function: google::protobuf::io::CopyingOutputStreamAdaptor::AllocateBufferIfNeeded
 * Signature: undefined __thiscall AllocateBufferIfNeeded(CopyingOutputStreamAdaptor * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CopyingOutputStreamAdaptor::AllocateBufferIfNeeded() */

void __thiscall
google::protobuf::io::CopyingOutputStreamAdaptor::AllocateBufferIfNeeded
          (CopyingOutputStreamAdaptor *this)

{
  void *pvVar1;
  ulong uVar2;
  
  if (*(long *)(this + 0x20) == 0) {
    uVar2 = (ulong)*(int *)(this + 0x28);
    if ((long)uVar2 < 0) {
      uVar2 = 0xffffffffffffffff;
    }
                    /* catch() { ... } // from try @ 005e63f4 with catch @ 005e6560 */
    pvVar1 = operator_new__(uVar2);
    *(void **)(this + 0x20) = pvVar1;
  }
  return;
}


