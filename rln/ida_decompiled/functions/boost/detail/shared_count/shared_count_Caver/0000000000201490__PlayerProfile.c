/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201490
 * Mangled: ._ZN5boost6detail12shared_countC2IN5Caver13PlayerProfileEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::PlayerProfile>(Caver::PlayerProfile *)
 *
 * Callers: 4
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *   0x00000000003A1538  Caver::ProfileSelectionView::ProfileSelectionView(void)
 *   0x00000000003A5F0C  Caver::ProfileManager::~ProfileManager()
 *   0x00000000004BBE60  Caver::ProfileManager_Android::HandleDownloadedProfileData(std::string const&)
 *
 * Callees: 1
 *   0x0000000000211D70  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::MainMenuViewController,Caver::MainMenuViewController>(boost::shared_ptr<Caver::MainMenuViewController> const*,Caver::MainMenuViewController *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201498 string=0x000000000020149C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::detail::shared_count::shared_count<Caver::PlayerProfile>()
{
  JUMPOUT(0x211E90);
}

