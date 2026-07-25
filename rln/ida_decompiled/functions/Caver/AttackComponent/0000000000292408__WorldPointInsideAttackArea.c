/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000292408
 * Mangled: _ZN5Caver15AttackComponent26WorldPointInsideAttackAreaERKNS_7Vector2E
 * Demangled: Caver::AttackComponent::WorldPointInsideAttackArea(Caver::Vector2 const&)
 *
 * Callers: 1
 *   0x000000000029235C  Caver::AttackComponent::Prepare(void)
 *
 * Callees: 2
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x0000000000202030  Caver::ShapeComponent::ContainsWorldPoint(Caver::Vector2 const&)
 *
 * Referenced strings: 1
 *   insn=0x000000000029242C string=0x00000000001F7AE0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::AttackComponent::WorldPointInsideAttackArea(
        Caver::AttackComponent *this,
        const Caver::Vector2 *a2)
{
  if ( *((_QWORD *)this + 22)
    || (Caver::ComponentOutletBase::Connect((Caver::AttackComponent *)((char *)this + 160), this), *((_QWORD *)this + 22)) )
  {
    Caver::ShapeComponent::ContainsWorldPoint();
  }
}

