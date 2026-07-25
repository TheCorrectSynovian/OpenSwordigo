/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFE30
 * Mangled: ._ZN5Caver16SkeletonInstance16InitWithSkeletonERKN5boost10shared_ptrIKNS_8SkeletonEEE
 * Demangled: Caver::SkeletonInstance::InitWithSkeleton(boost::shared_ptr<Caver::Skeleton const> const&)
 *
 * Callers: 1
 *   0x000000000044AA1C  Caver::ModelInstance::InitWithModel(boost::shared_ptr<Caver::Model const> const&)
 *
 * Callees: 1
 *   0x0000000000450F00  Caver::SkeletonInstance::InitWithSkeleton(boost::shared_ptr<Caver::Skeleton const> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFE38 string=0x00000000001FFE3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::SkeletonInstance::InitWithSkeleton()
{
  return _ZN5Caver16SkeletonInstance16InitWithSkeletonERKN5boost10shared_ptrIKNS_8SkeletonEEE();
}

