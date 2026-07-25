/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE2E0
 * Mangled: ._ZNK5Caver5Proto7MapZone8ByteSizeEv
 * Demangled: Caver::Proto::MapZone::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000002DF594  Caver::Proto::Map::ByteSize(void)
 *
 * Callees: 1
 *   0x00000000002DEC84  Caver::Proto::MapZone::ByteSize(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE2E8 string=0x00000000001FE2EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::MapZone::ByteSize(Caver::Proto::MapZone *this)
{
  return _ZNK5Caver5Proto7MapZone8ByteSizeEv(this);
}

