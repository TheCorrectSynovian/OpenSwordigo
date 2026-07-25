/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CDBD4
 * Mangled: _ZN5Caver5Proto10Font_Glyph21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::Font_Glyph::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FF6C0  Caver::Proto::protobuf_AddDesc_Common_2eproto(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002CDBEC string=0x00000000002CDBF0 "h"
 *   insn=0x00000000002CDBF0 string=0x00000000002CDBF4 "h\n"
 *   insn=0x00000000002CDBF4 string=0x00000000002CDBF8 ""
 *   insn=0x00000000002CDBF8 string=0x00000000002CDC14 "h"
 *   insn=0x00000000002CDC00 string=0x00000000002CDC04 "h\n"
 *   insn=0x00000000002CDC04 string=0x00000000002CDC08 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::Proto::Font_Glyph::InitAsDefaultInstance(_QWORD *this)
{
  _QWORD *v1; // x19
  __int64 v2; // x8

  v1 = this;
  v2 = Caver::Proto::Rectangle::default_instance_;
  if ( Caver::Proto::Rectangle::default_instance_ )
  {
    this[2] = Caver::Proto::Rectangle::default_instance_;
  }
  else
  {
    this = (_QWORD *)Caver::Proto::protobuf_AddDesc_Common_2eproto((Caver::Proto *)this);
    v2 = Caver::Proto::Rectangle::default_instance_;
    v1[2] = Caver::Proto::Rectangle::default_instance_;
    if ( !v2 )
    {
      this = (_QWORD *)Caver::Proto::protobuf_AddDesc_Common_2eproto((Caver::Proto *)this);
      v2 = Caver::Proto::Rectangle::default_instance_;
    }
  }
  v1[4] = v2;
  return this;
}

