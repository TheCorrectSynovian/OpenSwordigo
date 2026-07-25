/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A3574
 * Mangled: _ZN5Caver13GlowComponent19ImplementsInterfaceEl
 * Demangled: Caver::GlowComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002839D4  Caver::GlowComponent::Interface(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000002A3574 string=0x00000000002A3578 ""
 *   insn=0x00000000002A3578 string=0x00000000002A357C "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::GlowComponent::ImplementsInterface(
        Caver::GlowComponent *this,
        __int64 (__fastcall *(__fastcall *a2)(Caver::GlowComponent *this))(Caver::GlowComponent *__hidden this))
{
  return a2 == Caver::GlowComponent::Interface;
}

