/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F97B4
 * Mangled: _ZN5Caver5Proto14ObjectTemplate21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::ObjectTemplate::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 3
 *   insn=0x00000000002F97BC string=0x00000000002F97C0 "t"
 *   insn=0x00000000002F97CC string=0x00000000002F97D0 "h"
 *   insn=0x00000000002F97D0 string=0x00000000002F97DC "h\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Proto *__fastcall Caver::Proto::ObjectTemplate::InitAsDefaultInstance(Caver::Proto *this)
{
  Caver::Proto *v1; // x19
  __int64 v2; // x8

  v1 = this;
  v2 = Caver::Proto::SceneObject::default_instance_;
  if ( !Caver::Proto::SceneObject::default_instance_ )
  {
    this = (Caver::Proto *)Caver::Proto::protobuf_AddDesc_Scene_2eproto(this);
    v2 = Caver::Proto::SceneObject::default_instance_;
  }
  *((_QWORD *)v1 + 2) = v2;
  return this;
}

