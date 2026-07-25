/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9F50
 * Mangled: ._ZN5Caver26ImageTypeFromProtobufValueENS_5Proto9ImageTypeE
 * Demangled: Caver::ImageTypeFromProtobufValue(Caver::Proto::ImageType)
 *
 * Callers: 1
 *   0x00000000004CC1C0  Caver::TextureConversionInfo::LoadFromProtobufMessage(Caver::Proto::Texture_ConversionInfo const&)
 *
 * Callees: 1
 *   0x0000000000489FA0  Caver::ImageTypeFromProtobufValue(Caver::Proto::ImageType)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F9F54 string=0x0000000000489FA0 ""
 *   insn=0x00000000001F9F58 string=0x00000000001F9F5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::ImageTypeFromProtobufValue()
{
  return _ZN5Caver26ImageTypeFromProtobufValueENS_5Proto9ImageTypeE();
}

