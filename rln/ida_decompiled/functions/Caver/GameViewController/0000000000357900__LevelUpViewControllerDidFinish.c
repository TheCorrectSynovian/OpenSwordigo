/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000357900
 * Mangled: _ZN5Caver18GameViewController30LevelUpViewControllerDidFinishEPNS_21LevelUpViewControllerE
 * Demangled: Caver::GameViewController::LevelUpViewControllerDidFinish(Caver::LevelUpViewController *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F7010  Caver::GUIViewController::DismissModalViewController(void)
 *   0x00000000001FDFD0  Caver::LevelUpViewController::NumPointsForAttribute(Caver::CharacterAttribute)
 *   0x00000000001FF4D0  Caver::ExperienceBar::UpdateExperience(void)
 *   0x0000000000202AF0  Caver::GameSceneController::ApplyLevelUp(int,int,int)
 *
 * Referenced strings: 6
 *   insn=0x0000000000357914 string=0x0000000000357918 "tf@"
 *   insn=0x0000000000357928 string=0x00000000001FDFD0 "0'"
 *   insn=0x0000000000357958 string=0x000000000035795C "e"
 *   insn=0x000000000035795C string=0x0000000000357960 "hn@"
 *   insn=0x0000000000357960 string=0x0000000000357964 ""
 *   insn=0x0000000000357984 string=0x00000000001F7010 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameViewController::LevelUpViewControllerDidFinish(
        Caver::GameViewController *this,
        Caver::LevelUpViewController *a2)
{
  Caver::GameSceneController *v3; // x20
  int v4; // w22
  int v5; // w23
  int v6; // w0

  v3 = (Caver::GameSceneController *)*((_QWORD *)this + 25);
  v4 = Caver::LevelUpViewController::NumPointsForAttribute();
  v5 = Caver::LevelUpViewController::NumPointsForAttribute();
  v6 = Caver::LevelUpViewController::NumPointsForAttribute();
  Caver::GameSceneController::ApplyLevelUp(v3, v4, v5, v6);
  Caver::ExperienceBar::UpdateExperience(*(Caver::ExperienceBar **)(*(_QWORD *)(*((_QWORD *)this + 27) + 256LL) + 536LL));
  return Caver::GUIViewController::DismissModalViewController(this);
}

