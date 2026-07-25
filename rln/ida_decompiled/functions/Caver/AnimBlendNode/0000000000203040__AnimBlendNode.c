/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203040
 * Mangled: ._ZN5Caver13AnimBlendNodeC2Ev
 * Demangled: Caver::AnimBlendNode::AnimBlendNode(void)
 *
 * Callers: 2
 *   0x000000000021E4A0  Caver::BlendAnimationComponent::BlendAnimationComponent(void)
 *   0x000000000029235C  Caver::AttackComponent::Prepare(void)
 *
 * Callees: 1
 *   0x00000000002126E4  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::GameViewController,Caver::GameViewController>(boost::shared_ptr<Caver::GameViewController> const*,Caver::GameViewController *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203048 string=0x000000000020304C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::AnimBlendNode::AnimBlendNode(Caver::AnimBlendNode *this)
{
  JUMPOUT(0x212804);
}

