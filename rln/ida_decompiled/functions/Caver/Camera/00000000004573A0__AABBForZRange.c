/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004573A0
 * Mangled: _ZN5Caver6Camera13AABBForZRangeEff
 * Demangled: Caver::Camera::AABBForZRange(float,float)
 *
 * Callers: 1
 *   0x00000000001FBA50  Caver::Camera::AABBForZRange(float,float)
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7D10  Caver::Ray3::IntersectionWithXYPlane(float)
 *   0x00000000001F9E30  Caver::Rectangle::ExpandToIncludePoint(Caver::Vector2 const&)
 *   0x0000000000200050  Caver::Camera::RayFromScreenPoint(Caver::Vector2 const&)
 *   0x0000000000202FD0  Caver::Vector2::Vector2(Caver::Vector3 const&)
 *
 * Referenced strings: 24
 *   insn=0x00000000004573C0 string=0x00000000004573C4 "\t"
 *   insn=0x00000000004573C4 string=0x00000000004573C8 "V"
 *   insn=0x00000000004573D0 string=0x00000000004573D4 "("
 *   insn=0x0000000000457408 string=0x000000000045740C " "
 *   insn=0x000000000045740C string=0x0000000000457410 "@"
 *   insn=0x0000000000457410 string=0x00000000001F7D10 "0'"
 *   insn=0x0000000000457428 string=0x000000000045742C "9"
 *   insn=0x0000000000457444 string=0x0000000000457448 "h~"
 *   insn=0x0000000000457448 string=0x000000000045744C "y"
 *   insn=0x000000000045744C string=0x00000000001F9E30 "0'"
 *   insn=0x0000000000457464 string=0x0000000000457468 " "
 *   insn=0x0000000000457468 string=0x000000000045746C ")"
 *   insn=0x0000000000457484 string=0x0000000000457488 """
 *   insn=0x000000000045749C string=0x00000000004574A0 "d"
 *   insn=0x00000000004574A8 string=0x00000000004574AC "a"
 *   insn=0x00000000004574C4 string=0x00000000004574C8 " "
 *   insn=0x00000000004574E4 string=0x00000000004574E8 "\n"
 *   insn=0x00000000004574FC string=0x0000000000457500 "L"
 *   insn=0x0000000000457508 string=0x000000000045750C "I"
 *   insn=0x0000000000457524 string=0x0000000000457528 " "
 *   insn=0x000000000045755C string=0x0000000000457560 "4"
 *   insn=0x0000000000457568 string=0x000000000045756C "1"
 *   insn=0x000000000045757C string=0x000000000045759C "M{"
 *   insn=0x000000000045759C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Camera::AABBForZRange@<X0>(
        Caver::Camera *this@<X0>,
        float a2@<S0>,
        float a3@<S1>,
        Caver::Rectangle *a4@<X8>)
{
  _BYTE v9[8]; // [xsp+8h] [xbp-A8h] BYREF
  __int64 v10[2]; // [xsp+10h] [xbp-A0h] BYREF
  __int64 v11; // [xsp+20h] [xbp-90h] BYREF
  __int64 v12[3]; // [xsp+28h] [xbp-88h] BYREF
  __int128 v13; // [xsp+40h] [xbp-70h] BYREF
  __int128 v14; // [xsp+50h] [xbp-60h] BYREF
  __int64 v15; // [xsp+68h] [xbp-48h]

  v15 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v13 = xmmword_595800;
  v14 = xmmword_595810;
  *(_QWORD *)a4 = 0;
  *((_QWORD *)a4 + 1) = 0;
  Caver::Camera::RayFromScreenPoint(v12, this, (const Caver::Vector2 *)&v13);
  Caver::Ray3::IntersectionWithXYPlane(v10, (Caver::Ray3 *)v12, a2);
  Caver::Vector2::Vector2((Caver::Vector2 *)&v11, (const Caver::Vector3 *)v10);
  Caver::Ray3::IntersectionWithXYPlane(v10, (Caver::Ray3 *)v12, a3);
  Caver::Vector2::Vector2((Caver::Vector2 *)v9, (const Caver::Vector3 *)v10);
  *(_QWORD *)a4 = v11;
  *((_QWORD *)a4 + 1) = 0;
  Caver::Rectangle::ExpandToIncludePoint(a4, (const Caver::Vector2 *)v9);
  Caver::Camera::RayFromScreenPoint(v12, this, (const Caver::Vector2 *)((char *)&v13 + 8));
  Caver::Ray3::IntersectionWithXYPlane(v10, (Caver::Ray3 *)v12, a2);
  Caver::Vector2::Vector2((Caver::Vector2 *)&v11, (const Caver::Vector3 *)v10);
  Caver::Ray3::IntersectionWithXYPlane(v10, (Caver::Ray3 *)v12, a3);
  Caver::Vector2::Vector2((Caver::Vector2 *)v9, (const Caver::Vector3 *)v10);
  Caver::Rectangle::ExpandToIncludePoint(a4, (const Caver::Vector2 *)&v11);
  Caver::Rectangle::ExpandToIncludePoint(a4, (const Caver::Vector2 *)v9);
  Caver::Camera::RayFromScreenPoint(v12, this, (const Caver::Vector2 *)&v14);
  Caver::Ray3::IntersectionWithXYPlane(v10, (Caver::Ray3 *)v12, a2);
  Caver::Vector2::Vector2((Caver::Vector2 *)&v11, (const Caver::Vector3 *)v10);
  Caver::Ray3::IntersectionWithXYPlane(v10, (Caver::Ray3 *)v12, a3);
  Caver::Vector2::Vector2((Caver::Vector2 *)v9, (const Caver::Vector3 *)v10);
  Caver::Rectangle::ExpandToIncludePoint(a4, (const Caver::Vector2 *)&v11);
  Caver::Rectangle::ExpandToIncludePoint(a4, (const Caver::Vector2 *)v9);
  Caver::Camera::RayFromScreenPoint(v12, this, (const Caver::Vector2 *)((char *)&v14 + 8));
  Caver::Ray3::IntersectionWithXYPlane(v10, (Caver::Ray3 *)v12, a2);
  Caver::Vector2::Vector2((Caver::Vector2 *)&v11, (const Caver::Vector3 *)v10);
  Caver::Ray3::IntersectionWithXYPlane(v10, (Caver::Ray3 *)v12, a3);
  Caver::Vector2::Vector2((Caver::Vector2 *)v9, (const Caver::Vector3 *)v10);
  Caver::Rectangle::ExpandToIncludePoint(a4, (const Caver::Vector2 *)&v11);
  return Caver::Rectangle::ExpandToIncludePoint(a4, (const Caver::Vector2 *)v9);
}

