/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021D49C
 * Mangled: _ZN5Caver28AnimationControllerComponent9InterfaceEv
 * Demangled: Caver::AnimationControllerComponent::Interface(void)
 *
 * Callers: 7
 *   0x000000000021CCB8  Caver::AnimationControllerComponent::BlendToAnimationNode(boost::intrusive_ptr<Caver::AnimNode> const&,float)
 *   0x000000000021D2F0  Caver::AnimationControllerComponent::ImplementsInterface(long)
 *   0x000000000021D304  Caver::AnimationControllerComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x000000000021D49C  Caver::AnimationControllerComponent::Interface(void)
 *   0x0000000000258AB4  Caver::CharAnimControllerComponent::ImplementsInterface(long)
 *   0x0000000000258ADC  Caver::CharAnimControllerComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x000000000026E58C  Caver::ComponentOutlet<Caver::AnimationControllerComponent>::Interface(void)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x000000000021D4A0 string=0x000000000021D49C " &"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall *__fastcall Caver::AnimationControllerComponent::Interface(
        Caver::AnimationControllerComponent *this))(Caver::AnimationControllerComponent *__hidden this)
{
  return Caver::AnimationControllerComponent::Interface;
}

