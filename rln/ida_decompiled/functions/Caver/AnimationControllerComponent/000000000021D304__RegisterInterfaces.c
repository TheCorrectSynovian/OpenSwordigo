/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021D304
 * Mangled: _ZN5Caver28AnimationControllerComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::AnimationControllerComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x000000000021D49C  Caver::AnimationControllerComponent::Interface(void)
 *
 * Referenced strings: 5
 *   insn=0x000000000021D30C string=0x000000000021D310 ""&"
 *   insn=0x000000000021D310 string=0x000000000021D314 "B"
 *   insn=0x000000000021D314 string=0x000000000021D49C " &"
 *   insn=0x000000000021D31C string=0x000000000021D320 "`Y"
 *   insn=0x000000000021D320 string=0x00000000001F38A0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AnimationControllerComponent::RegisterInterfaces(
        Caver::AnimationControllerComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::AnimationControllerComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

