/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCCD0
 * Mangled: ._ZN5Caver11TargetFrame13SetTargetInfoERKSsib
 * Demangled: Caver::TargetFrame::SetTargetInfo(std::string const&,int,bool)
 *
 * Callers: 1
 *   0x000000000034AAE4  Caver::GameSceneController::HandleGameEvent(Caver::GameEvent const&)
 *
 * Callees: 1
 *   0x00000000003E3434  Caver::TargetFrame::SetTargetInfo(std::string const&,int,bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCCD8 string=0x00000000001FCCDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::TargetFrame::SetTargetInfo()
{
  return _ZN5Caver11TargetFrame13SetTargetInfoERKSsib();
}

