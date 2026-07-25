/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002010B0
 * Mangled: ._ZN5boost6detail12shared_countC2IN5Caver4ItemEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::Item>(Caver::Item *)
 *
 * Callers: 2
 *   0x000000000039AC98  Caver::ProfilePanelView::InitWithProfile(boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x00000000003AF808  Caver::GameData::LoadFromProtobufMessage(Caver::Proto::GameData const&)
 *
 * Callees: 1
 *   0x00000000003A114C  boost::detail::shared_count::shared_count<Caver::Item>(Caver::Item *)
 *
 * Referenced strings: 1
 *   insn=0x00000000002010B8 string=0x00000000002010BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::detail::shared_count::shared_count<Caver::Item>()
{
  return _ZN5boost6detail12shared_countC2IN5Caver4ItemEEEPT_();
}

