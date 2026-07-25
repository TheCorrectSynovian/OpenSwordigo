/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6C00
 * Mangled: ._ZN5boost6detail12shared_countC2IN5Caver7MapPathEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::MapPath>(Caver::MapPath *)
 *
 * Callers: 2
 *   0x00000000003BC240  Caver::Map::SaveToProtobufMessage(Caver::Proto::Map *)
 *   0x000000000042647C  Caver::MapView::AddPathToSprite(Caver::Sprite *,boost::shared_ptr<Caver::MapPath> const&,Caver::Color,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callees: 1
 *   0x00000000003BE8B8  boost::detail::shared_count::shared_count<Caver::MapPath>(Caver::MapPath *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6C08 string=0x00000000001F6C0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::detail::shared_count::shared_count<Caver::MapPath>()
{
  return _ZN5boost6detail12shared_countC2IN5Caver7MapPathEEEPT_();
}

