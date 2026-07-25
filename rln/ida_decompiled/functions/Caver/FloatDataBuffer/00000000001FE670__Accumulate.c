/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE670
 * Mangled: ._ZN5Caver15FloatDataBuffer10AccumulateERKS0_f
 * Demangled: Caver::FloatDataBuffer::Accumulate(Caver::FloatDataBuffer const&,float)
 *
 * Callers: 3
 *   0x00000000002129E8  Caver::AnimBlendNode::Evaluate(void)
 *   0x0000000000213024  Caver::AnimKeysNode::Evaluate(void)
 *   0x00000000002130D4  Caver::AnimKeysNode::Evaluate(int,Caver::FloatDataTrack const*)
 *
 * Callees: 1
 *   0x00000000002135B8  Caver::FloatDataBuffer::Accumulate(Caver::FloatDataBuffer const&,float)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FE674 string=0x00000000002135B8 ""
 *   insn=0x00000000001FE678 string=0x00000000001FE67C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::FloatDataBuffer::Accumulate(
        Caver::FloatDataBuffer *this,
        const Caver::FloatDataBuffer *a2,
        float a3)
{
  return _ZN5Caver15FloatDataBuffer10AccumulateERKS0_f(this, a2, a3);
}

