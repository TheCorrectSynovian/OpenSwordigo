/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8900
 * Mangled: ._ZN5Caver23DidEnterPortalGameEventC2ERKSsS2_
 * Demangled: Caver::DidEnterPortalGameEvent::DidEnterPortalGameEvent(std::string const&,std::string const&)
 *
 * Callers: 4
 *   0x00000000002303C4  Caver::PortalComponent::RegisterLibrary(void)
 *   0x0000000000357A14  Caver::GameViewController::PortalViewControllerDidGotoLevel(Caver::PortalViewController *,std::string const&)
 *   0x00000000003601E8  sub_3601E8
 *   0x000000000041F8C4  Caver::MapMenuPage::MapViewDidTapSelectedNode(Caver::MapView *)
 *
 * Callees: 1
 *   0x0000000000230CB8  Caver::DidEnterPortalGameEvent::DidEnterPortalGameEvent(std::string const&,std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8908 string=0x00000000001F890C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::DidEnterPortalGameEvent::DidEnterPortalGameEvent()
{
  return _ZN5Caver23DidEnterPortalGameEventC2ERKSsS2_();
}

