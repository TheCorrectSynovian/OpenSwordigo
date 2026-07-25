/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8BF0
 * Mangled: ._ZN5boost6detail12shared_countC2IN5Caver11GuideTargetEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::GuideTarget>(Caver::GuideTarget *)
 *
 * Callers: 1
 *   0x00000000003AF808  Caver::GameData::LoadFromProtobufMessage(Caver::Proto::GameData const&)
 *
 * Callees: 1
 *   0x00000000003B230C  boost::detail::shared_count::shared_count<Caver::GuideTarget>(Caver::GuideTarget *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8BF8 string=0x00000000001F8BFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::detail::shared_count::shared_count<Caver::GuideTarget>()
{
  return _ZN5boost6detail12shared_countC2IN5Caver11GuideTargetEEEPT_();
}

