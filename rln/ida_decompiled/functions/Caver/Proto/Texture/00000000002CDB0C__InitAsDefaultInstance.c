/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CDB0C
 * Mangled: _ZN5Caver5Proto7Texture21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::Texture::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FF6C0  Caver::Proto::protobuf_AddDesc_Common_2eproto(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000002CDB24 string=0x00000000002CDB28 "h"
 *   insn=0x00000000002CDB28 string=0x00000000002CDB34 "h2"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Proto *__fastcall Caver::Proto::Texture::InitAsDefaultInstance(Caver::Proto *this)
{
  Caver::Proto *v1; // x19
  __int64 v2; // x8

  v1 = this;
  v2 = Caver::Proto::Texture_ConversionInfo::default_instance_;
  if ( !Caver::Proto::Texture_ConversionInfo::default_instance_ )
  {
    this = (Caver::Proto *)Caver::Proto::protobuf_AddDesc_Common_2eproto(this);
    v2 = Caver::Proto::Texture_ConversionInfo::default_instance_;
  }
  *((_QWORD *)v1 + 12) = v2;
  return this;
}

