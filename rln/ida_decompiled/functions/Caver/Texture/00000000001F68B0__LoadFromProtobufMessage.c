/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F68B0
 * Mangled: ._ZN5Caver7Texture23LoadFromProtobufMessageERKNS_5Proto7TextureE
 * Demangled: Caver::Texture::LoadFromProtobufMessage(Caver::Proto::Texture const&)
 *
 * Callers: 1
 *   0x00000000004CCB7C  Caver::TextureLibrary::SetTextureForName(std::string const&,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callees: 1
 *   0x00000000004C8BF4  Caver::Texture::LoadFromProtobufMessage(Caver::Proto::Texture const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F68B8 string=0x00000000001F68BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Texture::LoadFromProtobufMessage(Caver::Texture *this, const Caver::Proto::Texture *a2)
{
  return _ZN5Caver7Texture23LoadFromProtobufMessageERKNS_5Proto7TextureE(this, a2);
}

