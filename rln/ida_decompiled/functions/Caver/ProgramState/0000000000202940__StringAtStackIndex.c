/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202940
 * Mangled: ._ZN5Caver12ProgramState18StringAtStackIndexEi
 * Demangled: Caver::ProgramState::StringAtStackIndex(int)
 *
 * Callers: 26
 *   0x000000000022B11C  sub_22B11C
 *   0x000000000022EAB8  Caver::OverlayTextComponent::CombatTextFromObject(std::string const&,boost::intrusive_ptr<Caver::SceneObject> const&,Caver::Vector3 const&,float)
 *   0x0000000000233EC0  sub_233EC0
 *   0x0000000000234110  sub_234110
 *   0x000000000023D568  Caver::TextBubbleComponent::HandleMessage(int,void *)
 *   0x00000000002634A8  sub_2634A8
 *   0x000000000026DA14  sub_26DA14
 *   0x0000000000279F40  sub_279F40
 *   0x000000000028F0B4  sub_28F0B4
 *   0x00000000002B4CF0  sub_2B4CF0
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
 *   0x0000000000468FF8  sub_468FF8
 *   0x0000000000469290  sub_469290
 *   0x00000000004770DC  sub_4770DC
 *   0x00000000004821C8  Caver::MusicPlayer::RegisterProgramLibrary(Caver::ProgramState *)
 *   0x00000000004866A8  Caver::SoundLibrary::RegisterProgramLibrary(Caver::ProgramState *)
 *
 * Callees: 1
 *   0x00000000004C191C  Caver::ProgramState::StringAtStackIndex(int)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202948 string=0x000000000020294C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProgramState::StringAtStackIndex(Caver::ProgramState *this, int a2)
{
  return _ZN5Caver12ProgramState18StringAtStackIndexEi(this, a2);
}

