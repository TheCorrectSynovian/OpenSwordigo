/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9480
 * Mangled: ._ZN5Caver7Texture54ConvertSubtextureCoordinatesToParentTextureCoordinatesERKNS_7Vector2E
 * Demangled: Caver::Texture::ConvertSubtextureCoordinatesToParentTextureCoordinates(Caver::Vector2 const&)
 *
 * Callers: 2
 *   0x000000000044EEB8  Caver::PODLoader::CreateMesh(int)
 *   0x00000000004CF834  Caver::TextureMapping::TexCoordForPosition(Caver::Vector3 const&)
 *
 * Callees: 1
 *   0x00000000004CC19C  Caver::Texture::ConvertSubtextureCoordinatesToParentTextureCoordinates(Caver::Vector2 const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F9484 string=0x00000000004CC19C " "
 *   insn=0x00000000001F9488 string=0x00000000001F948C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Texture::ConvertSubtextureCoordinatesToParentTextureCoordinates(
        Caver::Texture *this,
        const Caver::Vector2 *a2)
{
  return _ZN5Caver7Texture54ConvertSubtextureCoordinatesToParentTextureCoordinatesERKNS_7Vector2E(this, a2);
}

