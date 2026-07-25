/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9C50
 * Mangled: ._ZN5Caver15FloatDataBuffer10AccumulateERKS0_fRKNS_14FloatDataTrackE
 * Demangled: Caver::FloatDataBuffer::Accumulate(Caver::FloatDataBuffer const&,float,Caver::FloatDataTrack const&)
 *
 * Callers: 2
 *   0x0000000000212ACC  Caver::AnimBlendNode::Evaluate(int,Caver::FloatDataTrack const*)
 *   0x00000000002130D4  Caver::AnimKeysNode::Evaluate(int,Caver::FloatDataTrack const*)
 *
 * Callees: 1
 *   0x000000000021367C  Caver::FloatDataBuffer::Accumulate(Caver::FloatDataBuffer const&,float,Caver::FloatDataTrack const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F9C54 string=0x000000000021367C "H,@)L@"
 *   insn=0x00000000001F9C58 string=0x00000000001F9C5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::FloatDataBuffer::Accumulate()
{
  return _ZN5Caver15FloatDataBuffer10AccumulateERKS0_fRKNS_14FloatDataTrackE();
}

