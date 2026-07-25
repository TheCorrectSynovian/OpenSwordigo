/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D65CC
 * Mangled: _ZNK5Caver5Proto10GUIMargins8ByteSizeEv
 * Demangled: Caver::Proto::GUIMargins::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 9
 *   insn=0x00000000002D65D0 string=0x00000000002D65D4 "\t"
 *   insn=0x00000000002D65D0 string=0x00000000002D6604 ""
 *   insn=0x00000000002D65D8 string=0x00000000002D65DC ")"
 *   insn=0x00000000002D65E0 string=0x00000000002D65E4 "*"
 *   insn=0x00000000002D65E4 string=0x00000000002D65E8 ")"
 *   insn=0x00000000002D65EC string=0x00000000002D65F0 "*"
 *   insn=0x00000000002D65F0 string=0x00000000002D65F4 ")"
 *   insn=0x00000000002D65F4 string=0x00000000002D65F8 "*"
 *   insn=0x00000000002D65FC string=0x00000000002D6600 "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GUIMargins::ByteSize(Caver::Proto::GUIMargins *this)
{
  unsigned int v1; // w8
  int v2; // w9

  v1 = *((unsigned __int8 *)this + 28);
  if ( *((_BYTE *)this + 28) )
  {
    v2 = ((int)(v1 << 31) >> 31) & 5;
    if ( (v1 & 2) != 0 )
      v2 += 5;
    if ( (v1 & 4) != 0 )
      v2 += 5;
    if ( (v1 & 8) != 0 )
      v1 = v2 + 5;
    else
      v1 = v2;
  }
  *((_DWORD *)this + 2) = v1;
  return v1;
}

