/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CDB80
 * Mangled: _ZN5Caver5Proto4Font21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::Font::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FF6C0  Caver::Proto::protobuf_AddDesc_Common_2eproto(void)
 *
 * Referenced strings: 4
 *   insn=0x00000000002CDB98 string=0x00000000002CDB9C "h"
 *   insn=0x00000000002CDB9C string=0x00000000002CDBA8 "h"
 *   insn=0x00000000002CDBB4 string=0x00000000002CDBB8 "h"
 *   insn=0x00000000002CDBB8 string=0x00000000002CDBC4 "h6"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Proto *__fastcall Caver::Proto::Font::InitAsDefaultInstance(Caver::Proto *this)
{
  Caver::Proto *v1; // x19
  __int64 v2; // x8
  __int64 v3; // x8

  v1 = this;
  v2 = Caver::Proto::Texture::default_instance_;
  if ( !Caver::Proto::Texture::default_instance_ )
  {
    this = (Caver::Proto *)Caver::Proto::protobuf_AddDesc_Common_2eproto(this);
    v2 = Caver::Proto::Texture::default_instance_;
  }
  *((_QWORD *)v1 + 3) = v2;
  v3 = Caver::Proto::Rectangle::default_instance_;
  if ( !Caver::Proto::Rectangle::default_instance_ )
  {
    this = (Caver::Proto *)Caver::Proto::protobuf_AddDesc_Common_2eproto(this);
    v3 = Caver::Proto::Rectangle::default_instance_;
  }
  *((_QWORD *)v1 + 13) = v3;
  return this;
}

