/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003060E4
 * Mangled: _ZN5Caver5Proto22GroundPolygonComponentD2Ev
 * Demangled: Caver::Proto::GroundPolygonComponent::~GroundPolygonComponent()
 *
 * Callers: 2
 *   0x00000000001F7E10  Caver::Proto::GroundPolygonComponent::~GroundPolygonComponent()
 *   0x0000000000305D30  Caver::Proto::GroundPolygonComponent::GroundPolygonComponent(Caver::Proto::GroundPolygonComponent const&)
 *
 * Callees: 4
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 45
 *   insn=0x00000000003060F0 string=0x00000000003060F4 ""
 *   insn=0x00000000003060F4 string=0x00000000003060F8 ""
 *   insn=0x00000000003060FC string=0x0000000000306100 "A"
 *   insn=0x0000000000306100 string=0x0000000000306104 "h"
 *   insn=0x0000000000306108 string=0x000000000030610C ""
 *   insn=0x000000000030610C string=0x0000000000306110 ""
 *   insn=0x0000000000306114 string=0x0000000000306118 "`"
 *   insn=0x0000000000306118 string=0x000000000030611C "`\n@"
 *   insn=0x0000000000306118 string=0x0000000000306144 "i&@"
 *   insn=0x0000000000306120 string=0x0000000000306124 ""
 *   insn=0x0000000000306120 string=0x0000000000306130 "`*@"
 *   insn=0x0000000000306124 string=0x0000000000306128 ""
 *   insn=0x0000000000306134 string=0x0000000000306138 ""
 *   insn=0x0000000000306138 string=0x000000000030613C ""
 *   insn=0x0000000000306144 string=0x0000000000306148 "`"
 *   insn=0x0000000000306148 string=0x000000000030614C "?"
 *   insn=0x0000000000306150 string=0x0000000000306184 "h"
 *   insn=0x0000000000306154 string=0x0000000000306158 "xt"
 *   insn=0x000000000030615C string=0x0000000000306160 "\t"
 *   insn=0x0000000000306160 string=0x0000000000306164 ")"
 *   insn=0x0000000000306168 string=0x000000000030616C " "
 *   insn=0x000000000030616C string=0x0000000000306170 "i&@"
 *   insn=0x0000000000306170 string=0x0000000000306174 "`"
 *   insn=0x0000000000306188 string=0x000000000030618C "`"
 *   insn=0x000000000030618C string=0x0000000000306190 "@"
 *   insn=0x0000000000306190 string=0x0000000000306194 "s"
 *   insn=0x0000000000306194 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000003061A8 string=0x00000000001F7600 "0'"
 *   insn=0x00000000003061AC string=0x00000000003061B0 "h"
 *   insn=0x00000000003061B4 string=0x00000000003061B8 "?"
 *   insn=0x00000000003061BC string=0x00000000003061EC "i"
 *   insn=0x00000000003061C8 string=0x00000000003061CC ""
 *   insn=0x00000000003061CC string=0x00000000003061D0 ""
 *   insn=0x00000000003061D4 string=0x00000000003061D8 "i&@"
 *   insn=0x00000000003061D8 string=0x00000000003061DC "h"
 *   insn=0x00000000003061FC string=0x0000000000306200 "X"
 *   insn=0x000000000030621C string=0x0000000000306220 "K "
 *   insn=0x0000000000306230 string=0x0000000000306234 ""
 *   insn=0x0000000000306238 string=0x000000000030623C ""
 *   insn=0x0000000000306244 string=0x0000000000306248 "`\n@"
 *   insn=0x000000000030624C string=0x0000000000306250 ""
 *   insn=0x000000000030624C string=0x000000000030625C "`*@"
 *   insn=0x0000000000306250 string=0x0000000000306254 ""
 *   insn=0x0000000000306260 string=0x0000000000306264 ""
 *   insn=0x0000000000306270 string=0x0000000000306274 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::GroundPolygonComponent::~GroundPolygonComponent(
        Caver::Proto::GroundPolygonComponent *this)
{
  __int64 v2; // x0
  __int64 v3; // x0
  int v4; // w9
  _QWORD *v5; // x0
  __int64 i; // x20
  __int64 v7; // x8

  *(_QWORD *)this = off_6C77B8;
  if ( (Caver::Proto::GroundPolygonComponent *)Caver::Proto::GroundPolygonComponent::default_instance_ != this )
  {
    v2 = *((_QWORD *)this + 2);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v3 = *((_QWORD *)this + 10);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  v4 = *((_DWORD *)this + 9);
  v5 = (_QWORD *)*((_QWORD *)this + 3);
  if ( v4 >= 1 )
  {
    for ( i = 0; i < v4; ++i )
    {
      v7 = v5[i];
      if ( v7 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 8LL))(v5[i]);
        v4 = *((_DWORD *)this + 9);
        v5 = (_QWORD *)*((_QWORD *)this + 3);
      }
    }
  }
  if ( v5 != (_QWORD *)((char *)this + 48) && v5 )
    operator delete[](v5);
  google::protobuf::MessageLite::~MessageLite(this);
}

