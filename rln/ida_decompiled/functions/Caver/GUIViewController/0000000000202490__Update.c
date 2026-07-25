/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202490
 * Mangled: ._ZN5Caver17GUIViewController6UpdateEf
 * Demangled: Caver::GUIViewController::Update(float)
 *
 * Callers: 7
 *   0x0000000000347EA4  Caver::GameOverViewController::Update(float)
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *   0x000000000036C584  Caver::MainMenuViewController::Update(float)
 *   0x000000000037035C  Caver::PauseViewController::Update(float)
 *   0x00000000003A9064  Caver::ProfileManagerLoadingViewController::Update(float)
 *   0x00000000003F3CD8  Caver::StoreViewController::Update(float)
 *   0x000000000049923C  Caver::GUINavigationController::Update(float)
 *
 * Callees: 1
 *   0x00000000004A15E0  Caver::GUIViewController::DismissModalViewController(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202498 string=0x000000000020249C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GUIViewController::Update(Caver::GUIViewController *this, float a2)
{
  JUMPOUT(0x4A1810);
}

