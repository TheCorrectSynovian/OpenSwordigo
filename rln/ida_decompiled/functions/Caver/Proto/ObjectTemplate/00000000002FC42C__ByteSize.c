/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FC42C
 * Mangled: _ZNK5Caver5Proto14ObjectTemplate8ByteSizeEv
 * Demangled: Caver::Proto::ObjectTemplate::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *   0x00000000001FF090  Caver::Proto::SceneObject::ByteSize(void)
 *
 * Referenced strings: 15
 *   insn=0x00000000002FC438 string=0x00000000002FC43C "hr@9"
 *   insn=0x00000000002FC444 string=0x00000000002FC458 "I"
 *   insn=0x00000000002FC44C string=0x00000000002FC4A0 "*"
 *   insn=0x00000000002FC454 string=0x00000000002FC4AC "`\n"
 *   insn=0x00000000002FC458 string=0x00000000002FC45C "h\n@"
 *   insn=0x00000000002FC45C string=0x00000000002FC460 ")ME"
 *   insn=0x00000000002FC464 string=0x00000000002FC468 ")"
 *   insn=0x00000000002FC468 string=0x00000000002FC46C "("
 *   insn=0x00000000002FC470 string=0x00000000002FC474 ""
 *   insn=0x00000000002FC47C string=0x00000000002FC480 "b"
 *   insn=0x00000000002FC488 string=0x00000000002FC494 "h"
 *   insn=0x00000000002FC48C string=0x00000000002FC490 "P"
 *   insn=0x00000000002FC490 string=0x00000000001F61D0 "0'"
 *   insn=0x00000000002FC498 string=0x00000000002FC49C ")"
 *   insn=0x00000000002FC4A4 string=0x00000000002FC4A8 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ObjectTemplate::ByteSize(Caver::Proto::ObjectTemplate *this)
{
  int v2; // w8
  unsigned int v3; // w9
  __int64 result; // x0
  Caver::Proto::ObjectTemplate *v5; // x8
  unsigned int v6; // w1
  unsigned int v7; // w20
  int v8; // w0

  LOBYTE(v2) = *((_BYTE *)this + 28);
  if ( (_BYTE)v2 )
  {
    if ( (*((_BYTE *)this + 28) & 1) != 0 )
    {
      if ( *((_QWORD *)this + 2) )
        v5 = this;
      else
        v5 = (Caver::Proto::ObjectTemplate *)Caver::Proto::ObjectTemplate::default_instance_;
      v7 = Caver::Proto::SceneObject::ByteSize(*((Caver::Proto::SceneObject **)v5 + 2));
      if ( v7 >= 0x80 )
        v8 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
               (google::protobuf::io::CodedOutputStream *)v7,
               v6);
      else
        v8 = 1;
      v2 = *((_DWORD *)this + 7);
      v3 = v7 + v8 + 1;
    }
    else
    {
      v3 = 0;
    }
    if ( (v2 & 2) != 0 )
      result = v3 + 5;
    else
      result = v3;
  }
  else
  {
    result = 0;
  }
  *((_DWORD *)this + 2) = result;
  return result;
}

