/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021F8A8
 * Mangled: _ZN5Caver23BlendAnimationComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::BlendAnimationComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x000000000021D490  Caver::AnimationComponent::Interface(void)
 *   0x000000000021F9CC  Caver::BlendAnimationComponent::Interface(void)
 *
 * Referenced strings: 8
 *   insn=0x000000000021F8B0 string=0x000000000021F8B4 ""&"
 *   insn=0x000000000021F8B4 string=0x000000000021F8B8 "B@G"
 *   insn=0x000000000021F8B8 string=0x000000000021F9CC " &"
 *   insn=0x000000000021F8C4 string=0x000000000021F8C8 ""&"
 *   insn=0x000000000021F8C4 string=0x00000000001F38A0 "P'"
 *   insn=0x000000000021F8C8 string=0x000000000021F8CC "B(F"
 *   insn=0x000000000021F8CC string=0x000000000021D490 " &"
 *   insn=0x000000000021F8E8 string=0x000000000021F8EC "y"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::BlendAnimationComponent::RegisterInterfaces(
        Caver::BlendAnimationComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::BlendAnimationComponent::Interface);
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::AnimationComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

