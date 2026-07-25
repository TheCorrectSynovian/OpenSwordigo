/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF6E0
 * Mangled: ._ZN5boost10shared_ptrIN5Caver19PauseViewControllerEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::PauseViewController>::shared_ptr<Caver::PauseViewController>(Caver::PauseViewController *)
 *
 * Callers: 1
 *   0x0000000000354488  Caver::GameViewController::UpdateGuideTarget(bool)
 *
 * Callees: 1
 *   0x0000000000354488  Caver::GameViewController::UpdateGuideTarget(bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF6E8 string=0x00000000001FF6EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::shared_ptr<Caver::PauseViewController>::shared_ptr<Caver::PauseViewController>()
{
  JUMPOUT(0x356958);
}

