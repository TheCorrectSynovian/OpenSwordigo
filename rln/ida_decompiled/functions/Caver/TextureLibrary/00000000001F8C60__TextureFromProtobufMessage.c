/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8C60
 * Mangled: ._ZN5Caver14TextureLibrary26TextureFromProtobufMessageERKNS_5Proto7TextureEb
 * Demangled: Caver::TextureLibrary::TextureFromProtobufMessage(Caver::Proto::Texture const&,bool)
 *
 * Callers: 3
 *   0x0000000000443F08  Caver::MeshMaterial::LoadFromProtobufMessage(Caver::Proto::MeshMaterial const&)
 *   0x00000000004C2658  Caver::Font::LoadFromFile(std::string const&)
 *   0x00000000004CCB7C  Caver::TextureLibrary::SetTextureForName(std::string const&,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callees: 1
 *   0x00000000004CCB7C  Caver::TextureLibrary::SetTextureForName(std::string const&,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8C68 string=0x00000000001F8C6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::TextureLibrary::TextureFromProtobufMessage(
        Caver::TextureLibrary *this,
        const Caver::Proto::Texture *a2)
{
  JUMPOUT(0x4CCCF0);
}

