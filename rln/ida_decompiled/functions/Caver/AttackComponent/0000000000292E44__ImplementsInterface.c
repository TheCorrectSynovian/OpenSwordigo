/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000292E44
 * Mangled: _ZN5Caver15AttackComponent19ImplementsInterfaceEl
 * Demangled: Caver::AttackComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000292E8C  Caver::AttackComponent::className(void)
 *
 * Referenced strings: 2
 *   insn=0x0000000000292E44 string=0x0000000000292E48 ""
 *   insn=0x0000000000292E48 string=0x0000000000292E4C "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::AttackComponent::ImplementsInterface(
        Caver::AttackComponent *this,
        _QWORD (*a2)(Caver::AttackComponent *__hidden this))
{
  return a2 == Caver::AttackComponent::Interface;
}

