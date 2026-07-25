/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9080
 * Mangled: ._ZN5Caver10Quaternion9NormalizeEv
 * Demangled: Caver::Quaternion::Normalize(void)
 *
 * Callers: 1
 *   0x00000000004510E4  Caver::SkeletonInstance::ExtractDataFromBuffer(Caver::FloatDataBuffer const*)
 *
 * Callees: 1
 *   0x00000000004B117C  Caver::Quaternion::Normalize(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9088 string=0x00000000001F908C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Quaternion::Normalize(Caver::Quaternion *this)
{
  return _ZN5Caver10Quaternion9NormalizeEv(this);
}

