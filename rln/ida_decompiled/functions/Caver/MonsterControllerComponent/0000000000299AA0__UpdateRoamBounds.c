/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000299AA0
 * Mangled: _ZN5Caver26MonsterControllerComponent16UpdateRoamBoundsEv
 * Demangled: Caver::MonsterControllerComponent::UpdateRoamBounds(void)
 *
 * Callers: 1
 *   0x00000000001FD260  Caver::MonsterControllerComponent::UpdateRoamBounds(void)
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6FC0  Caver::Shape::Bounds(void)
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001F9C60  Caver::Rectangle::TranslatedRectangle(Caver::Vector2 const&)
 *   0x00000000002016C0  Caver::Rectangle::ScaledRectangle(Caver::Vector2 const&)
 *
 * Referenced strings: 15
 *   insn=0x0000000000299AAC string=0x0000000000299AB0 "T"
 *   insn=0x0000000000299ABC string=0x0000000000299AC0 "hZ@"
 *   insn=0x0000000000299AC4 string=0x0000000000299AC8 "`"
 *   insn=0x0000000000299AD0 string=0x0000000000299AD4 "hZ@"
 *   insn=0x0000000000299AD0 string=0x00000000001F7AE0 "0'"
 *   insn=0x0000000000299AD4 string=0x0000000000299AD8 "H"
 *   insn=0x0000000000299AE0 string=0x0000000000299AE4 "7u"
 *   insn=0x0000000000299AE4 string=0x0000000000299AE8 "h"
 *   insn=0x0000000000299AE4 string=0x00000000001F6FC0 "P'"
 *   insn=0x0000000000299AF0 string=0x0000000000299AF4 ""
 *   insn=0x0000000000299B00 string=0x0000000000299B04 "h"
 *   insn=0x0000000000299B10 string=0x0000000000299B14 "S"
 *   insn=0x0000000000299B14 string=0x00000000001F9C60 "0'"
 *   insn=0x0000000000299B18 string=0x0000000000299B1C "`"
 *   insn=0x0000000000299B40 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::MonsterControllerComponent::UpdateRoamBounds(Caver::MonsterControllerComponent *this)
{
  __int64 v2; // x8
  long double result; // q0
  __int64 v4[2]; // [xsp+8h] [xbp-48h] BYREF
  __int64 v5[2]; // [xsp+18h] [xbp-38h] BYREF
  long double v6; // [xsp+28h] [xbp-28h] BYREF
  __int64 v7; // [xsp+38h] [xbp-18h]

  v7 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = *((_QWORD *)this + 22);
  if ( v2
    || (Caver::ComponentOutletBase::Connect((Caver::MonsterControllerComponent *)((char *)this + 160), this),
        (v2 = *((_QWORD *)this + 22)) != 0) )
  {
    Caver::Shape::Bounds(v5, (Caver::Shape *)(v2 + 112));
    LODWORD(v6) = *(_DWORD *)(*((_QWORD *)this + 5) + 140LL);
    DWORD1(v6) = LODWORD(v6);
    Caver::Rectangle::ScaledRectangle(v4, (Caver::Rectangle *)v5, (const Caver::Vector2 *)&v6);
    Caver::Rectangle::TranslatedRectangle(
      (__int64 *)&v6,
      (Caver::Rectangle *)v4,
      (const Caver::Vector2 *)(*((_QWORD *)this + 5) + 112LL));
    result = v6;
    *(long double *)((char *)this + 184) = v6;
  }
  return result;
}

