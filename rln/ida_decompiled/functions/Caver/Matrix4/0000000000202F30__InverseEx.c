/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202F30
 * Mangled: ._ZNK5Caver7Matrix49InverseExEv
 * Demangled: Caver::Matrix4::InverseEx(void)
 *
 * Callers: 4
 *   0x00000000004576A0  Caver::Camera::SetOrthoProjection(float,float,float,float)
 *   0x0000000000457870  Caver::Camera::SetProjectionMatrix(Caver::Matrix4 const&)
 *   0x0000000000457A10  Caver::Camera::SetPerspectiveProjection(float,float,float,float)
 *   0x0000000000457BB4  Caver::Camera::SetAspectRatio(float)
 *
 * Callees: 1
 *   0x00000000004AEB54  Caver::Matrix4::InverseEx(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202F38 string=0x0000000000202F3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Matrix4::InverseEx(Caver::Matrix4 *this)
{
  return _ZNK5Caver7Matrix49InverseExEv(this);
}

