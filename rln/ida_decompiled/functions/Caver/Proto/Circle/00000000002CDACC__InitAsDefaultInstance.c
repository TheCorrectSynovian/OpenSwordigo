/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CDACC
 * Mangled: _ZN5Caver5Proto6Circle21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::Circle::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FF6C0  Caver::Proto::protobuf_AddDesc_Common_2eproto(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000002CDAE4 string=0x00000000002CDAE8 "h"
 *   insn=0x00000000002CDAE8 string=0x00000000002CDAF4 "h\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Proto *__fastcall Caver::Proto::Circle::InitAsDefaultInstance(Caver::Proto *this)
{
  Caver::Proto *v1; // x19
  __int64 v2; // x8

  v1 = this;
  v2 = Caver::Proto::Vector2::default_instance_;
  if ( !Caver::Proto::Vector2::default_instance_ )
  {
    this = (Caver::Proto *)Caver::Proto::protobuf_AddDesc_Common_2eproto(this);
    v2 = Caver::Proto::Vector2::default_instance_;
  }
  *((_QWORD *)v1 + 2) = v2;
  return this;
}

