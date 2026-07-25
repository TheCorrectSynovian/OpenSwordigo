/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028BF30
 * Mangled: _ZN5Caver23MagicSpellCastComponent19ImplementsInterfaceEl
 * Demangled: Caver::MagicSpellCastComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000028BF80  Caver::MagicSpellCastComponent::className(void)
 *
 * Referenced strings: 2
 *   insn=0x000000000028BF30 string=0x000000000028BF34 "=D"
 *   insn=0x000000000028BF34 string=0x000000000028BF38 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::MagicSpellCastComponent::ImplementsInterface(
        Caver::MagicSpellCastComponent *this,
        _QWORD (*a2)(Caver::MagicSpellCastComponent *__hidden this))
{
  return a2 == Caver::MagicSpellCastComponent::Interface;
}

