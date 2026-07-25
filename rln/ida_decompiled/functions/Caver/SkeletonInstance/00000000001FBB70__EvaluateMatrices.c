/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBB70
 * Mangled: ._ZN5Caver16SkeletonInstance16EvaluateMatricesEv
 * Demangled: Caver::SkeletonInstance::EvaluateMatrices(void)
 *
 * Callers: 1
 *   0x000000000044AA1C  Caver::ModelInstance::InitWithModel(boost::shared_ptr<Caver::Model const> const&)
 *
 * Callees: 1
 *   0x0000000000451190  Caver::SkeletonInstance::EvaluateMatrices(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBB78 string=0x00000000001FBB7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SkeletonInstance::EvaluateMatrices(Caver::SkeletonInstance *this)
{
  return _ZN5Caver16SkeletonInstance16EvaluateMatricesEv(this);
}

