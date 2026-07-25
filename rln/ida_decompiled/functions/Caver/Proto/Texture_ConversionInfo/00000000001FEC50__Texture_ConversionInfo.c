/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEC50
 * Mangled: ._ZN5Caver5Proto22Texture_ConversionInfoC2Ev
 * Demangled: Caver::Proto::Texture_ConversionInfo::Texture_ConversionInfo(void)
 *
 * Callers: 1
 *   0x00000000004C9694  Caver::Texture::SaveToProtobufMessage(Caver::Proto::Texture *)
 *
 * Callees: 1
 *   0x00000000002D1C9C  Caver::Proto::Texture_Subtexture::GetTypeName(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEC58 string=0x00000000001FEC5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Texture_ConversionInfo::Texture_ConversionInfo(
        Caver::Proto::Texture_ConversionInfo *this)
{
  JUMPOUT(0x2D1CF4);
}

