/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CDFE4
 * Mangled: _ZNK5Caver5Proto8DateTime8ByteSizeEv
 * Demangled: Caver::Proto::DateTime::ByteSize(void)
 *
 * Callers: 1
 *   0x0000000000202EF0  Caver::Proto::DateTime::ByteSize(void)
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x00000000002CDFE8 string=0x00000000002CDFEC ""
 *   insn=0x00000000002CDFE8 string=0x00000000002CDFF8 ""
 *   insn=0x00000000002CDFEC string=0x00000000002CDFF0 ")"
 *   insn=0x00000000002CDFF0 string=0x00000000002CDFF4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::DateTime::ByteSize(Caver::Proto::DateTime *this)
{
  unsigned int v1; // w8

  v1 = *((unsigned __int8 *)this + 24);
  if ( *((_BYTE *)this + 24) )
    v1 = ((int)(v1 << 31) >> 31) & 9;
  *((_DWORD *)this + 2) = v1;
  return v1;
}

