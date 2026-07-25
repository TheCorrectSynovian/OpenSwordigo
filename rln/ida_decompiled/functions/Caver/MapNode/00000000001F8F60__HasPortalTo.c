/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8F60
 * Mangled: ._ZN5Caver7MapNode11HasPortalToERKSs
 * Demangled: Caver::MapNode::HasPortalTo(std::string const&)
 *
 * Callers: 1
 *   0x000000000042647C  Caver::MapView::AddPathToSprite(Caver::Sprite *,boost::shared_ptr<Caver::MapPath> const&,Caver::Color,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callees: 1
 *   0x00000000003BF160  Caver::MapNode::HasPortalTo(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8F68 string=0x00000000001F8F6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::MapNode::HasPortalTo()
{
  return _ZN5Caver7MapNode11HasPortalToERKSs();
}

