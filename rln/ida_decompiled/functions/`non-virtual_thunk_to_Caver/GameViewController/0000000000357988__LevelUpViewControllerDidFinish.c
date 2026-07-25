/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000357988
 * Mangled: _ZThn96_N5Caver18GameViewController30LevelUpViewControllerDidFinishEPNS_21LevelUpViewControllerE
 * Demangled: `non-virtual thunk to'Caver::GameViewController::LevelUpViewControllerDidFinish(Caver::LevelUpViewController *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F7010  Caver::GUIViewController::DismissModalViewController(void)
 *   0x00000000001FDFD0  Caver::LevelUpViewController::NumPointsForAttribute(Caver::CharacterAttribute)
 *   0x00000000001FF4D0  Caver::ExperienceBar::UpdateExperience(void)
 *   0x0000000000202AF0  Caver::GameSceneController::ApplyLevelUp(int,int,int)
 *
 * Referenced strings: 4
 *   insn=0x00000000003579B4 string=0x00000000001FDFD0 "0'"
 *   insn=0x00000000003579E4 string=0x00000000003579E8 "B"
 *   insn=0x00000000003579EC string=0x00000000003579F0 ""
 *   insn=0x0000000000357A10 string=0x00000000001F7010 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::GameViewController::LevelUpViewControllerDidFinish(
        Caver::GameViewController *this,
        Caver::LevelUpViewController *a2)
{
  Caver::GameSceneController *v3; // x21
  int v4; // w23
  int v5; // w24
  int v6; // w0

  v3 = (Caver::GameSceneController *)*((_QWORD *)this + 13);
  v4 = Caver::LevelUpViewController::NumPointsForAttribute();
  v5 = Caver::LevelUpViewController::NumPointsForAttribute();
  v6 = Caver::LevelUpViewController::NumPointsForAttribute();
  Caver::GameSceneController::ApplyLevelUp(v3, v4, v5, v6);
  Caver::ExperienceBar::UpdateExperience(*(Caver::ExperienceBar **)(*(_QWORD *)(*((_QWORD *)this + 15) + 256LL) + 536LL));
  return Caver::GUIViewController::DismissModalViewController((Caver::GameViewController *)((char *)this - 96));
}

