/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002999FC
 * Mangled: _ZN5Caver26MonsterControllerComponent7PrepareEv
 * Demangled: Caver::MonsterControllerComponent::Prepare(void)
 *
 * Callers: 1
 *   0x00000000001FF140  Caver::MonsterControllerComponent::Prepare(void)
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6FC0  Caver::Shape::Bounds(void)
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001F9C60  Caver::Rectangle::TranslatedRectangle(Caver::Vector2 const&)
 *   0x00000000002016C0  Caver::Rectangle::ScaledRectangle(Caver::Vector2 const&)
 *
 * Referenced strings: 17
 *   insn=0x0000000000299A08 string=0x0000000000299A0C "T"
 *   insn=0x0000000000299A18 string=0x0000000000299A1C "hZ@"
 *   insn=0x0000000000299A20 string=0x0000000000299A24 "`"
 *   insn=0x0000000000299A28 string=0x0000000000299A2C "-x"
 *   insn=0x0000000000299A2C string=0x0000000000299A30 "hZ@"
 *   insn=0x0000000000299A2C string=0x00000000001F7AE0 "0'"
 *   insn=0x0000000000299A30 string=0x0000000000299A34 "H"
 *   insn=0x0000000000299A3C string=0x0000000000299A40 "`u"
 *   insn=0x0000000000299A40 string=0x0000000000299A44 "h"
 *   insn=0x0000000000299A40 string=0x00000000001F6FC0 "P'"
 *   insn=0x0000000000299A4C string=0x0000000000299A50 ""
 *   insn=0x0000000000299A5C string=0x0000000000299A60 "h"
 *   insn=0x0000000000299A6C string=0x0000000000299A70 "|"
 *   insn=0x0000000000299A70 string=0x00000000001F9C60 "0'"
 *   insn=0x0000000000299A74 string=0x0000000000299A78 "`"
 *   insn=0x0000000000299A88 string=0x0000000000299A9C "r"
 *   insn=0x0000000000299A9C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::MonsterControllerComponent::Prepare(Caver::MonsterControllerComponent *this)
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

