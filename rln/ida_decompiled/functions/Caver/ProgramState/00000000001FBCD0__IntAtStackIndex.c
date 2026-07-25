/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBCD0
 * Mangled: ._ZN5Caver12ProgramState15IntAtStackIndexEi
 * Demangled: Caver::ProgramState::IntAtStackIndex(int)
 *
 * Callers: 26
 *   0x000000000021B84C  sub_21B84C
 *   0x000000000021B8D0  sub_21B8D0
 *   0x000000000021CCB8  Caver::AnimationControllerComponent::BlendToAnimationNode(boost::intrusive_ptr<Caver::AnimNode> const&,float)
 *   0x0000000000221318  sub_221318
 *   0x00000000002213A0  sub_2213A0
 *   0x0000000000221428  sub_221428
 *   0x00000000002214E4  sub_2214E4
 *   0x000000000022157C  sub_22157C
 *   0x0000000000221654  sub_221654
 *   0x0000000000232C7C  sub_232C7C
 *   0x0000000000232D04  sub_232D04
 *   0x000000000026974C  sub_26974C
 *   0x000000000026CEBC  sub_26CEBC
 *   0x000000000026CFD0  sub_26CFD0
 *   0x000000000026D47C  sub_26D47C
 *   0x000000000026DC24  sub_26DC24
 *   0x000000000026DE84  sub_26DE84
 *   0x000000000027186C  sub_27186C
 *   0x0000000000271A94  sub_271A94
 *   0x0000000000279EBC  sub_279EBC
 *   0x0000000000279F40  sub_279F40
 *   0x00000000002AB9A4  sub_2AB9A4
 *   0x000000000035DC24  sub_35DC24
 *   0x00000000003601E8  sub_3601E8
 *   0x0000000000362C58  sub_362C58
 *   0x00000000004D623C  sub_4D623C
 *
 * Callees: 1
 *   0x00000000004C19AC  Caver::ProgramState::IntAtStackIndex(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBCD8 string=0x00000000001FBCDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProgramState::IntAtStackIndex(Caver::ProgramState *this, int a2)
{
  return _ZN5Caver12ProgramState15IntAtStackIndexEi(this, a2);
}

