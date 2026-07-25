/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000233010
 * Mangled: _ZN5Caver16ProgramComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::ProgramComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000233044  Caver::ProgramComponent::className(void)
 *
 * Referenced strings: 2
 *   insn=0x000000000023301C string=0x0000000000233020 "B"
 *   insn=0x000000000023302C string=0x00000000001F38A0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProgramComponent::RegisterInterfaces(
        Caver::ProgramComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::ProgramComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

