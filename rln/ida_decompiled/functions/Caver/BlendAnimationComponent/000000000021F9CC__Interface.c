/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021F9CC
 * Mangled: _ZN5Caver23BlendAnimationComponent9InterfaceEv
 * Demangled: Caver::BlendAnimationComponent::Interface(void)
 *
 * Callers: 4
 *   0x000000000021F880  Caver::BlendAnimationComponent::ImplementsInterface(long)
 *   0x000000000021F8A8  Caver::BlendAnimationComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x000000000021F9CC  Caver::BlendAnimationComponent::Interface(void)
 *   0x000000000029FFA8  Caver::SnappingMonsterControllerComponent::className(void)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x000000000021F9D0 string=0x000000000021F9CC " &"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall *__fastcall Caver::BlendAnimationComponent::Interface(
        Caver::BlendAnimationComponent *this))(Caver::BlendAnimationComponent *__hidden this)
{
  return Caver::BlendAnimationComponent::Interface;
}

