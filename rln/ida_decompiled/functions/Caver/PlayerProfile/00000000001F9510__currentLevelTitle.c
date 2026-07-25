/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9510
 * Mangled: ._ZN5Caver13PlayerProfile17currentLevelTitleEv
 * Demangled: Caver::PlayerProfile::currentLevelTitle(void)
 *
 * Callers: 2
 *   0x000000000039AC98  Caver::ProfilePanelView::InitWithProfile(boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x00000000003C0F08  Caver::PlayerProfile::SaveToProtobufMessage(Caver::Proto::PlayerProfile *)
 *
 * Callees: 1
 *   0x000000000039AC98  Caver::ProfilePanelView::InitWithProfile(boost::shared_ptr<Caver::PlayerProfile> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9518 string=0x00000000001F951C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::PlayerProfile::currentLevelTitle(Caver::PlayerProfile *this)
{
  JUMPOUT(0x39C958);
}

