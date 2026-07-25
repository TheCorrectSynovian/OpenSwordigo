/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E6700
 * Mangled: _ZN6google8protobuf2io26CopyingOutputStreamAdaptor10FreeBufferEv
 * Demangled: google::protobuf::io::CopyingOutputStreamAdaptor::FreeBuffer(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F4F60  operator delete[](void *)
 *
 * Referenced strings: 3
 *   insn=0x00000000004E670C string=0x00000000004E6710 "`"
 *   insn=0x00000000004E6714 string=0x00000000004E6718 "`"
 *   insn=0x00000000004E671C string=0x00000000001F4F60 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::io::CopyingOutputStreamAdaptor::FreeBuffer(
        google::protobuf::io::CopyingOutputStreamAdaptor *this)
{
  void *v2; // x0

  v2 = (void *)*((_QWORD *)this + 4);
  *((_DWORD *)this + 11) = 0;
  if ( v2 )
  {
    operator delete[](v2);
    *((_QWORD *)this + 4) = 0;
  }
}

