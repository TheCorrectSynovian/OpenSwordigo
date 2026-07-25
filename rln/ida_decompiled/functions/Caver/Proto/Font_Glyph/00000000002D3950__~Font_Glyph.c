/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D3950
 * Mangled: _ZN5Caver5Proto10Font_GlyphD0Ev
 * Demangled: Caver::Proto::Font_Glyph::~Font_Glyph()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000002D39EC  Caver::Proto::Font_Glyph::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 17
 *   insn=0x00000000002D395C string=0x00000000002D3960 ""
 *   insn=0x00000000002D3964 string=0x00000000002D3968 "A"
 *   insn=0x00000000002D3968 string=0x00000000002D396C "h"
 *   insn=0x00000000002D3970 string=0x00000000002D3974 ""
 *   insn=0x00000000002D3974 string=0x00000000002D3978 ""
 *   insn=0x00000000002D397C string=0x00000000002D3980 "`"
 *   insn=0x00000000002D3980 string=0x00000000002D3984 "`\n@"
 *   insn=0x00000000002D3988 string=0x00000000002D398C ""
 *   insn=0x00000000002D3988 string=0x00000000002D3998 "`"
 *   insn=0x00000000002D398C string=0x00000000002D3990 ""
 *   insn=0x00000000002D399C string=0x00000000002D39A0 ""
 *   insn=0x00000000002D39A0 string=0x00000000002D39A4 ""
 *   insn=0x00000000002D39B0 string=0x00000000001F7600 "0'"
 *   insn=0x00000000002D39BC string=0x00000000002D39C0 "<"
 *   insn=0x00000000002D39C0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002D39C8 string=0x00000000002D39CC ""
 *   insn=0x00000000002D39DC string=0x00000000002D39E0 "4"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::Font_Glyph::~Font_Glyph(Caver::Proto::Font_Glyph *this)
{
  __int64 v2; // x0
  __int64 v3; // x0

  *(_QWORD *)this = off_6C5EB8;
  if ( (Caver::Proto::Font_Glyph *)Caver::Proto::Font_Glyph::default_instance_ != this )
  {
    v2 = *((_QWORD *)this + 2);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v3 = *((_QWORD *)this + 4);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

