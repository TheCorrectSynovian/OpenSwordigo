/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201640
 * Mangled: ._ZN5boost6detail12shared_countC2IN5Caver8SkeletonEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::Skeleton>(Caver::Skeleton *)
 *
 * Callers: 1
 *   0x000000000044E4FC  Caver::PODLoader::CreateSkeleton(void)
 *
 * Callees: 1
 *   0x00000000004507EC  boost::detail::shared_count::shared_count<Caver::Skeleton>(Caver::Skeleton *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201648 string=0x000000000020164C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::detail::shared_count::shared_count<Caver::Skeleton>()
{
  return _ZN5boost6detail12shared_countC2IN5Caver8SkeletonEEEPT_();
}

