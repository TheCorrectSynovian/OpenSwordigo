/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202AF0
 * Mangled: ._ZN5Caver19GameSceneController12ApplyLevelUpEiii
 * Demangled: Caver::GameSceneController::ApplyLevelUp(int,int,int)
 *
 * Callers: 2
 *   0x0000000000357900  Caver::GameViewController::LevelUpViewControllerDidFinish(Caver::LevelUpViewController *)
 *   0x0000000000357988  `non-virtual thunk to'Caver::GameViewController::LevelUpViewControllerDidFinish(Caver::LevelUpViewController *)
 *
 * Callees: 1
 *   0x000000000034AA00  Caver::GameSceneController::ApplyLevelUp(int,int,int)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202AF8 string=0x0000000000202AFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GameSceneController::ApplyLevelUp(Caver::GameSceneController *this, int a2, int a3, int a4)
{
  return _ZN5Caver19GameSceneController12ApplyLevelUpEiii(this, a2, a3, a4);
}

