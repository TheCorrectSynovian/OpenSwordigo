/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F73E0
 * Mangled: ._ZN5Caver15FloatDataBuffer6ResizeEi
 * Demangled: Caver::FloatDataBuffer::Resize(int)
 *
 * Callers: 4
 *   0x0000000000212E94  Caver::AnimKeysNode::CreateBufferIfNeccessary(void)
 *   0x0000000000213024  Caver::AnimKeysNode::Evaluate(void)
 *   0x00000000002130D4  Caver::AnimKeysNode::Evaluate(int,Caver::FloatDataTrack const*)
 *   0x000000000044FAE4  Caver::PODLoader::CreateAnimationFromFile(std::string const&)
 *
 * Callees: 1
 *   0x00000000002134D8  Caver::FloatDataBuffer::Resize(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F73E8 string=0x00000000001F73EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::FloatDataBuffer::Resize(Caver::FloatDataBuffer *this, int a2)
{
  return _ZN5Caver15FloatDataBuffer6ResizeEi(this, a2);
}

