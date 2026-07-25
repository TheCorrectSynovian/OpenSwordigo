/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC5A0
 * Mangled: ._ZN5Caver12ProgramState9PushFloatEf
 * Demangled: Caver::ProgramState::PushFloat(float)
 *
 * Callers: 29
 *   0x000000000021CCB8  Caver::AnimationControllerComponent::BlendToAnimationNode(boost::intrusive_ptr<Caver::AnimNode> const&,float)
 *   0x00000000002214E4  sub_2214E4
 *   0x000000000022157C  sub_22157C
 *   0x0000000000221654  sub_221654
 *   0x00000000002231BC  sub_2231BC
 *   0x000000000026D280  sub_26D280
 *   0x000000000026D2E4  sub_26D2E4
 *   0x000000000026D348  sub_26D348
 *   0x000000000026D418  sub_26D418
 *   0x000000000026D634  sub_26D634
 *   0x000000000027194C  sub_27194C
 *   0x00000000002AB9A4  sub_2AB9A4
 *   0x00000000004776C4  sub_4776C4
 *   0x0000000000477764  sub_477764
 *   0x0000000000477968  sub_477968
 *   0x00000000004D50DC  sub_4D50DC
 *   0x00000000004D5114  sub_4D5114
 *   0x00000000004D514C  sub_4D514C
 *   0x00000000004D53B0  sub_4D53B0
 *   0x00000000004D5428  sub_4D5428
 *   0x00000000004D548C  sub_4D548C
 *   0x00000000004D5510  sub_4D5510
 *   0x00000000004D5C04  sub_4D5C04
 *   0x00000000004D5C3C  sub_4D5C3C
 *   0x00000000004D5C74  sub_4D5C74
 *   0x00000000004D5CB4  sub_4D5CB4
 *   0x00000000004D5CF4  sub_4D5CF4
 *   0x00000000004D62A8  sub_4D62A8
 *   0x00000000004D62E0  sub_4D62E0
 *
 * Callees: 1
 *   0x00000000004C1A90  Caver::ProgramState::PushFloat(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC5A8 string=0x00000000001FC5AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProgramState::PushFloat(Caver::ProgramState *this, float a2)
{
  return _ZN5Caver12ProgramState9PushFloatEf(this, a2);
}

