/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AEBC0
 * Mangled: _ZN5Caver21PortalEffectComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::PortalEffectComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x00000000002839D4  Caver::GlowComponent::Interface(void)
 *   0x00000000002AEE60  Caver::PortalEffectComponent::Interface(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002AEBCC string=0x00000000002AEBD0 "B"
 *   insn=0x00000000002AEBD8 string=0x00000000002AEBDC "1"
 *   insn=0x00000000002AEBDC string=0x00000000001F38A0 "P'"
 *   insn=0x00000000002AEBE0 string=0x00000000002AEBE4 "B"
 *   insn=0x00000000002AEBEC string=0x00000000002AEBF0 ","
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PortalEffectComponent::RegisterInterfaces(
        Caver::PortalEffectComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::PortalEffectComponent::Interface);
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::GlowComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

