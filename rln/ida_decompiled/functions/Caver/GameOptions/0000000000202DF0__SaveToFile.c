/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202DF0
 * Mangled: ._ZN5Caver11GameOptions10SaveToFileEv
 * Demangled: Caver::GameOptions::SaveToFile(void)
 *
 * Callers: 9
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *   0x0000000000367C84  Caver::GuidePurchaseViewController::HandlePurchaseSuccess(void)
 *   0x0000000000393094  Caver::MainMenuView::ButtonPressed(void *,Caver::GUIEvent *)
 *   0x00000000003A9710  Caver::StoreController::IsGuideUnlockedCheck(void)
 *   0x00000000003A9A78  Caver::StoreController::IsCoinDoublerUnlockedCheck(void)
 *   0x00000000003A9DE0  Caver::StoreController::IsNoAdsUnlockedCheck(void)
 *   0x00000000003AA148  Caver::StoreController::IsProductUnlockedCheck(std::string const&)
 *   0x00000000003AA898  Caver::StoreController::ResetProductUnlocksToPurchases(void)
 *   0x0000000000439CFC  Caver::SettingsView::ButtonPressed(void *,Caver::GUIEvent *)
 *
 * Callees: 1
 *   0x00000000003B45E8  Caver::GameOptions::LoadFromFile(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202DF8 string=0x0000000000202DFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GameOptions::SaveToFile(Caver::GameOptions *this)
{
  JUMPOUT(0x3B4A18);
}

