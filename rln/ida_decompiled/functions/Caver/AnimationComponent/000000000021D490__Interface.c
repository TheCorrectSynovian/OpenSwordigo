/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021D490
 * Mangled: _ZN5Caver18AnimationComponent9InterfaceEv
 * Demangled: Caver::AnimationComponent::Interface(void)
 *
 * Callers: 8
 *   0x000000000021D368  Caver::AnimationControllerComponent::className(void)
 *   0x000000000021D490  Caver::AnimationComponent::Interface(void)
 *   0x000000000021F2B8  Caver::BlendAnimationComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x000000000021F2D0  `non-virtual thunk to'Caver::BlendAnimationComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x000000000021F880  Caver::BlendAnimationComponent::ImplementsInterface(long)
 *   0x000000000021F8A8  Caver::BlendAnimationComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000221970  Caver::KeyframeAnimationComponent::ImplementsInterface(long)
 *   0x0000000000221998  Caver::KeyframeAnimationComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x000000000021D494 string=0x000000000021D490 " &"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall *__fastcall Caver::AnimationComponent::Interface(
        Caver::AnimationComponent *this))(Caver::AnimationComponent *__hidden this)
{
  return Caver::AnimationComponent::Interface;
}

