/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9C90
 * Mangled: ._ZNK5Caver5Proto4Item8ByteSizeEv
 * Demangled: Caver::Proto::Item::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000002E78D8  Caver::Proto::GameData::ByteSize(void)
 *
 * Callees: 1
 *   0x00000000002E061C  Caver::Proto::Item::ByteSize(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9C98 string=0x00000000001F9C9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::Item::ByteSize(Caver::Proto::Item *this)
{
  return _ZNK5Caver5Proto4Item8ByteSizeEv(this);
}

