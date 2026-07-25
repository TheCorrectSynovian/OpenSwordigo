/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AEB98
 * Mangled: _ZN5Caver21PortalEffectComponent19ImplementsInterfaceEl
 * Demangled: Caver::PortalEffectComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000002839D4  Caver::GlowComponent::Interface(void)
 *   0x00000000002AEE60  Caver::PortalEffectComponent::Interface(void)
 *
 * Referenced strings: 4
 *   insn=0x00000000002AEB98 string=0x00000000002AEB9C ""
 *   insn=0x00000000002AEBA0 string=0x00000000002AEBA4 ")"
 *   insn=0x00000000002AEBA4 string=0x00000000002AEBA8 "?"
 *   insn=0x00000000002AEBAC string=0x00000000002AEBB0 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PortalEffectComponent::ImplementsInterface(
        Caver::PortalEffectComponent *this,
        __int64 (__fastcall *(__fastcall *a2)(Caver::GlowComponent *this))(Caver::GlowComponent *__hidden this))
{
  return ((char *)a2 == (char *)Caver::PortalEffectComponent::Interface)
       | (unsigned int)(a2 == Caver::GlowComponent::Interface);
}

