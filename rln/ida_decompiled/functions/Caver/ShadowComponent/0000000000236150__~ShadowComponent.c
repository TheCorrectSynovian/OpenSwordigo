/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000236150
 * Mangled: _ZN5Caver15ShadowComponentD2Ev
 * Demangled: Caver::ShadowComponent::~ShadowComponent()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000236310  Caver::ShadowComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 59
 *   insn=0x0000000000236158 string=0x000000000023615C "h%"
 *   insn=0x000000000023615C string=0x0000000000236160 ""
 *   insn=0x0000000000236164 string=0x0000000000236168 "`n@"
 *   insn=0x0000000000236168 string=0x000000000023616C "\n"
 *   insn=0x000000000023616C string=0x0000000000236170 "\tA"
 *   insn=0x0000000000236170 string=0x0000000000236174 "@"
 *   insn=0x0000000000236174 string=0x0000000000236178 ""
 *   insn=0x000000000023617C string=0x0000000000236180 "i"
 *   insn=0x0000000000236180 string=0x0000000000236184 "`"
 *   insn=0x0000000000236188 string=0x000000000023618C "@"
 *   insn=0x0000000000236188 string=0x00000000002361A8 "`:@"
 *   insn=0x000000000023618C string=0x0000000000236190 ""
 *   insn=0x0000000000236190 string=0x0000000000236194 ""
 *   insn=0x0000000000236198 string=0x000000000023619C ""
 *   insn=0x000000000023619C string=0x00000000002361A0 ""
 *   insn=0x00000000002361AC string=0x00000000002361B0 "@"
 *   insn=0x00000000002361B0 string=0x00000000002361B4 ""
 *   insn=0x00000000002361B4 string=0x00000000002361B8 ""
 *   insn=0x00000000002361BC string=0x00000000002361C0 ""
 *   insn=0x00000000002361C0 string=0x00000000002361C4 ""
 *   insn=0x00000000002361D8 string=0x00000000001FA4D0 "0'"
 *   insn=0x00000000002361E8 string=0x00000000002361EC "("
 *   insn=0x00000000002361EC string=0x00000000002361F0 "\t\t@"
 *   insn=0x00000000002361F0 string=0x00000000002361F4 ")"
 *   insn=0x00000000002361F4 string=0x00000000002361F8 "\t\t"
 *   insn=0x00000000002361FC string=0x0000000000236200 "\t"
 *   insn=0x0000000000236200 string=0x0000000000236204 ")"
 *   insn=0x0000000000236208 string=0x000000000023620C " "
 *   insn=0x000000000023621C string=0x0000000000236220 "K`"
 *   insn=0x000000000023622C string=0x0000000000236230 "h%"
 *   insn=0x0000000000236230 string=0x0000000000236234 ""
 *   insn=0x0000000000236238 string=0x000000000023623C "`n@"
 *   insn=0x000000000023623C string=0x0000000000236240 "\n"
 *   insn=0x0000000000236240 string=0x0000000000236244 "\tA"
 *   insn=0x0000000000236244 string=0x0000000000236248 "@"
 *   insn=0x0000000000236248 string=0x000000000023624C ""
 *   insn=0x0000000000236250 string=0x0000000000236254 "i"
 *   insn=0x0000000000236254 string=0x0000000000236258 "`"
 *   insn=0x000000000023625C string=0x0000000000236260 "@"
 *   insn=0x000000000023625C string=0x000000000023627C "`:@"
 *   insn=0x0000000000236260 string=0x0000000000236264 ""
 *   insn=0x0000000000236264 string=0x0000000000236268 ""
 *   insn=0x000000000023626C string=0x0000000000236270 ""
 *   insn=0x0000000000236270 string=0x0000000000236274 ""
 *   insn=0x0000000000236280 string=0x0000000000236284 "@"
 *   insn=0x0000000000236284 string=0x0000000000236288 ""
 *   insn=0x0000000000236288 string=0x000000000023628C ""
 *   insn=0x0000000000236290 string=0x0000000000236294 ""
 *   insn=0x0000000000236294 string=0x0000000000236298 ""
 *   insn=0x00000000002362B4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002362C4 string=0x00000000002362C8 "("
 *   insn=0x00000000002362C8 string=0x00000000002362CC "\t\t@"
 *   insn=0x00000000002362CC string=0x00000000002362D0 ")"
 *   insn=0x00000000002362D0 string=0x00000000002362D4 "\t\t"
 *   insn=0x00000000002362D8 string=0x00000000002362DC "\t"
 *   insn=0x00000000002362DC string=0x00000000002362E0 ")"
 *   insn=0x00000000002362E4 string=0x00000000002362E8 " "
 *   insn=0x00000000002362EC string=0x00000000002362F0 "x"
 *   insn=0x0000000000236308 string=0x000000000023630C "n-"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ShadowComponent::~ShadowComponent(Caver::ShadowComponent *this)
{
  _DWORD *v2; // x0
  __int128 v3; // q0
  int v4; // w8
  _DWORD *v5; // x0
  int v6; // w8

  v2 = (_DWORD *)*((_QWORD *)this + 27);
  *(_QWORD *)&v3 = &off_6BB388;
  *((_QWORD *)&v3 + 1) = &off_6BB3C8;
  *(_QWORD *)this = off_6BB270;
  *((_OWORD *)this + 1) = v3;
  if ( v2 )
  {
    v4 = v2[2] - 1;
    v2[2] = v4;
    if ( !v4 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v5 = (_DWORD *)*((_QWORD *)this + 14);
  if ( v5 )
  {
    v6 = v5[2] - 1;
    v5[2] = v6;
    if ( !v6 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  Caver::Component::~Component(this);
}

