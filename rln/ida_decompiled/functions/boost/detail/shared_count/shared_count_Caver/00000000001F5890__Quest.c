/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5890
 * Mangled: ._ZN5boost6detail12shared_countC2IN5Caver5QuestEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::Quest>(Caver::Quest *)
 *
 * Callers: 1
 *   0x00000000003AF808  Caver::GameData::LoadFromProtobufMessage(Caver::Proto::GameData const&)
 *
 * Callees: 1
 *   0x00000000003B1E10  boost::detail::shared_count::shared_count<Caver::Quest>(Caver::Quest *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5898 string=0x00000000001F589C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::detail::shared_count::shared_count<Caver::Quest>()
{
  return _ZN5boost6detail12shared_countC2IN5Caver5QuestEEEPT_();
}

