/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200980
 * Mangled: ._ZN5Caver12ProgramTable13PointerForKeyERKSs
 * Demangled: Caver::ProgramTable::PointerForKey(std::string const&)
 *
 * Callers: 17
 *   0x000000000035B604  Caver::GameViewController::AddItemToCharacter(boost::shared_ptr<Caver::Item> const&)
 *   0x000000000035CF2C  sub_35CF2C
 *   0x000000000035D214  sub_35D214
 *   0x000000000035DC24  sub_35DC24
 *   0x000000000035E640  sub_35E640
 *   0x000000000035E8A0  sub_35E8A0
 *   0x000000000035EB00  sub_35EB00
 *   0x000000000035FB04  sub_35FB04
 *   0x000000000035FF9C  sub_35FF9C
 *   0x00000000003601E8  sub_3601E8
 *   0x0000000000362C58  sub_362C58
 *   0x000000000036332C  sub_36332C
 *   0x0000000000458C10  Caver::CameraController::RegisterProgramLibrary(Caver::ProgramState *)
 *   0x0000000000468FF8  sub_468FF8
 *   0x0000000000469290  sub_469290
 *   0x00000000004821C8  Caver::MusicPlayer::RegisterProgramLibrary(Caver::ProgramState *)
 *   0x00000000004866A8  Caver::SoundLibrary::RegisterProgramLibrary(Caver::ProgramState *)
 *
 * Callees: 1
 *   0x00000000004C2080  Caver::ProgramTable::PointerForKey(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200988 string=0x000000000020098C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::ProgramTable::PointerForKey()
{
  return _ZN5Caver12ProgramTable13PointerForKeyERKSs();
}

