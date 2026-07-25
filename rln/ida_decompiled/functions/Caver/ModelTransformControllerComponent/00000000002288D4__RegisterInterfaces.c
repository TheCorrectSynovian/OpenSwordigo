/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002288D4
 * Mangled: _ZN5Caver33ModelTransformControllerComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::ModelTransformControllerComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000228978  Caver::ModelTransformControllerComponent::Interface(void)
 *
 * Referenced strings: 3
 *   insn=0x00000000002288E0 string=0x00000000002288E4 "B"
 *   insn=0x00000000002288F0 string=0x00000000001F38A0 "P'"
 *   insn=0x0000000000228900 string=0x0000000000228904 "s^"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ModelTransformControllerComponent::RegisterInterfaces(
        Caver::ModelTransformControllerComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::ModelTransformControllerComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

