/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CF114
 * Mangled: _ZNK5Caver5Proto9Rectangle8ByteSizeEv
 * Demangled: Caver::Proto::Rectangle::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000001FE3C0  Caver::Proto::Rectangle::ByteSize(void)
 *
 * Callees: 0
 *
 * Referenced strings: 9
 *   insn=0x00000000002CF118 string=0x00000000002CF11C "\t"
 *   insn=0x00000000002CF118 string=0x00000000002CF14C ""
 *   insn=0x00000000002CF120 string=0x00000000002CF124 ")"
 *   insn=0x00000000002CF128 string=0x00000000002CF12C "*"
 *   insn=0x00000000002CF12C string=0x00000000002CF130 ")"
 *   insn=0x00000000002CF134 string=0x00000000002CF138 "*"
 *   insn=0x00000000002CF138 string=0x00000000002CF13C ")"
 *   insn=0x00000000002CF13C string=0x00000000002CF140 "*"
 *   insn=0x00000000002CF144 string=0x00000000002CF148 "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Rectangle::ByteSize(Caver::Proto::Rectangle *this)
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

