/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF980
 * Mangled: ._ZN5Caver12AnimKeysNode24CreateBufferIfNeccessaryEv
 * Demangled: Caver::AnimKeysNode::CreateBufferIfNeccessary(void)
 *
 * Callers: 1
 *   0x000000000021FDFC  Caver::KeyframeAnimationComponent::LoadAnimation(void)
 *
 * Callees: 1
 *   0x0000000000212E94  Caver::AnimKeysNode::CreateBufferIfNeccessary(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FF984 string=0x0000000000212E94 ""
 *   insn=0x00000000001FF988 string=0x00000000001FF98C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AnimKeysNode::CreateBufferIfNeccessary(Caver::AnimKeysNode *this)
{
  return _ZN5Caver12AnimKeysNode24CreateBufferIfNeccessaryEv(this);
}

