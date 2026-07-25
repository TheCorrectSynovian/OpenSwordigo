/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7760
 * Mangled: ._ZN5Caver18GameViewController13SaveGameStateEb
 * Demangled: Caver::GameViewController::SaveGameState(bool)
 *
 * Callers: 5
 *   0x0000000000354488  Caver::GameViewController::UpdateGuideTarget(bool)
 *   0x0000000000356B88  Caver::GameViewController::UnloadView(void)
 *   0x000000000035716C  Caver::GameViewController::GotoCredits(void)
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *   0x000000000035B604  Caver::GameViewController::AddItemToCharacter(boost::shared_ptr<Caver::Item> const&)
 *
 * Callees: 1
 *   0x000000000035299C  Caver::GameViewController::SaveGameState(bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7768 string=0x00000000001F776C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GameViewController::SaveGameState(Caver::GameViewController *this, bool a2)
{
  return _ZN5Caver18GameViewController13SaveGameStateEb(this, a2);
}

