/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E61E4
 * Mangled: _ZN6google8protobuf2io26CopyingOutputStreamAdaptorC2EPNS1_19CopyingOutputStreamEi
 * Demangled: google::protobuf::io::CopyingOutputStreamAdaptor::CopyingOutputStreamAdaptor(google::protobuf::io::CopyingOutputStream *,int)
 *
 * Callers: 1
 *   0x00000000004E61E0  google::protobuf::io::CopyingOutputStream::~CopyingOutputStream()
 *
 * Callees: 0
 *
 * Referenced strings: 6
 *   insn=0x00000000004E61E4 string=0x00000000004E61E8 ""
 *   insn=0x00000000004E61E8 string=0x00000000004E61EC "_"
 *   insn=0x00000000004E61F0 string=0x00000000004E61F4 "I"
 *   insn=0x00000000004E61F4 string=0x00000000004E61F8 "A"
 *   insn=0x00000000004E6200 string=0x00000000004E6204 ""
 *   insn=0x00000000004E6204 string=0x00000000004E6208 "\t|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::io::CopyingOutputStreamAdaptor::CopyingOutputStreamAdaptor(
        __int64 this,
        google::protobuf::io::CopyingOutputStream *a2,
        int a3)
{
  int v3; // w9

  if ( a3 <= 0 )
    v3 = 0x2000;
  else
    v3 = a3;
  *(_WORD *)(this + 16) = 0;
  *(_QWORD *)(this + 24) = 0;
  *(_QWORD *)(this + 32) = 0;
  *(_QWORD *)this = off_6D8520;
  *(_QWORD *)(this + 8) = a2;
  *(_DWORD *)(this + 40) = v3;
  *(_DWORD *)(this + 44) = 0;
  return this;
}

