/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D16DC
 * Mangled: _ZN5Caver5Proto18Texture_Subtexture16default_instanceEv
 * Demangled: Caver::Proto::Texture_Subtexture::default_instance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FF6C0  Caver::Proto::protobuf_AddDesc_Common_2eproto(void)
 *
 * Referenced strings: 4
 *   insn=0x00000000002D16E8 string=0x00000000002D16EC "s.D"
 *   insn=0x00000000002D16EC string=0x00000000002D16F0 "`"
 *   insn=0x00000000002D16F0 string=0x00000000002D16F4 "`"
 *   insn=0x00000000002D16F8 string=0x00000000002D16FC "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Texture_Subtexture::default_instance(Caver::Proto::Texture_Subtexture *this)
{
  __int64 result; // x0

  result = Caver::Proto::Texture_Subtexture::default_instance_;
  if ( !Caver::Proto::Texture_Subtexture::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Common_2eproto(0);
    return Caver::Proto::Texture_Subtexture::default_instance_;
  }
  return result;
}

