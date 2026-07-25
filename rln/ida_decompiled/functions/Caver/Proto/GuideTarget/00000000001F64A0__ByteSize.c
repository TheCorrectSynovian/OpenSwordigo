/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F64A0
 * Mangled: ._ZNK5Caver5Proto11GuideTarget8ByteSizeEv
 * Demangled: Caver::Proto::GuideTarget::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000002E78D8  Caver::Proto::GameData::ByteSize(void)
 *
 * Callees: 1
 *   0x00000000002E4C58  Caver::Proto::GuideTarget::ByteSize(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F64A8 string=0x00000000001F64AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::GuideTarget::ByteSize(Caver::Proto::GuideTarget *this)
{
  return _ZNK5Caver5Proto11GuideTarget8ByteSizeEv(this);
}

