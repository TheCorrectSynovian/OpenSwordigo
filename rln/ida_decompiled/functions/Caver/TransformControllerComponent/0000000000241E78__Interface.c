/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000241E78
 * Mangled: _ZN5Caver28TransformControllerComponent9InterfaceEv
 * Demangled: Caver::TransformControllerComponent::Interface(void)
 *
 * Callers: 12
 *   0x0000000000241318  sub_241318
 *   0x0000000000241434  sub_241434
 *   0x0000000000241574  sub_241574
 *   0x00000000002416CC  sub_2416CC
 *   0x0000000000241814  sub_241814
 *   0x0000000000241950  sub_241950
 *   0x0000000000241AA4  sub_241AA4
 *   0x0000000000241DC0  Caver::TransformControllerComponent::ImplementsInterface(long)
 *   0x0000000000241DD4  Caver::TransformControllerComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000241E78  Caver::TransformControllerComponent::Interface(void)
 *   0x0000000000289C5C  Caver::MagicHookshotComponent::FindGrabbableObject(void)
 *   0x000000000034AAE4  Caver::GameSceneController::HandleGameEvent(Caver::GameEvent const&)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x0000000000241E7C string=0x0000000000241E78 " %"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall *__fastcall Caver::TransformControllerComponent::Interface(
        Caver::TransformControllerComponent *this))(Caver::TransformControllerComponent *__hidden this)
{
  return Caver::TransformControllerComponent::Interface;
}

