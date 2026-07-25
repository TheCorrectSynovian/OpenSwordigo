/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9F60
 * Mangled: ._ZN5Caver21TextureConversionInfo23LoadFromProtobufMessageERKNS_5Proto22Texture_ConversionInfoE
 * Demangled: Caver::TextureConversionInfo::LoadFromProtobufMessage(Caver::Proto::Texture_ConversionInfo const&)
 *
 * Callers: 1
 *   0x00000000004C8BF4  Caver::Texture::LoadFromProtobufMessage(Caver::Proto::Texture const&)
 *
 * Callees: 1
 *   0x00000000004CC1C0  Caver::TextureConversionInfo::LoadFromProtobufMessage(Caver::Proto::Texture_ConversionInfo const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9F68 string=0x00000000001F9F6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::TextureConversionInfo::LoadFromProtobufMessage(
        Caver::TextureConversionInfo *this,
        const Caver::Proto::Texture_ConversionInfo *a2)
{
  return _ZN5Caver21TextureConversionInfo23LoadFromProtobufMessageERKNS_5Proto22Texture_ConversionInfoE(this, a2);
}

