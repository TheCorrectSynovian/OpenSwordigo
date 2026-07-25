/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6B10
 * Mangled: ._ZN5Caver28TransformControllerComponentC2Ev
 * Demangled: Caver::TransformControllerComponent::TransformControllerComponent(void)
 *
 * Callers: 4
 *   0x000000000022EAB8  Caver::OverlayTextComponent::CombatTextFromObject(std::string const&,boost::intrusive_ptr<Caver::SceneObject> const&,Caver::Vector3 const&,float)
 *   0x00000000002303C4  Caver::PortalComponent::RegisterLibrary(void)
 *   0x00000000002507B8  Caver::TransformControllerComponent::Create(void)
 *   0x0000000000289C5C  Caver::MagicHookshotComponent::FindGrabbableObject(void)
 *
 * Callees: 1
 *   0x000000000024069C  Caver::TransformComponent::className(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6B18 string=0x00000000001F6B1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::TransformControllerComponent::TransformControllerComponent(
        Caver::TransformControllerComponent *this)
{
  JUMPOUT(0x2406F4);
}

