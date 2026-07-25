/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032B98C
 * Mangled: _ZNK5Caver5Proto14SwingComponent8ByteSizeEv
 * Demangled: Caver::Proto::SwingComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 15
 *   insn=0x000000000032B998 string=0x000000000032B99C "hr@9"
 *   insn=0x000000000032B9A4 string=0x000000000032B9B8 "`"
 *   insn=0x000000000032B9AC string=0x000000000032B9E4 "*\t"
 *   insn=0x000000000032B9B4 string=0x000000000032BA14 "`\n"
 *   insn=0x000000000032B9BC string=0x000000000032B9D0 "i"
 *   insn=0x000000000032B9D8 string=0x000000000032B9DC "h"
 *   insn=0x000000000032B9D8 string=0x00000000001F61D0 "0'"
 *   insn=0x000000000032B9DC string=0x000000000032B9E0 "\t"
 *   insn=0x000000000032B9E8 string=0x000000000032B9EC ")"
 *   insn=0x000000000032B9F0 string=0x000000000032B9F4 "*\t"
 *   insn=0x000000000032B9F4 string=0x000000000032B9F8 ")"
 *   insn=0x000000000032B9FC string=0x000000000032BA00 "*"
 *   insn=0x000000000032BA00 string=0x000000000032BA04 ")"
 *   insn=0x000000000032BA04 string=0x000000000032BA08 "*"
 *   insn=0x000000000032BA0C string=0x000000000032BA10 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SwingComponent::ByteSize(Caver::Proto::SwingComponent *this, unsigned int a2)
{
  int v3; // w8
  unsigned int v4; // w9
  __int64 result; // x0
  google::protobuf::io::CodedOutputStream *v6; // x0
  int v7; // w0

  LOBYTE(v3) = *((_BYTE *)this + 28);
  if ( (_BYTE)v3 )
  {
    if ( (*((_BYTE *)this + 28) & 1) != 0 )
    {
      v6 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 3);
      if ( ((unsigned int)v6 & 0x80000000) != 0 )
      {
        v4 = 11;
      }
      else if ( (unsigned int)v6 >= 0x80 )
      {
        v7 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v6, a2);
        v3 = *((_DWORD *)this + 7);
        v4 = v7 + 1;
      }
      else
      {
        v4 = 2;
      }
    }
    else
    {
      v4 = 0;
    }
    if ( (v3 & 2) != 0 )
      v4 += 2;
    if ( (v3 & 4) != 0 )
      v4 += 2;
    if ( (v3 & 8) != 0 )
      v4 += 5;
    if ( (v3 & 0x10) != 0 )
      result = v4 + 5;
    else
      result = v4;
  }
  else
  {
    result = 0;
  }
  *((_DWORD *)this + 2) = result;
  return result;
}

