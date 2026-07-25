/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D0040
 * Mangled: _ZNK5Caver5Proto6Circle8ByteSizeEv
 * Demangled: Caver::Proto::Circle::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000001F3B40  Caver::Proto::Circle::ByteSize(void)
 *
 * Callees: 0
 *
 * Referenced strings: 19
 *   insn=0x00000000002D0040 string=0x00000000002D0044 "("
 *   insn=0x00000000002D0044 string=0x00000000002D0048 "h"
 *   insn=0x00000000002D0044 string=0x00000000002D00A8 ""
 *   insn=0x00000000002D0050 string=0x00000000002D009C "*"
 *   insn=0x00000000002D0054 string=0x00000000002D0058 "@"
 *   insn=0x00000000002D0058 string=0x00000000002D005C ")YC"
 *   insn=0x00000000002D0060 string=0x00000000002D0064 ")"
 *   insn=0x00000000002D0064 string=0x00000000002D0068 "("
 *   insn=0x00000000002D0068 string=0x00000000002D006C "\t@"
 *   insn=0x00000000002D006C string=0x00000000002D0070 "\tQ@9"
 *   insn=0x00000000002D0074 string=0x00000000002D0078 "*"
 *   insn=0x00000000002D0074 string=0x00000000002D0090 "\t\t"
 *   insn=0x00000000002D007C string=0x00000000002D0080 "J"
 *   insn=0x00000000002D0080 string=0x00000000002D0084 "K"
 *   insn=0x00000000002D0084 string=0x00000000002D0088 "?"
 *   insn=0x00000000002D0088 string=0x00000000002D008C "I"
 *   insn=0x00000000002D0090 string=0x00000000002D0094 ""
 *   insn=0x00000000002D0094 string=0x00000000002D0098 ")\t"
 *   insn=0x00000000002D00A0 string=0x00000000002D00A4 "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Circle::ByteSize(Caver::Proto::Circle *this)
{
  unsigned int v1; // w8
  int v2; // w9
  Caver::Proto::Circle *v3; // x8
  __int64 v4; // x8
  int v5; // w9

  v1 = *((unsigned __int8 *)this + 28);
  if ( *((_BYTE *)this + 28) )
  {
    if ( (v1 & 1) != 0 )
    {
      if ( *((_QWORD *)this + 2) )
        v3 = this;
      else
        v3 = (Caver::Proto::Circle *)Caver::Proto::Circle::default_instance_;
      v4 = *((_QWORD *)v3 + 2);
      v5 = *(unsigned __int8 *)(v4 + 20);
      if ( *(_BYTE *)(v4 + 20) )
      {
        if ( (v5 & 2) != 0 )
          v5 = ((v5 << 31 >> 31) & 5) + 5;
        else
          v5 = (v5 << 31 >> 31) & 5;
      }
      *(_DWORD *)(v4 + 8) = v5;
      v1 = *((_DWORD *)this + 7);
      v2 = v5 + 2;
    }
    else
    {
      v2 = 0;
    }
    if ( (v1 & 2) != 0 )
      v1 = v2 + 5;
    else
      v1 = v2;
  }
  *((_DWORD *)this + 2) = v1;
  return v1;
}

