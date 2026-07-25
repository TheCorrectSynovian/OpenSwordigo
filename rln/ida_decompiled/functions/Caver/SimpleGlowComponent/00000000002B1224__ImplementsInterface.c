/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B1224
 * Mangled: _ZN5Caver19SimpleGlowComponent19ImplementsInterfaceEl
 * Demangled: Caver::SimpleGlowComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000002839D4  Caver::GlowComponent::Interface(void)
 *   0x00000000002B12BC  Caver::SimpleGlowComponent::className(void)
 *
 * Referenced strings: 4
 *   insn=0x00000000002B1224 string=0x00000000002B1228 "i@"
 *   insn=0x00000000002B122C string=0x00000000002B1230 ")"
 *   insn=0x00000000002B1230 string=0x00000000002B1234 "?"
 *   insn=0x00000000002B1238 string=0x00000000002B123C "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SimpleGlowComponent::ImplementsInterface(
        Caver::SimpleGlowComponent *this,
        __int64 (__fastcall *(__fastcall *a2)(Caver::GlowComponent *this))(Caver::GlowComponent *__hidden this))
{
  return ((char *)a2 == (char *)Caver::SimpleGlowComponent::Interface)
       | (unsigned int)(a2 == Caver::GlowComponent::Interface);
}

