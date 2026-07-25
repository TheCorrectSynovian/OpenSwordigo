/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002BEAB8
 * Mangled: _ZN5Caver22GroundPolygonComponent10SetPolygonERKNS_7PolygonE
 * Demangled: Caver::GroundPolygonComponent::SetPolygon(Caver::Polygon const&)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F73A0  Caver::Component::UpdateObjectBounds(void)
 *   0x0000000000200AA0  Caver::Polygon::Bounds(void)
 *   0x0000000000203DE0  std::vector<Caver::Vector2,std::allocator<Caver::Vector2>>::operator=(std::vector<Caver::Vector2,std::allocator<Caver::Vector2>> const&)
 *
 * Referenced strings: 7
 *   insn=0x00000000002BEAC8 string=0x00000000002BEACC "V"
 *   insn=0x00000000002BEAE0 string=0x00000000002BEAE4 "h"
 *   insn=0x00000000002BEAE8 string=0x00000000002BEAEC "a""
 *   insn=0x00000000002BEAF4 string=0x00000000002BEAF8 "hB@y"
 *   insn=0x00000000002BEB14 string=0x00000000002BEB18 """
 *   insn=0x00000000002BEB18 string=0x00000000001F73A0 "0'"
 *   insn=0x00000000002BEB40 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GroundPolygonComponent::SetPolygon(
        Caver::GroundPolygonComponent *this,
        const Caver::Polygon *a2)
{
  __int128 v6; // [xsp+8h] [xbp-38h] BYREF
  __int64 v7; // [xsp+18h] [xbp-28h]

  v7 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *((_DWORD *)this + 28) = *(_DWORD *)a2;
  std::vector<Caver::Vector2>::operator=();
  *((_WORD *)this + 72) = *((_WORD *)a2 + 16);
  Caver::Polygon::Bounds((__int64 *)&v6, (Caver::GroundPolygonComponent *)((char *)this + 112));
  *(_OWORD *)((char *)this + 152) = v6;
  return Caver::Component::UpdateObjectBounds(this);
}

