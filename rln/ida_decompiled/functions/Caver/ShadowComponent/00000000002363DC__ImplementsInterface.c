/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002363DC
 * Mangled: _ZN5Caver15ShadowComponent19ImplementsInterfaceEl
 * Demangled: Caver::ShadowComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000236424  Caver::ShadowComponent::className(void)
 *
 * Referenced strings: 3
 *   insn=0x00000000002363DC string=0x00000000002363E0 ""
 *   insn=0x00000000002363E0 string=0x00000000002363E4 "?"
 *   insn=0x00000000002363E0 string=0x000000000023647C "`%"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::ShadowComponent::ImplementsInterface(
        Caver::ShadowComponent *this,
        _QWORD (*a2)(Caver::ShadowComponent *__hidden this))
{
  return a2 == Caver::ShadowComponent::Interface;
}

