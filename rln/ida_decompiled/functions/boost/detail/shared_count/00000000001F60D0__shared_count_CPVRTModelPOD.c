/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F60D0
 * Mangled: ._ZN5boost6detail12shared_countC2I13CPVRTModelPODEEPT_
 * Demangled: boost::detail::shared_count::shared_count<CPVRTModelPOD>(CPVRTModelPOD *)
 *
 * Callers: 1
 *   0x000000000044DF50  Caver::PODLoader::ReadModelFromFile(std::string const&)
 *
 * Callees: 1
 *   0x00000000004504E8  boost::detail::shared_count::shared_count<CPVRTModelPOD>(CPVRTModelPOD *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F60D8 string=0x00000000001F60DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::detail::shared_count::shared_count<CPVRTModelPOD>()
{
  return _ZN5boost6detail12shared_countC2I13CPVRTModelPODEEPT_();
}

