/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201790
 * Mangled: ._ZN5Caver12AnimKeysNodeC2Ev
 * Demangled: Caver::AnimKeysNode::AnimKeysNode(void)
 *
 * Callers: 1
 *   0x000000000021F9D8  Caver::KeyframeAnimationComponent::KeyframeAnimationComponent(void)
 *
 * Callees: 1
 *   0x0000000000212DAC  Caver::AnimKeysNode::AnimKeysNode(void)
 *
 * Referenced strings: 2
 *   insn=0x0000000000201794 string=0x0000000000212DAC ""
 *   insn=0x0000000000201798 string=0x000000000020179C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AnimKeysNode::AnimKeysNode(Caver::AnimKeysNode *this)
{
  return _ZN5Caver12AnimKeysNodeC2Ev(this);
}

