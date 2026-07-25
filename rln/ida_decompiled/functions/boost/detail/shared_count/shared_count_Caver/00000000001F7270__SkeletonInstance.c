/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7270
 * Mangled: ._ZN5boost6detail12shared_countC2IN5Caver16SkeletonInstanceEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::SkeletonInstance>(Caver::SkeletonInstance *)
 *
 * Callers: 1
 *   0x000000000044AA1C  Caver::ModelInstance::InitWithModel(boost::shared_ptr<Caver::Model const> const&)
 *
 * Callees: 1
 *   0x000000000044B2CC  boost::detail::shared_count::shared_count<Caver::SkeletonInstance>(Caver::SkeletonInstance *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7278 string=0x00000000001F727C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::detail::shared_count::shared_count<Caver::SkeletonInstance>()
{
  return _ZN5boost6detail12shared_countC2IN5Caver16SkeletonInstanceEEEPT_();
}

