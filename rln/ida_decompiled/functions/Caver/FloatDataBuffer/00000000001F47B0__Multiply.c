/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F47B0
 * Mangled: ._ZN5Caver15FloatDataBuffer8MultiplyEf
 * Demangled: Caver::FloatDataBuffer::Multiply(float)
 *
 * Callers: 2
 *   0x00000000002129E8  Caver::AnimBlendNode::Evaluate(void)
 *   0x0000000000212ACC  Caver::AnimBlendNode::Evaluate(int,Caver::FloatDataTrack const*)
 *
 * Callees: 1
 *   0x000000000021353C  Caver::FloatDataBuffer::Multiply(float)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F47B4 string=0x000000000021353C ""
 *   insn=0x00000000001F47B8 string=0x00000000001F47BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::FloatDataBuffer::Multiply(Caver::FloatDataBuffer *this, float a2)
{
  return _ZN5Caver15FloatDataBuffer8MultiplyEf(this, a2);
}

