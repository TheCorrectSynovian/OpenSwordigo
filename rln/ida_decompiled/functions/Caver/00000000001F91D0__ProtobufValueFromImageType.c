/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F91D0
 * Mangled: ._ZN5Caver26ProtobufValueFromImageTypeENS_9ImageTypeE
 * Demangled: Caver::ProtobufValueFromImageType(Caver::ImageType)
 *
 * Callers: 2
 *   0x00000000004C9694  Caver::Texture::SaveToProtobufMessage(Caver::Proto::Texture *)
 *   0x00000000004CC21C  Caver::TextureConversionInfo::SaveToProtobufMessage(Caver::Proto::Texture_ConversionInfo *)
 *
 * Callees: 1
 *   0x0000000000489FB0  Caver::ProtobufValueFromImageType(Caver::ImageType)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F91D4 string=0x0000000000489FB0 ""
 *   insn=0x00000000001F91D8 string=0x00000000001F91DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::ProtobufValueFromImageType()
{
  return _ZN5Caver26ProtobufValueFromImageTypeENS_9ImageTypeE();
}

