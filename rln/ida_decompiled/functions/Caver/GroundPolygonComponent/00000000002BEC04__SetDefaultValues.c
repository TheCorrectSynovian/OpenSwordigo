/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002BEC04
 * Mangled: _ZN5Caver22GroundPolygonComponent16SetDefaultValuesEv
 * Demangled: Caver::GroundPolygonComponent::SetDefaultValues(void)
 *
 * Callers: 1
 *   0x00000000001F34F0  Caver::GroundPolygonComponent::SetDefaultValues(void)
 *
 * Callees: 8
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F73A0  Caver::Component::UpdateObjectBounds(void)
 *   0x00000000001FE1E0  Caver::Polygon::Polygon(int,Caver::Vector2 const*,bool)
 *   0x0000000000200AA0  Caver::Polygon::Bounds(void)
 *   0x0000000000203DE0  std::vector<Caver::Vector2,std::allocator<Caver::Vector2>>::operator=(std::vector<Caver::Vector2,std::allocator<Caver::Vector2>> const&)
 *   0x00000000002BECE0  Caver::GroundPolygonComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 14
 *   insn=0x00000000002BEC14 string=0x00000000002BEC18 "U"
 *   insn=0x00000000002BEC18 string=0x00000000002BEC1C "H"
 *   insn=0x00000000002BEC1C string=0x00000000002BEC20 "I"
 *   insn=0x00000000002BEC28 string=0x00000000002BEC2C "!"
 *   insn=0x00000000002BEC4C string=0x00000000002BEC50 "d"
 *   insn=0x00000000002BEC64 string=0x00000000002BEC68 "^"
 *   insn=0x00000000002BEC6C string=0x00000000002BEC70 "h""
 *   insn=0x00000000002BEC80 string=0x00000000002BEC84 "`"
 *   insn=0x00000000002BEC8C string=0x00000000001F73A0 "0'"
 *   insn=0x00000000002BEC90 string=0x00000000002BEC94 "@"
 *   insn=0x00000000002BEC98 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002BECC0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002BECC8 string=0x00000000002BECCC "h"
 *   insn=0x00000000002BECD0 string=0x00000000002BECD4 "w"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GroundPolygonComponent::SetDefaultValues(Caver::GroundPolygonComponent *this)
{
  __int128 v2; // [xsp+8h] [xbp-88h] BYREF
  int v3; // [xsp+18h] [xbp-78h] BYREF
  void *p; // [xsp+20h] [xbp-70h]
  __int16 v5; // [xsp+38h] [xbp-58h]
  _OWORD v6[2]; // [xsp+40h] [xbp-50h] BYREF
  __int64 v7; // [xsp+68h] [xbp-28h]

  v7 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6[0] = xmmword_589F60;
  v6[1] = xmmword_589F70;
  Caver::Polygon::Polygon((Caver::Polygon *)&v3, 4, (const Caver::Vector2 *)v6, 1);
  *((_DWORD *)this + 28) = v3;
  std::vector<Caver::Vector2>::operator=();
  *((_WORD *)this + 72) = v5;
  Caver::Polygon::Bounds((__int64 *)&v2, (Caver::GroundPolygonComponent *)((char *)this + 112));
  *(_OWORD *)((char *)this + 152) = v2;
  Caver::Component::UpdateObjectBounds(this);
  if ( p )
    operator delete(p);
}

