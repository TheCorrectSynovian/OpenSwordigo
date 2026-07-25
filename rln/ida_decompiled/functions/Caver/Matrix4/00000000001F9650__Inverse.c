/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9650
 * Mangled: ._ZNK5Caver7Matrix47InverseEv
 * Demangled: Caver::Matrix4::Inverse(void)
 *
 * Callers: 2
 *   0x000000000044E4FC  Caver::PODLoader::CreateSkeleton(void)
 *   0x0000000000457D84  Caver::Camera::EvaluateViewMatrix(void)
 *
 * Callees: 1
 *   0x00000000004AE974  Caver::Matrix4::Inverse(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9658 string=0x00000000001F965C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Matrix4::Inverse(Caver::Matrix4 *this)
{
  return _ZNK5Caver7Matrix47InverseEv(this);
}

