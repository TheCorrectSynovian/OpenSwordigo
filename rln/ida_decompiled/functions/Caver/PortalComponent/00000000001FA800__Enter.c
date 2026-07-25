/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA800
 * Mangled: ._ZN5Caver15PortalComponent5EnterEv
 * Demangled: Caver::PortalComponent::Enter(void)
 *
 * Callers: 3
 *   0x00000000002303C4  Caver::PortalComponent::RegisterLibrary(void)
 *   0x0000000000230CB8  Caver::DidEnterPortalGameEvent::DidEnterPortalGameEvent(std::string const&,std::string const&)
 *   0x000000000034BC24  Caver::GameSceneController::GameControlButtonDown(Caver::GameControlButton)
 *
 * Callees: 1
 *   0x00000000002303C4  Caver::PortalComponent::RegisterLibrary(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA808 string=0x00000000001FA80C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::PortalComponent::Enter(Caver::PortalComponent *this)
{
  JUMPOUT(0x230BDC);
}

