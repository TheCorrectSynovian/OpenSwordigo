/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5410
 * Mangled: ._ZN5Caver9PODLoaderC2Ev
 * Demangled: Caver::PODLoader::PODLoader(void)
 *
 * Callers: 1
 *   0x000000000044B5C4  Caver::ModelLibrary::ModelForName(std::string const&)
 *
 * Callees: 1
 *   0x000000000044DDF0  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5418 string=0x00000000001F541C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::PODLoader::PODLoader(Caver::PODLoader *this)
{
  JUMPOUT(0x44DE6C);
}

