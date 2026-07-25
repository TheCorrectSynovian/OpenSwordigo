/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDF20
 * Mangled: ._ZN5boost6detail12shared_countC2IN5Caver11EntityClassEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::EntityClass>(Caver::EntityClass *)
 *
 * Callers: 1
 *   0x00000000003AF808  Caver::GameData::LoadFromProtobufMessage(Caver::Proto::GameData const&)
 *
 * Callees: 1
 *   0x00000000003B209C  boost::detail::shared_count::shared_count<Caver::EntityClass>(Caver::EntityClass *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDF28 string=0x00000000001FDF2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::detail::shared_count::shared_count<Caver::EntityClass>()
{
  return _ZN5boost6detail12shared_countC2IN5Caver11EntityClassEEEPT_();
}

