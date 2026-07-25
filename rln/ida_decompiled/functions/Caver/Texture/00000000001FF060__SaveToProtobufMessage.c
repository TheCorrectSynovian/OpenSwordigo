/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF060
 * Mangled: ._ZNK5Caver7Texture21SaveToProtobufMessageEPNS_5Proto7TextureE
 * Demangled: Caver::Texture::SaveToProtobufMessage(Caver::Proto::Texture *)
 *
 * Callers: 2
 *   0x0000000000443F08  Caver::MeshMaterial::LoadFromProtobufMessage(Caver::Proto::MeshMaterial const&)
 *   0x00000000004C2658  Caver::Font::LoadFromFile(std::string const&)
 *
 * Callees: 1
 *   0x00000000004C9694  Caver::Texture::SaveToProtobufMessage(Caver::Proto::Texture *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF068 string=0x00000000001FF06C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Texture::SaveToProtobufMessage(Caver::Texture *this, Caver::Proto::Texture *a2)
{
  return _ZNK5Caver7Texture21SaveToProtobufMessageEPNS_5Proto7TextureE(this, a2);
}

