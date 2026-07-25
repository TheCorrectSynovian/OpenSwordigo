/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000221998
 * Mangled: _ZN5Caver26KeyframeAnimationComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::KeyframeAnimationComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x000000000021D490  Caver::AnimationComponent::Interface(void)
 *   0x0000000000221A40  Caver::KeyframeAnimationComponent::Interface(void)
 *
 * Referenced strings: 7
 *   insn=0x00000000002219A0 string=0x00000000002219A4 ""&"
 *   insn=0x00000000002219A4 string=0x00000000002219A8 "B"
 *   insn=0x00000000002219A8 string=0x0000000000221A40 " &"
 *   insn=0x00000000002219B4 string=0x00000000001F38A0 "P'"
 *   insn=0x00000000002219B8 string=0x00000000002219BC "B(F"
 *   insn=0x00000000002219BC string=0x000000000021D490 " &"
 *   insn=0x00000000002219D8 string=0x00000000002219DC "=z"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::KeyframeAnimationComponent::RegisterInterfaces(
        Caver::KeyframeAnimationComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::KeyframeAnimationComponent::Interface);
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::AnimationComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}

