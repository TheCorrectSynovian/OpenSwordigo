/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FABE0
 * Mangled: ._ZN5Caver12ProgramState17FloatAtStackIndexEi
 * Demangled: Caver::ProgramState::FloatAtStackIndex(int)
 *
 * Callers: 36
 *   0x000000000021CCB8  Caver::AnimationControllerComponent::BlendToAnimationNode(boost::intrusive_ptr<Caver::AnimNode> const&,float)
 *   0x0000000000221428  sub_221428
 *   0x000000000022157C  sub_22157C
 *   0x00000000002231BC  sub_2231BC
 *   0x00000000002283D8  sub_2283D8
 *   0x000000000023D568  Caver::TextBubbleComponent::HandleMessage(int,void *)
 *   0x000000000023FDA0  Caver::TouchableComponent::Trigger(void)
 *   0x0000000000241434  sub_241434
 *   0x0000000000241574  sub_241574
 *   0x00000000002416CC  sub_2416CC
 *   0x0000000000241814  sub_241814
 *   0x0000000000241950  sub_241950
 *   0x0000000000241AA4  sub_241AA4
 *   0x000000000026CEBC  sub_26CEBC
 *   0x000000000026CFD0  sub_26CFD0
 *   0x000000000026D0EC  sub_26D0EC
 *   0x000000000026D1D8  sub_26D1D8
 *   0x000000000026D3AC  sub_26D3AC
 *   0x000000000026DC24  sub_26DC24
 *   0x0000000000271A1C  sub_271A1C
 *   0x000000000027FA94  sub_27FA94
 *   0x000000000027FB18  sub_27FB18
 *   0x00000000002AB9A4  sub_2AB9A4
 *   0x00000000003601E8  sub_3601E8
 *   0x0000000000469290  sub_469290
 *   0x000000000047770C  sub_47770C
 *   0x00000000004777B8  sub_4777B8
 *   0x00000000004779B0  sub_4779B0
 *   0x00000000004821C8  Caver::MusicPlayer::RegisterProgramLibrary(Caver::ProgramState *)
 *   0x00000000004D4BE0  Caver::ProgramMath::PushVector3(Caver::ProgramState *,Caver::Vector3 const&)
 *   0x00000000004D505C  sub_4D505C
 *   0x00000000004D5320  sub_4D5320
 *   0x00000000004D56A4  sub_4D56A4
 *   0x00000000004D5CF4  sub_4D5CF4
 *   0x00000000004D62A8  sub_4D62A8
 *   0x00000000004D62E0  sub_4D62E0
 *
 * Callees: 1
 *   0x00000000004C19E4  Caver::ProgramState::FloatAtStackIndex(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FABE8 string=0x00000000001FABEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProgramState::FloatAtStackIndex(Caver::ProgramState *this, int a2)
{
  return _ZN5Caver12ProgramState17FloatAtStackIndexEi(this, a2);
}

