/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023A9C0
 * Mangled: _ZN5Caver20SoundEffectComponent19ImplementsInterfaceEl
 * Demangled: Caver::SoundEffectComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000023AA08  Caver::SoundEffectComponent::className(void)
 *
 * Referenced strings: 3
 *   insn=0x000000000023A9C0 string=0x000000000023A9C4 ""
 *   insn=0x000000000023A9C4 string=0x000000000023A9C8 "?"
 *   insn=0x000000000023A9C4 string=0x000000000023AA60 "`%"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::SoundEffectComponent::ImplementsInterface(
        Caver::SoundEffectComponent *this,
        _QWORD (*a2)(Caver::SoundEffectComponent *__hidden this))
{
  return a2 == Caver::SoundEffectComponent::Interface;
}

