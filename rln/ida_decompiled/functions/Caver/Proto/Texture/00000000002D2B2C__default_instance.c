/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D2B2C
 * Mangled: _ZN5Caver5Proto7Texture16default_instanceEv
 * Demangled: Caver::Proto::Texture::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001FC970  Caver::Proto::Texture::default_instance(void)
 *
 * Callees: 1
 *   0x00000000001FF6C0  Caver::Proto::protobuf_AddDesc_Common_2eproto(void)
 *
 * Referenced strings: 4
 *   insn=0x00000000002D2B38 string=0x00000000002D2B3C "s"
 *   insn=0x00000000002D2B3C string=0x00000000002D2B40 "`"
 *   insn=0x00000000002D2B40 string=0x00000000002D2B44 "`"
 *   insn=0x00000000002D2B48 string=0x00000000002D2B4C "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Texture::default_instance(Caver::Proto::Texture *this)
{
  __int64 result; // x0

  result = Caver::Proto::Texture::default_instance_;
  if ( !Caver::Proto::Texture::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Common_2eproto(0);
    return Caver::Proto::Texture::default_instance_;
  }
  return result;
}

