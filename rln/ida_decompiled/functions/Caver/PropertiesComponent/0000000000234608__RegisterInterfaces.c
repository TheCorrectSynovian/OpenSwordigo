/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000234608
 * Mangled: _ZN5Caver19PropertiesComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::PropertiesComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x000000000023463C  Caver::PropertiesComponent::className(void)
 *
 * Referenced strings: 3
 *   insn=0x0000000000234614 string=0x0000000000234618 "B"
 *   insn=0x0000000000234624 string=0x00000000001F38A0 "P'"
 *   insn=0x0000000000234634 string=0x0000000000234638 "&/"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PropertiesComponent::RegisterInterfaces(
        Caver::PropertiesComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::PropertiesComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

