/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDDD0
 * Mangled: ._ZN5Caver16FileExistsAtPathERKSs
 * Demangled: Caver::FileExistsAtPath(std::string const&)
 *
 * Callers: 16
 *   0x00000000003B45E8  Caver::GameOptions::LoadFromFile(std::string const&)
 *   0x00000000003BFA90  Caver::PlayerProfile::ProfileExists(void)
 *   0x00000000003C0CE0  Caver::PlayerProfile::LoadFromPath(std::string const&,bool)
 *   0x000000000047D2A0  Caver::FindFileFromParentDirectories(std::string const&,std::string)
 *   0x000000000047D5C8  Caver::SubdirectoryWithName(std::string const&,std::string const&,bool)
 *   0x0000000000485AF4  Caver::SoundLibrary::EffectForName(std::string const&)
 *   0x0000000000489464  Caver::SaveByteBufferToFile(uchar const*,uint,std::string const&)
 *   0x00000000004B42F4  Caver::DocumentsDirectoryPath(void)
 *   0x00000000004B4670  Caver::CachesDirectoryPath(void)
 *   0x00000000004B4834  Caver::TemporaryDirectoryPath(void)
 *   0x00000000004B5178  Caver::PathForDocumentsDirectory(std::string const&,bool)
 *   0x00000000004B532C  Caver::PathForCachesDirectory(std::string const&,bool)
 *   0x00000000004C2658  Caver::Font::LoadFromFile(std::string const&)
 *   0x00000000004C8BF4  Caver::Texture::LoadFromProtobufMessage(Caver::Proto::Texture const&)
 *   0x00000000004CB944  Caver::Texture::InitWithFile(std::string const&,Caver::ImageType,float)
 *   0x00000000004CCB7C  Caver::TextureLibrary::SetTextureForName(std::string const&,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callees: 1
 *   0x00000000004B44B8  Caver::FileExistsAtPath(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDDD8 string=0x00000000001FDDDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::FileExistsAtPath()
{
  return _ZN5Caver16FileExistsAtPathERKSs();
}

