/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202EF0
 * Mangled: ._ZNK5Caver5Proto8DateTime8ByteSizeEv
 * Demangled: Caver::Proto::DateTime::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000002EB24C  Caver::Proto::PlayerProfile::ByteSize(void)
 *
 * Callees: 1
 *   0x00000000002CDFE4  Caver::Proto::DateTime::ByteSize(void)
 *
 * Referenced strings: 2
 *   insn=0x0000000000202EF4 string=0x00000000002CDFE4 "`@9"
 *   insn=0x0000000000202EF8 string=0x0000000000202EFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::DateTime::ByteSize(Caver::Proto::DateTime *this)
{
  return _ZNK5Caver5Proto8DateTime8ByteSizeEv(this);
}

