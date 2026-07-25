/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201730
 * Mangled: ._ZN5Caver15PortalComponent8ActivateEv
 * Demangled: Caver::PortalComponent::Activate(void)
 *
 * Callers: 3
 *   0x0000000000230E34  sub_230E34
 *   0x000000000027359C  Caver::HeroEntityComponent::HandleItemCollection(Caver::SceneObject *)
 *   0x000000000035A6D4  Caver::GameViewController::StoreViewControllerDismissed(Caver::StoreViewController *)
 *
 * Callees: 1
 *   0x00000000002303C4  Caver::PortalComponent::RegisterLibrary(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201738 string=0x000000000020173C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::PortalComponent::Activate(Caver::PortalComponent *this)
{
  JUMPOUT(0x230504);
}

