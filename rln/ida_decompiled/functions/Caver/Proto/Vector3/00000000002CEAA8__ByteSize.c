/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CEAA8
 * Mangled: _ZNK5Caver5Proto7Vector38ByteSizeEv
 * Demangled: Caver::Proto::Vector3::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000001FE930  Caver::Proto::Vector3::ByteSize(void)
 *
 * Callees: 0
 *
 * Referenced strings: 8
 *   insn=0x00000000002CEAA8 string=0x00000000002CEAAC "H"
 *   insn=0x00000000002CEAAC string=0x00000000002CEAB0 "\t"
 *   insn=0x00000000002CEAAC string=0x00000000002CEAD4 ""
 *   insn=0x00000000002CEAB4 string=0x00000000002CEAB8 ")"
 *   insn=0x00000000002CEABC string=0x00000000002CEAC0 "*"
 *   insn=0x00000000002CEAC0 string=0x00000000002CEAC4 ")"
 *   insn=0x00000000002CEAC4 string=0x00000000002CEAC8 "*"
 *   insn=0x00000000002CEACC string=0x00000000002CEAD0 "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Vector3::ByteSize(Caver::Proto::Vector3 *this)
{
  unsigned int v1; // w8
  int v2; // w9

  v1 = *((unsigned __int8 *)this + 24);
  if ( *((_BYTE *)this + 24) )
  {
    v2 = ((int)(v1 << 31) >> 31) & 5;
    if ( (v1 & 2) != 0 )
      v2 += 5;
    if ( (v1 & 4) != 0 )
      v1 = v2 + 5;
    else
      v1 = v2;
  }
  *((_DWORD *)this + 2) = v1;
  return v1;
}

