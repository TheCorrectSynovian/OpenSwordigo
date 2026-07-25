/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9D10
 * Mangled: ._ZNK5Caver5Proto5Skill8ByteSizeEv
 * Demangled: Caver::Proto::Skill::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000002E78D8  Caver::Proto::GameData::ByteSize(void)
 *
 * Callees: 1
 *   0x00000000002E1558  Caver::Proto::Skill::ByteSize(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9D18 string=0x00000000001F9D1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::Skill::ByteSize(Caver::Proto::Skill *this)
{
  return _ZNK5Caver5Proto5Skill8ByteSizeEv(this);
}

