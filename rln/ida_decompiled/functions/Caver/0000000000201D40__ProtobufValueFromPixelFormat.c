/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201D40
 * Mangled: ._ZN5Caver28ProtobufValueFromPixelFormatENS_11PixelFormatE
 * Demangled: Caver::ProtobufValueFromPixelFormat(Caver::PixelFormat)
 *
 * Callers: 2
 *   0x00000000004C9694  Caver::Texture::SaveToProtobufMessage(Caver::Proto::Texture *)
 *   0x00000000004CC21C  Caver::TextureConversionInfo::SaveToProtobufMessage(Caver::Proto::Texture_ConversionInfo *)
 *
 * Callees: 1
 *   0x0000000000489FD0  Caver::ProtobufValueFromPixelFormat(Caver::PixelFormat)
 *
 * Referenced strings: 2
 *   insn=0x0000000000201D44 string=0x0000000000489FD0 ""
 *   insn=0x0000000000201D48 string=0x0000000000201D4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::ProtobufValueFromPixelFormat()
{
  return _ZN5Caver28ProtobufValueFromPixelFormatENS_11PixelFormatE();
}

