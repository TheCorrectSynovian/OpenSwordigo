/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000221A40
 * Mangled: _ZN5Caver26KeyframeAnimationComponent9InterfaceEv
 * Demangled: Caver::KeyframeAnimationComponent::Interface(void)
 *
 * Callers: 4
 *   0x0000000000221970  Caver::KeyframeAnimationComponent::ImplementsInterface(long)
 *   0x0000000000221998  Caver::KeyframeAnimationComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000221A40  Caver::KeyframeAnimationComponent::Interface(void)
 *   0x0000000000258B24  Caver::CharAnimControllerComponent::className(void)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x0000000000221A44 string=0x0000000000221A40 " &"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall *__fastcall Caver::KeyframeAnimationComponent::Interface(
        Caver::KeyframeAnimationComponent *this))(Caver::KeyframeAnimationComponent *__hidden this)
{
  return Caver::KeyframeAnimationComponent::Interface;
}

