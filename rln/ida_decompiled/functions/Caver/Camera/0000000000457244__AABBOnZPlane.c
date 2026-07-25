/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000457244
 * Mangled: _ZN5Caver6Camera12AABBOnZPlaneEf
 * Demangled: Caver::Camera::AABBOnZPlane(float)
 *
 * Callers: 1
 *   0x00000000001FA1E0  Caver::Camera::AABBOnZPlane(float)
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7D10  Caver::Ray3::IntersectionWithXYPlane(float)
 *   0x00000000001F9E30  Caver::Rectangle::ExpandToIncludePoint(Caver::Vector2 const&)
 *   0x0000000000200050  Caver::Camera::RayFromScreenPoint(Caver::Vector2 const&)
 *   0x0000000000202FD0  Caver::Vector2::Vector2(Caver::Vector3 const&)
 *
 * Referenced strings: 15
 *   insn=0x0000000000457264 string=0x0000000000457268 ""
 *   insn=0x0000000000457268 string=0x000000000045726C "V"
 *   insn=0x000000000045729C string=0x00000000004572A0 "l"
 *   insn=0x00000000004572B0 string=0x00000000001F7D10 "0'"
 *   insn=0x00000000004572B8 string=0x00000000004572BC "E"
 *   insn=0x00000000004572C8 string=0x00000000004572CC "h~"
 *   insn=0x00000000004572D0 string=0x00000000004572D4 "_"
 *   insn=0x00000000004572EC string=0x00000000004572F0 "8"
 *   insn=0x00000000004572FC string=0x00000000001F9E30 "0'"
 *   insn=0x0000000000457308 string=0x000000000045730C "Q"
 *   insn=0x0000000000457318 string=0x000000000045731C "}"
 *   insn=0x0000000000457324 string=0x0000000000457328 "*"
 *   insn=0x0000000000457340 string=0x0000000000457344 "C"
 *   insn=0x0000000000457350 string=0x0000000000457354 "o"
 *   insn=0x000000000045739C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Camera::AABBOnZPlane@<X0>(Caver::Camera *this@<X0>, float a2@<S0>, Caver::Rectangle *a3@<X8>)
{
  __int64 v7[2]; // [xsp+0h] [xbp-90h] BYREF
  __int64 v8; // [xsp+10h] [xbp-80h] BYREF
  __int64 v9[3]; // [xsp+18h] [xbp-78h] BYREF
  __int128 v10; // [xsp+30h] [xbp-60h] BYREF
  __int128 v11; // [xsp+40h] [xbp-50h] BYREF
  __int64 v12; // [xsp+58h] [xbp-38h]

  v12 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v10 = xmmword_595800;
  v11 = xmmword_595810;
  *(_QWORD *)a3 = 0;
  *((_QWORD *)a3 + 1) = 0;
  Caver::Camera::RayFromScreenPoint(v9, this, (const Caver::Vector2 *)&v10);
  Caver::Ray3::IntersectionWithXYPlane(v7, (Caver::Ray3 *)v9, a2);
  Caver::Vector2::Vector2((Caver::Vector2 *)&v8, (const Caver::Vector3 *)v7);
  *(_QWORD *)a3 = v8;
  *((_QWORD *)a3 + 1) = 0;
  Caver::Camera::RayFromScreenPoint(v9, this, (const Caver::Vector2 *)((char *)&v10 + 8));
  Caver::Ray3::IntersectionWithXYPlane(v7, (Caver::Ray3 *)v9, a2);
  Caver::Vector2::Vector2((Caver::Vector2 *)&v8, (const Caver::Vector3 *)v7);
  Caver::Rectangle::ExpandToIncludePoint(a3, (const Caver::Vector2 *)&v8);
  Caver::Camera::RayFromScreenPoint(v9, this, (const Caver::Vector2 *)&v11);
  Caver::Ray3::IntersectionWithXYPlane(v7, (Caver::Ray3 *)v9, a2);
  Caver::Vector2::Vector2((Caver::Vector2 *)&v8, (const Caver::Vector3 *)v7);
  Caver::Rectangle::ExpandToIncludePoint(a3, (const Caver::Vector2 *)&v8);
  Caver::Camera::RayFromScreenPoint(v9, this, (const Caver::Vector2 *)((char *)&v11 + 8));
  Caver::Ray3::IntersectionWithXYPlane(v7, (Caver::Ray3 *)v9, a2);
  Caver::Vector2::Vector2((Caver::Vector2 *)&v8, (const Caver::Vector3 *)v7);
  return Caver::Rectangle::ExpandToIncludePoint(a3, (const Caver::Vector2 *)&v8);
}

