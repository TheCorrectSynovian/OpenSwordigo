/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FADC0
 * Mangled: ._ZNK5Caver21TextureConversionInfo21SaveToProtobufMessageEPNS_5Proto22Texture_ConversionInfoE
 * Demangled: Caver::TextureConversionInfo::SaveToProtobufMessage(Caver::Proto::Texture_ConversionInfo *)
 *
 * Callers: 1
 *   0x00000000004C9694  Caver::Texture::SaveToProtobufMessage(Caver::Proto::Texture *)
 *
 * Callees: 1
 *   0x00000000004CC21C  Caver::TextureConversionInfo::SaveToProtobufMessage(Caver::Proto::Texture_ConversionInfo *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FADC8 string=0x00000000001FADCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::TextureConversionInfo::SaveToProtobufMessage(
        Caver::TextureConversionInfo *this,
        Caver::Proto::Texture_ConversionInfo *a2)
{
  return _ZNK5Caver21TextureConversionInfo21SaveToProtobufMessageEPNS_5Proto22Texture_ConversionInfoE(this, a2);
}

