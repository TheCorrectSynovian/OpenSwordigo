/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB8B0
 * Mangled: ._ZN5boost10shared_ptrIN5Caver18GameViewControllerEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::GameViewController>::shared_ptr<Caver::GameViewController>(Caver::GameViewController *)
 *
 * Callers: 4
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *   0x0000000000347EFC  Caver::GameOverViewController::ShowAdMaybe(void)
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *   0x000000000036E914  Caver::MainMenuViewController::ProfileSelectionViewControllerDidStart(Caver::ProfileSelectionView *,boost::shared_ptr<Caver::PlayerProfile> const&)
 *
 * Callees: 1
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB8B8 string=0x00000000001FB8BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::shared_ptr<Caver::GameViewController>::shared_ptr<Caver::GameViewController>()
{
  JUMPOUT(0x210AB4);
}

