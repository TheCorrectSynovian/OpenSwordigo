/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000256034
 * Mangled: _ZN5Caver24BreakableObjectComponent19ImplementsInterfaceEl
 * Demangled: Caver::BreakableObjectComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000256084  Caver::BreakableObjectComponent::className(void)
 *
 * Referenced strings: 2
 *   insn=0x0000000000256034 string=0x0000000000256038 ""
 *   insn=0x0000000000256038 string=0x000000000025603C "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::BreakableObjectComponent::ImplementsInterface(
        Caver::BreakableObjectComponent *this,
        _QWORD (*a2)(Caver::BreakableObjectComponent *__hidden this))
{
  return a2 == Caver::BreakableObjectComponent::Interface;
}

