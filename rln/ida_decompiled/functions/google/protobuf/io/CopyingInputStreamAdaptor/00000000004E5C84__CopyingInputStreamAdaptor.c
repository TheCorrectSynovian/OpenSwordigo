/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E5C84
 * Mangled: _ZN6google8protobuf2io25CopyingInputStreamAdaptorC2EPNS1_18CopyingInputStreamEi
 * Demangled: google::protobuf::io::CopyingInputStreamAdaptor::CopyingInputStreamAdaptor(google::protobuf::io::CopyingInputStream *,int)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 6
 *   insn=0x00000000004E5C84 string=0x00000000004E5C88 ")AF"
 *   insn=0x00000000004E5C88 string=0x00000000004E5C8C "_"
 *   insn=0x00000000004E5C90 string=0x00000000004E5C94 "H"
 *   insn=0x00000000004E5C94 string=0x00000000004E5C98 ")A"
 *   insn=0x00000000004E5CA4 string=0x00000000004E5CA8 "\t"
 *   insn=0x00000000004E5CA8 string=0x00000000004E5CAC "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::io::CopyingInputStreamAdaptor::CopyingInputStreamAdaptor(
        __int64 this,
        google::protobuf::io::CopyingInputStream *a2,
        int a3)
{
  int v3; // w8

  if ( a3 <= 0 )
    v3 = 0x2000;
  else
    v3 = a3;
  *(_WORD *)(this + 16) = 0;
  *(_QWORD *)(this + 24) = 0;
  *(_QWORD *)(this + 32) = 0;
  *(_DWORD *)(this + 44) = 0;
  *(_DWORD *)(this + 48) = 0;
  *(_QWORD *)this = off_6D84E0;
  *(_QWORD *)(this + 8) = a2;
  *(_DWORD *)(this + 40) = v3;
  return this;
}

