/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7D10
 * Mangled: ._ZNK5Caver4Ray323IntersectionWithXYPlaneEf
 * Demangled: Caver::Ray3::IntersectionWithXYPlane(float)
 *
 * Callers: 3
 *   0x0000000000456CFC  Caver::Camera::WorldPositionFromScreenPoint(Caver::Vector2,Caver::Rectangle const&,float)
 *   0x0000000000457244  Caver::Camera::AABBOnZPlane(float)
 *   0x00000000004573A0  Caver::Camera::AABBForZRange(float,float)
 *
 * Callees: 1
 *   0x00000000004B1594  Caver::Ray3::IntersectionWithXYPlane(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7D18 string=0x00000000001F7D1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Ray3::IntersectionWithXYPlane(Caver::Ray3 *this, float a2)
{
  return _ZNK5Caver4Ray323IntersectionWithXYPlaneEf(this, a2);
}

