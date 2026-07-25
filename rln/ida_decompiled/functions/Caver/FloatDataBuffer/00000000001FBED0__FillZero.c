/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBED0
 * Mangled: ._ZN5Caver15FloatDataBuffer8FillZeroEv
 * Demangled: Caver::FloatDataBuffer::FillZero(void)
 *
 * Callers: 2
 *   0x0000000000213024  Caver::AnimKeysNode::Evaluate(void)
 *   0x00000000002130D4  Caver::AnimKeysNode::Evaluate(int,Caver::FloatDataTrack const*)
 *
 * Callees: 1
 *   0x0000000000213528  Caver::FloatDataBuffer::FillZero(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FBED4 string=0x0000000000213528 ""
 *   insn=0x00000000001FBED8 string=0x00000000001FBEDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::FloatDataBuffer::FillZero(Caver::FloatDataBuffer *this)
{
  return _ZN5Caver15FloatDataBuffer8FillZeroEv(this);
}

