/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CE4E4
 * Mangled: _ZNK5Caver5Proto7Vector28ByteSizeEv
 * Demangled: Caver::Proto::Vector2::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000001FCDD0  Caver::Proto::Vector2::ByteSize(void)
 *
 * Callees: 0
 *
 * Referenced strings: 5
 *   insn=0x00000000002CE4E8 string=0x00000000002CE4EC "\t"
 *   insn=0x00000000002CE4E8 string=0x00000000002CE504 ""
 *   insn=0x00000000002CE4F0 string=0x00000000002CE4F4 ")"
 *   insn=0x00000000002CE4F4 string=0x00000000002CE4F8 "*"
 *   insn=0x00000000002CE4FC string=0x00000000002CE500 "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Vector2::ByteSize(Caver::Proto::Vector2 *this)
{
  unsigned int v1; // w8

  v1 = *((unsigned __int8 *)this + 20);
  if ( *((_BYTE *)this + 20) )
  {
    if ( (v1 & 2) != 0 )
      v1 = (((int)(v1 << 31) >> 31) & 5) + 5;
    else
      v1 = ((int)(v1 << 31) >> 31) & 5;
  }
  *((_DWORD *)this + 2) = v1;
  return v1;
}

