/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002017A0
 * Mangled: ._ZN5Caver18GameViewController25ScheduleGuideTargetUpdateEv
 * Demangled: Caver::GameViewController::ScheduleGuideTargetUpdate(void)
 *
 * Callers: 2
 *   0x000000000035B604  Caver::GameViewController::AddItemToCharacter(boost::shared_ptr<Caver::Item> const&)
 *   0x000000000035EB00  sub_35EB00
 *
 * Callees: 1
 *   0x000000000035B3DC  Caver::GameViewController::ScheduleGuideTargetUpdate(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002017A8 string=0x00000000002017AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GameViewController::ScheduleGuideTargetUpdate(Caver::GameViewController *this)
{
  return _ZN5Caver18GameViewController25ScheduleGuideTargetUpdateEv(this);
}

