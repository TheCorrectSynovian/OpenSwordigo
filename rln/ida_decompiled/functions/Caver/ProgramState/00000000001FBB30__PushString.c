/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBB30
 * Mangled: ._ZN5Caver12ProgramState10PushStringERKSs
 * Demangled: Caver::ProgramState::PushString(std::string const&)
 *
 * Callers: 13
 *   0x0000000000234110  sub_234110
 *   0x000000000026307C  Caver::CollectableItemComponent::HandleCollection(void)
 *   0x0000000000263354  sub_263354
 *   0x000000000026360C  sub_26360C
 *   0x000000000026D894  sub_26D894
 *   0x0000000000279EBC  sub_279EBC
 *   0x00000000002B4B6C  sub_2B4B6C
 *   0x00000000003601E8  sub_3601E8
 *   0x0000000000362C58  sub_362C58
 *   0x0000000000475498  Caver::SceneObjectGroup::FinishLoad(void)
 *   0x0000000000476D9C  sub_476D9C
 *   0x00000000004D56A4  sub_4D56A4
 *   0x00000000004D5CF4  sub_4D5CF4
 *
 * Callees: 1
 *   0x00000000004C1A6C  Caver::ProgramState::PushString(std::string const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FBB34 string=0x00000000004C1A6C "!"
 *   insn=0x00000000001FBB38 string=0x00000000001FBB3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::ProgramState::PushString()
{
  return _ZN5Caver12ProgramState10PushStringERKSs();
}

