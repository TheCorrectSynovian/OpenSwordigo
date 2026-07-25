/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE1A0
 * Mangled: ._ZNSt6vectorIN5boost13intrusive_ptrIN5Caver7TextureEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_
 * Demangled: std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture>*,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callers: 3
 *   0x000000000045DB98  Caver::ObjectLibrary::AddTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *   0x00000000004C8BF4  Caver::Texture::LoadFromProtobufMessage(Caver::Proto::Texture const&)
 *   0x00000000004CD7DC  Caver::TextureLibrary::RefreshUnusedTexturesList(void)
 *
 * Callees: 1
 *   0x000000000045FA58  std::vector<boost::intrusive_ptr<Caver::ObjectTemplate>,std::allocator<boost::intrusive_ptr<Caver::ObjectTemplate>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::ObjectTemplate>*,std::vector<boost::intrusive_ptr<Caver::ObjectTemplate>,std::allocator<boost::intrusive_ptr<Caver::ObjectTemplate>>>>,boost::intrusive_ptr<Caver::ObjectTemplate> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE1A8 string=0x00000000001FE1AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::vector<boost::intrusive_ptr<Caver::Texture>>::_M_insert_aux()
{
  JUMPOUT(0x45FD50);
}

