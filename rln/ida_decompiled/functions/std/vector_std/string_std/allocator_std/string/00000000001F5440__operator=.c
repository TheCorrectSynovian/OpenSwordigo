/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5440
 * Mangled: ._ZNSt6vectorISsSaISsEEaSERKS1_
 * Demangled: std::vector<std::string,std::allocator<std::string>>::operator=(std::vector<std::string,std::allocator<std::string>> const&)
 *
 * Callers: 1
 *   0x000000000042647C  Caver::MapView::AddPathToSprite(Caver::Sprite *,boost::shared_ptr<Caver::MapPath> const&,Caver::Color,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callees: 1
 *   0x0000000000428DF4  std::vector<std::string,std::allocator<std::string>>::operator=(std::vector<std::string,std::allocator<std::string>> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5448 string=0x00000000001F544C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::vector<std::string>::operator=()
{
  return _ZNSt6vectorISsSaISsEEaSERKS1_();
}

