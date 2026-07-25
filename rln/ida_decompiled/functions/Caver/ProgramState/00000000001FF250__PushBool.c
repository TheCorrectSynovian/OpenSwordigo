/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF250
 * Mangled: ._ZN5Caver12ProgramState8PushBoolEb
 * Demangled: Caver::ProgramState::PushBool(bool)
 *
 * Callers: 26
 *   0x000000000021AE00  Caver::CollisionShapeComponent::SetDefaultShapeOfType(Caver::Shape::Type)
 *   0x000000000021B84C  sub_21B84C
 *   0x0000000000232D04  sub_232D04
 *   0x000000000023D990  sub_23D990
 *   0x000000000026360C  sub_26360C
 *   0x00000000002639E8  sub_2639E8
 *   0x0000000000266470  Caver::DamageComponent::HandleMessage(int,void *)
 *   0x00000000002697D4  sub_2697D4
 *   0x000000000026D5E0  sub_26D5E0
 *   0x000000000026D634  sub_26D634
 *   0x000000000026D7A0  sub_26D7A0
 *   0x00000000002719C8  sub_2719C8
 *   0x0000000000279D94  sub_279D94
 *   0x000000000027F8F0  sub_27F8F0
 *   0x000000000035B604  Caver::GameViewController::AddItemToCharacter(boost::shared_ptr<Caver::Item> const&)
 *   0x000000000035D214  sub_35D214
 *   0x000000000035DC24  sub_35DC24
 *   0x000000000035E640  sub_35E640
 *   0x000000000035E8A0  sub_35E8A0
 *   0x000000000035EB00  sub_35EB00
 *   0x000000000035FB04  sub_35FB04
 *   0x00000000003601E8  sub_3601E8
 *   0x0000000000458C10  Caver::CameraController::RegisterProgramLibrary(Caver::ProgramState *)
 *   0x0000000000476B80  sub_476B80
 *   0x0000000000476F04  sub_476F04
 *   0x0000000000476FBC  sub_476FBC
 *
 * Callees: 1
 *   0x00000000004C1A9C  Caver::ProgramState::PushBool(bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF258 string=0x00000000001FF25C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProgramState::PushBool(Caver::ProgramState *this, bool a2)
{
  return _ZN5Caver12ProgramState8PushBoolEb(this, a2);
}

