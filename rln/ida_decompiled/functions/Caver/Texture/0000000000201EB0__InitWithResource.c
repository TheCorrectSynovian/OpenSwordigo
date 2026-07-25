/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201EB0
 * Mangled: ._ZN5Caver7Texture16InitWithResourceERKSsf
 * Demangled: Caver::Texture::InitWithResource(std::string const&,float)
 *
 * Callers: 2
 *   0x00000000004C8BF4  Caver::Texture::LoadFromProtobufMessage(Caver::Proto::Texture const&)
 *   0x00000000004CC494  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *
 * Callees: 1
 *   0x00000000004C8BF4  Caver::Texture::LoadFromProtobufMessage(Caver::Proto::Texture const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201EB8 string=0x0000000000201EBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Texture::InitWithResource()
{
  JUMPOUT(0x4C90B4);
}

