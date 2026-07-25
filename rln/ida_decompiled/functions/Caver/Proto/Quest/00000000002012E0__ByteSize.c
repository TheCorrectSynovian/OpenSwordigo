/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002012E0
 * Mangled: ._ZNK5Caver5Proto5Quest8ByteSizeEv
 * Demangled: Caver::Proto::Quest::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000002E78D8  Caver::Proto::GameData::ByteSize(void)
 *
 * Callees: 1
 *   0x00000000002E2338  Caver::Proto::Quest::ByteSize(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002012E8 string=0x00000000002012EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::Quest::ByteSize(Caver::Proto::Quest *this)
{
  return _ZNK5Caver5Proto5Quest8ByteSizeEv(this);
}

