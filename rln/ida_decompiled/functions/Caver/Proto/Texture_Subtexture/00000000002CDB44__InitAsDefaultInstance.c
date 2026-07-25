/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CDB44
 * Mangled: _ZN5Caver5Proto18Texture_Subtexture21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::Texture_Subtexture::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FF6C0  Caver::Proto::protobuf_AddDesc_Common_2eproto(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000002CDB5C string=0x00000000002CDB60 "h"
 *   insn=0x00000000002CDB60 string=0x00000000002CDB6C "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Proto *__fastcall Caver::Proto::Texture_Subtexture::InitAsDefaultInstance(Caver::Proto *this)
{
  Caver::Proto *v1; // x19
  __int64 v2; // x8

  v1 = this;
  v2 = Caver::Proto::Rectangle::default_instance_;
  if ( !Caver::Proto::Rectangle::default_instance_ )
  {
    this = (Caver::Proto *)Caver::Proto::protobuf_AddDesc_Common_2eproto(this);
    v2 = Caver::Proto::Rectangle::default_instance_;
  }
  *((_QWORD *)v1 + 3) = v2;
  return this;
}

