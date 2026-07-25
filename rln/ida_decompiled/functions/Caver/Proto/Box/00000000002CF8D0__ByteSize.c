/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CF8D0
 * Mangled: _ZNK5Caver5Proto3Box8ByteSizeEv
 * Demangled: Caver::Proto::Box::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000001F7140  Caver::Proto::Box::ByteSize(void)
 *
 * Callees: 0
 *
 * Referenced strings: 14
 *   insn=0x00000000002CF8D0 string=0x00000000002CF8D4 "h"
 *   insn=0x00000000002CF8D4 string=0x00000000002CF8D8 "\t"
 *   insn=0x00000000002CF8D4 string=0x00000000002CF920 ""
 *   insn=0x00000000002CF8DC string=0x00000000002CF8E0 ")"
 *   insn=0x00000000002CF8E4 string=0x00000000002CF8E8 "*"
 *   insn=0x00000000002CF8E8 string=0x00000000002CF8EC ")"
 *   insn=0x00000000002CF8F0 string=0x00000000002CF8F4 "*"
 *   insn=0x00000000002CF8F4 string=0x00000000002CF8F8 ")"
 *   insn=0x00000000002CF8FC string=0x00000000002CF900 "*"
 *   insn=0x00000000002CF900 string=0x00000000002CF904 ")"
 *   insn=0x00000000002CF908 string=0x00000000002CF90C "*"
 *   insn=0x00000000002CF90C string=0x00000000002CF910 ")"
 *   insn=0x00000000002CF910 string=0x00000000002CF914 "*"
 *   insn=0x00000000002CF918 string=0x00000000002CF91C "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Box::ByteSize(Caver::Proto::Box *this)
{
  unsigned int v1; // w8
  int v2; // w9

  v1 = *((unsigned __int8 *)this + 36);
  if ( *((_BYTE *)this + 36) )
  {
    v2 = ((int)(v1 << 31) >> 31) & 5;
    if ( (v1 & 2) != 0 )
      v2 += 5;
    if ( (v1 & 4) != 0 )
      v2 += 5;
    if ( (v1 & 8) != 0 )
      v2 += 5;
    if ( (v1 & 0x10) != 0 )
      v2 += 5;
    if ( (v1 & 0x20) != 0 )
      v1 = v2 + 5;
    else
      v1 = v2;
  }
  *((_DWORD *)this + 2) = v1;
  return v1;
}

