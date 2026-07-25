/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D1114
 * Mangled: _ZNK5Caver5Proto10FloatColor8ByteSizeEv
 * Demangled: Caver::Proto::FloatColor::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000001F9DC0  Caver::Proto::FloatColor::ByteSize(void)
 *
 * Callees: 0
 *
 * Referenced strings: 9
 *   insn=0x00000000002D1118 string=0x00000000002D111C "\t"
 *   insn=0x00000000002D1118 string=0x00000000002D114C ""
 *   insn=0x00000000002D1120 string=0x00000000002D1124 ")"
 *   insn=0x00000000002D1128 string=0x00000000002D112C "*"
 *   insn=0x00000000002D112C string=0x00000000002D1130 ")"
 *   insn=0x00000000002D1134 string=0x00000000002D1138 "*"
 *   insn=0x00000000002D1138 string=0x00000000002D113C ")"
 *   insn=0x00000000002D113C string=0x00000000002D1140 "*"
 *   insn=0x00000000002D1144 string=0x00000000002D1148 "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::FloatColor::ByteSize(Caver::Proto::FloatColor *this)
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

