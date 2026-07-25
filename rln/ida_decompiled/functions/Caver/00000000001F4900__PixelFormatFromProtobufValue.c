/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4900
 * Mangled: ._ZN5Caver28PixelFormatFromProtobufValueENS_5Proto11PixelFormatE
 * Demangled: Caver::PixelFormatFromProtobufValue(Caver::Proto::PixelFormat)
 *
 * Callers: 2
 *   0x00000000004C8BF4  Caver::Texture::LoadFromProtobufMessage(Caver::Proto::Texture const&)
 *   0x00000000004CC1C0  Caver::TextureConversionInfo::LoadFromProtobufMessage(Caver::Proto::Texture_ConversionInfo const&)
 *
 * Callees: 1
 *   0x0000000000489FC0  Caver::PixelFormatFromProtobufValue(Caver::Proto::PixelFormat)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F4904 string=0x0000000000489FC0 ""
 *   insn=0x00000000001F4908 string=0x00000000001F490C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::PixelFormatFromProtobufValue()
{
  return _ZN5Caver28PixelFormatFromProtobufValueENS_5Proto11PixelFormatE();
}

