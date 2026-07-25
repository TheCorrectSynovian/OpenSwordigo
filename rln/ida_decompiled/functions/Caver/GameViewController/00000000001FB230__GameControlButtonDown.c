/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB230
 * Mangled: ._ZN5Caver18GameViewController21GameControlButtonDownENS_17GameControlButtonE
 * Demangled: Caver::GameViewController::GameControlButtonDown(Caver::GameControlButton)
 *
 * Callers: 1
 *   0x000000000035AB64  boost::shared_ptr<Caver::SkillPickerViewController>::shared_ptr<Caver::SkillPickerViewController>(Caver::SkillPickerViewController *)
 *
 * Callees: 1
 *   0x000000000035A7C8  boost::shared_ptr<Caver::PortalViewController>::shared_ptr<Caver::PortalViewController>(Caver::PortalViewController *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB238 string=0x00000000001FB23C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GameViewController::GameControlButtonDown()
{
  JUMPOUT(0x35A8B0);
}

