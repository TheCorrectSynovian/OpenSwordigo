/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B6B1C
 * Mangled: _ZN5Caver27RotatingBackgroundComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::RotatingBackgroundComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x000000000021E330  Caver::BackgroundComponent::Interface(void)
 *   0x00000000002B6B6C  Caver::RotatingBackgroundComponent::className(void)
 *
 * Referenced strings: 7
 *   insn=0x00000000002B6B28 string=0x00000000002B6B2C "B"
 *   insn=0x00000000002B6B34 string=0x00000000002B6B38 "Z"
 *   insn=0x00000000002B6B38 string=0x00000000002B6B3C "b!"
 *   insn=0x00000000002B6B38 string=0x00000000001F38A0 "P'"
 *   insn=0x00000000002B6B3C string=0x00000000002B6B40 "BlA"
 *   insn=0x00000000002B6B40 string=0x000000000021E330 " &"
 *   insn=0x00000000002B6B48 string=0x00000000002B6B4C "U"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::RotatingBackgroundComponent::RegisterInterfaces(
        Caver::RotatingBackgroundComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::RotatingBackgroundComponent::Interface);
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::BackgroundComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

