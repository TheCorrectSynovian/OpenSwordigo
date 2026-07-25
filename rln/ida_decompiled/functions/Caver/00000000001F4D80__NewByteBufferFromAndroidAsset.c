/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4D80
 * Mangled: ._ZN5Caver29NewByteBufferFromAndroidAssetERKSsPj
 * Demangled: Caver::NewByteBufferFromAndroidAsset(std::string const&,uint *)
 *
 * Callers: 5
 *   0x000000000044DEB4  Caver::ReadPODModelFromFile(CPVRTModelPOD *,std::string const&)
 *   0x000000000044DF50  Caver::PODLoader::ReadModelFromFile(std::string const&)
 *   0x000000000044FAE4  Caver::PODLoader::CreateAnimationFromFile(std::string const&)
 *   0x0000000000488F20  boost::detail::lexical_stream_limited_src<char,std::basic_streambuf<char,std::char_traits<char>>,std::char_traits<char>>::operator>><float>(float &)
 *   0x00000000004C9900  Caver::Texture::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callees: 1
 *   0x00000000004B4254  Caver::NewByteBufferFromAndroidAsset(std::string const&,uint *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4D88 string=0x00000000001F4D8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::NewByteBufferFromAndroidAsset()
{
  return _ZN5Caver29NewByteBufferFromAndroidAssetERKSsPj();
}

