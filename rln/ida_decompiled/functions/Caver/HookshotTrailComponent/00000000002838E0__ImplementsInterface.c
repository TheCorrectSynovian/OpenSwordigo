/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002838E0
 * Mangled: _ZN5Caver22HookshotTrailComponent19ImplementsInterfaceEl
 * Demangled: Caver::HookshotTrailComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000002839C8  Caver::HookshotTrailComponent::Interface(void)
 *   0x00000000002839D4  Caver::GlowComponent::Interface(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002838E0 string=0x00000000002838E4 ""
 *   insn=0x00000000002838E4 string=0x00000000002838E8 "\t#"
 *   insn=0x00000000002838E8 string=0x00000000002838EC ")"
 *   insn=0x00000000002838EC string=0x00000000002838F0 "?"
 *   insn=0x00000000002838F4 string=0x00000000002838F8 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::HookshotTrailComponent::ImplementsInterface(
        Caver::HookshotTrailComponent *this,
        __int64 (__fastcall *a2)(Caver::HookshotTrailComponent *__hidden this))
{
  return (a2 == Caver::HookshotTrailComponent::Interface) | (unsigned int)(a2 == Caver::GlowComponent::Interface);
}

