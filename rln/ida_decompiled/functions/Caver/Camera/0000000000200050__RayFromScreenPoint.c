/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200050
 * Mangled: ._ZNK5Caver6Camera18RayFromScreenPointERKNS_7Vector2E
 * Demangled: Caver::Camera::RayFromScreenPoint(Caver::Vector2 const&)
 *
 * Callers: 3
 *   0x0000000000456CFC  Caver::Camera::WorldPositionFromScreenPoint(Caver::Vector2,Caver::Rectangle const&,float)
 *   0x0000000000457244  Caver::Camera::AABBOnZPlane(float)
 *   0x00000000004573A0  Caver::Camera::AABBForZRange(float,float)
 *
 * Callees: 1
 *   0x0000000000456D84  Caver::Camera::RayFromScreenPoint(Caver::Vector2 const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200058 string=0x000000000020005C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Camera::RayFromScreenPoint(Caver::Camera *this, const Caver::Vector2 *a2)
{
  return _ZNK5Caver6Camera18RayFromScreenPointERKNS_7Vector2E(this, a2);
}

