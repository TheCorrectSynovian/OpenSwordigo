/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002BEF34
 * Mangled: _ZN5Caver22GroundPolygonComponent12UpdateBoundsEv
 * Demangled: Caver::GroundPolygonComponent::UpdateBounds(void)
 *
 * Callers: 1
 *   0x00000000002BECE0  Caver::GroundPolygonComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F73A0  Caver::Component::UpdateObjectBounds(void)
 *   0x0000000000200AA0  Caver::Polygon::Bounds(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002BEF40 string=0x00000000002BEF44 "T"
 *   insn=0x00000000002BEF4C string=0x00000000002BEF50 "`"
 *   insn=0x00000000002BEF64 string=0x00000000002BEF68 "`"
 *   insn=0x00000000002BEF68 string=0x00000000002BEF6C ""
 *   insn=0x00000000002BEF6C string=0x00000000001F73A0 "0'"
 *   insn=0x00000000002BEF90 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GroundPolygonComponent::UpdateBounds(Caver::GroundPolygonComponent *this)
{
  __int128 v3; // [xsp+8h] [xbp-28h] BYREF
  __int64 v4; // [xsp+18h] [xbp-18h]

  v4 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::Polygon::Bounds((__int64 *)&v3, (Caver::GroundPolygonComponent *)((char *)this + 112));
  *(_OWORD *)((char *)this + 152) = v3;
  return Caver::Component::UpdateObjectBounds(this);
}

