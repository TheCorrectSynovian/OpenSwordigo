/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CDC2C
 * Mangled: _ZN5Caver5Proto13GUIViewLayout21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::GUIViewLayout::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FF6C0  Caver::Proto::protobuf_AddDesc_Common_2eproto(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000002CDC44 string=0x00000000002CDC48 "h"
 *   insn=0x00000000002CDC48 string=0x00000000002CDC54 "h*"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Proto *__fastcall Caver::Proto::GUIViewLayout::InitAsDefaultInstance(Caver::Proto *this)
{
  Caver::Proto *v1; // x19
  __int64 v2; // x8

  v1 = this;
  v2 = Caver::Proto::GUIMargins::default_instance_;
  if ( !Caver::Proto::GUIMargins::default_instance_ )
  {
    this = (Caver::Proto *)Caver::Proto::protobuf_AddDesc_Common_2eproto(this);
    v2 = Caver::Proto::GUIMargins::default_instance_;
  }
  *((_QWORD *)v1 + 10) = v2;
  return this;
}

