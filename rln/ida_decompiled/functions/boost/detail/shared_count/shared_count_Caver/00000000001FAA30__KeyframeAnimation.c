/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAA30
 * Mangled: ._ZN5boost6detail12shared_countC2IN5Caver17KeyframeAnimationEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::KeyframeAnimation>(Caver::KeyframeAnimation *)
 *
 * Callers: 1
 *   0x000000000044FAE4  Caver::PODLoader::CreateAnimationFromFile(std::string const&)
 *
 * Callees: 1
 *   0x0000000000450A38  boost::detail::shared_count::shared_count<Caver::KeyframeAnimation>(Caver::KeyframeAnimation *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAA38 string=0x00000000001FAA3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::detail::shared_count::shared_count<Caver::KeyframeAnimation>()
{
  return _ZN5boost6detail12shared_countC2IN5Caver17KeyframeAnimationEEEPT_();
}

