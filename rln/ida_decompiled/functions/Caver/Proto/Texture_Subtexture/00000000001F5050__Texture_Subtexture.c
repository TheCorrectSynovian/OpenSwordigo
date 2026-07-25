/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5050
 * Mangled: ._ZN5Caver5Proto18Texture_SubtextureC2Ev
 * Demangled: Caver::Proto::Texture_Subtexture::Texture_Subtexture(void)
 *
 * Callers: 1
 *   0x00000000004C9694  Caver::Texture::SaveToProtobufMessage(Caver::Proto::Texture *)
 *
 * Callees: 1
 *   0x00000000002D120C  Caver::Proto::FloatColor::GetTypeName(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5058 string=0x00000000001F505C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Texture_Subtexture::Texture_Subtexture(Caver::Proto::Texture_Subtexture *this)
{
  JUMPOUT(0x2D1264);
}

