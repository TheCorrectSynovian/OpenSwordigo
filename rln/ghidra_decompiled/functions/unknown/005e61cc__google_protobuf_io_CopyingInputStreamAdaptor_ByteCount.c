/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e61cc
 * Function: google::protobuf::io::CopyingInputStreamAdaptor::ByteCount
 * Signature: undefined __thiscall ByteCount(CopyingInputStreamAdaptor * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CopyingInputStreamAdaptor::ByteCount() const */

long __thiscall
google::protobuf::io::CopyingInputStreamAdaptor::ByteCount(CopyingInputStreamAdaptor *this)

{
                    /* try { // try from 005e61cc to 006e621f has its CatchHandler @ 005e611c */
  return *(long *)(this + 0x18) - (long)*(int *)(this + 0x30);
}


