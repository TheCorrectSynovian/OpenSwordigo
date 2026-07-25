/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000236C6C
 * Mangled: _ZN5Caver21ShadowVolumeComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::ShadowVolumeComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000236CA8  Caver::ShadowVolumeComponent::className(void)
 *
 * Referenced strings: 4
 *   insn=0x0000000000236C74 string=0x0000000000236C78 "b%"
 *   insn=0x0000000000236C78 string=0x0000000000236C7C "B\F"
 *   insn=0x0000000000236C7C string=0x0000000000236D00 "`%"
 *   insn=0x0000000000236C88 string=0x00000000001F38A0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ShadowVolumeComponent::RegisterInterfaces(
        Caver::ShadowVolumeComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::ShadowVolumeComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

