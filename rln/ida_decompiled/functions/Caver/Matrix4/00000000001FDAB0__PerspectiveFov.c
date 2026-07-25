/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDAB0
 * Mangled: ._ZN5Caver7Matrix414PerspectiveFovEffff
 * Demangled: Caver::Matrix4::PerspectiveFov(float,float,float,float)
 *
 * Callers: 2
 *   0x0000000000457A10  Caver::Camera::SetPerspectiveProjection(float,float,float,float)
 *   0x0000000000457BB4  Caver::Camera::SetAspectRatio(float)
 *
 * Callees: 1
 *   0x00000000004AF66C  Caver::Matrix4::PerspectiveFov(float,float,float,float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDAB8 string=0x00000000001FDABC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Matrix4::PerspectiveFov(Caver::Matrix4 *this, float a2, float a3, float a4, float a5)
{
  return _ZN5Caver7Matrix414PerspectiveFovEffff(this, a2, a3, a4, a5);
}

