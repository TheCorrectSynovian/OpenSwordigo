/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200120
 * Mangled: ._ZN6google8protobuf2io25CopyingInputStreamAdaptor10FreeBufferEv
 * Demangled: google::protobuf::io::CopyingInputStreamAdaptor::FreeBuffer(void)
 *
 * Callers: 1
 *   0x00000000004E5D6C  google::protobuf::io::CopyingInputStreamAdaptor::Next(void const**,int *)
 *
 * Callees: 1
 *   0x00000000004E5E88  google::protobuf::io::CopyingInputStreamAdaptor::FreeBuffer(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200128 string=0x000000000020012C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall google::protobuf::io::CopyingInputStreamAdaptor::FreeBuffer(
        google::protobuf::io::CopyingInputStreamAdaptor *this)
{
  return _ZN6google8protobuf2io25CopyingInputStreamAdaptor10FreeBufferEv(this);
}

