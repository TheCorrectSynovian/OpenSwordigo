/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000460DFC
 * Mangled: _ZN5Caver14ObjectTemplate18TemplateFromObjectERKSsPNS_11SceneObjectE
 * Demangled: Caver::ObjectTemplate::TemplateFromObject(std::string const&,Caver::SceneObject *)
 *
 * Callers: 1
 *   0x00000000001FB540  Caver::ObjectTemplate::TemplateFromObject(std::string const&,Caver::SceneObject *)
 *
 * Callees: 9
 *   0x00000000001F47D0  Caver::SceneObject::GetAllComponents(std::vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>> *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FB490  Caver::SceneObject::SetIdentifier(std::string const&)
 *   0x00000000001FBDB0  Caver::SceneObject::SceneObject(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000046119C  Caver::ObjectTemplate::AddComponent(boost::intrusive_ptr<Caver::Component> const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 83
 *   insn=0x0000000000460E10 string=0x0000000000460E14 "W"
 *   insn=0x0000000000460E30 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000460E38 string=0x0000000000460E3C "("
 *   insn=0x0000000000460E38 string=0x00000000001FBDB0 "0'"
 *   insn=0x0000000000460E3C string=0x0000000000460E40 ""
 *   insn=0x0000000000460E40 string=0x0000000000460E44 "j\n@"
 *   insn=0x0000000000460E4C string=0x0000000000460E50 "A"
 *   insn=0x0000000000460E50 string=0x0000000000460E54 ""
 *   insn=0x0000000000460E54 string=0x0000000000460E58 "h\n"
 *   insn=0x0000000000460E58 string=0x0000000000460E5C "H"
 *   insn=0x0000000000460E5C string=0x0000000000460E60 "k"
 *   insn=0x0000000000460E60 string=0x0000000000460E64 "i2"
 *   insn=0x0000000000460E68 string=0x0000000000460E6C "h\n"
 *   insn=0x0000000000460E78 string=0x00000000001FB490 "0'"
 *   insn=0x0000000000460E7C string=0x0000000000460E80 "h2"
 *   insn=0x0000000000460E88 string=0x0000000000460E98 "v2@"
 *   insn=0x0000000000460E8C string=0x0000000000460E90 ")\t"
 *   insn=0x0000000000460E98 string=0x0000000000460E9C "h"
 *   insn=0x0000000000460E9C string=0x0000000000460EA0 "6"
 *   insn=0x0000000000460EA0 string=0x0000000000460EE4 "5"
 *   insn=0x0000000000460EA4 string=0x0000000000460EA8 ""
 *   insn=0x0000000000460EB4 string=0x0000000000460EB8 "\t@"
 *   insn=0x0000000000460EC4 string=0x0000000000460EC8 ""
 *   insn=0x0000000000460ED4 string=0x0000000000460ED8 "@"
 *   insn=0x0000000000460EE8 string=0x0000000000460EEC ""
 *   insn=0x0000000000460EF8 string=0x0000000000460EFC "\t@"
 *   insn=0x0000000000460F08 string=0x0000000000460F0C ""
 *   insn=0x0000000000460F18 string=0x0000000000460F1C "@"
 *   insn=0x0000000000460F34 string=0x0000000000460F38 "&N"
 *   insn=0x0000000000460F38 string=0x00000000001F47D0 "P'"
 *   insn=0x0000000000460F44 string=0x0000000000461004 "t"
 *   insn=0x0000000000460F48 string=0x0000000000460F4C ""
 *   insn=0x0000000000460F4C string=0x0000000000460F50 ""
 *   insn=0x0000000000460F5C string=0x0000000000460F60 "h"
 *   insn=0x0000000000460F60 string=0x0000000000460F64 "\t"
 *   insn=0x0000000000460F68 string=0x0000000000460F6C "(\t@"
 *   insn=0x0000000000460F78 string=0x0000000000460F7C "@"
 *   insn=0x0000000000460F7C string=0x0000000000460F80 ""
 *   insn=0x0000000000460F80 string=0x0000000000460F84 ""
 *   insn=0x0000000000460F98 string=0x0000000000460F9C "@"
 *   insn=0x0000000000460F9C string=0x0000000000460FA0 ""
 *   insn=0x0000000000460FA0 string=0x0000000000460FA4 ""
 *   insn=0x0000000000460FA8 string=0x0000000000460FAC ""
 *   insn=0x0000000000460FAC string=0x0000000000460FB0 ""
 *   insn=0x0000000000460FBC string=0x0000000000460FC0 "A"
 *   insn=0x0000000000460FD4 string=0x0000000000460FD8 "@"
 *   insn=0x0000000000460FD8 string=0x0000000000460FDC ""
 *   insn=0x0000000000460FDC string=0x0000000000460FE0 ""
 *   insn=0x0000000000460FE4 string=0x0000000000460FE8 ""
 *   insn=0x0000000000460FE8 string=0x0000000000460FEC ""
 *   insn=0x000000000046100C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000461038 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000461044 string=0x00000000004610C0 "h\n@"
 *   insn=0x0000000000461048 string=0x000000000046104C ""
 *   insn=0x0000000000461050 string=0x0000000000461054 "a"
 *   insn=0x0000000000461058 string=0x000000000046105C "\t@"
 *   insn=0x0000000000461068 string=0x000000000046106C ""
 *   insn=0x0000000000461070 string=0x0000000000461074 "a"
 *   insn=0x0000000000461078 string=0x000000000046107C "@"
 *   insn=0x0000000000461090 string=0x0000000000461094 ""
 *   insn=0x00000000004610A4 string=0x00000000004610A8 ""
 *   insn=0x00000000004610B0 string=0x00000000004610B4 "h"
 *   insn=0x00000000004610B8 string=0x00000000004610BC "}X"
 *   insn=0x00000000004610C0 string=0x00000000004610C4 ""
 *   insn=0x00000000004610C4 string=0x00000000004610C8 "h\n"
 *   insn=0x00000000004610CC string=0x00000000004610D0 "h"
 *   insn=0x00000000004610D0 string=0x00000000004610D4 ""
 *   insn=0x00000000004610F0 string=0x00000000004610F4 "\t\t@"
 *   insn=0x00000000004610F4 string=0x00000000004610F8 ")"
 *   insn=0x00000000004610F8 string=0x00000000004610FC "\t\t"
 *   insn=0x00000000004610FC string=0x0000000000461100 "a"
 *   insn=0x0000000000461100 string=0x0000000000461104 "\t"
 *   insn=0x0000000000461104 string=0x0000000000461108 ")"
 *   insn=0x000000000046110C string=0x0000000000461110 " "
 *   insn=0x000000000046113C string=0x0000000000461140 "@"
 *   insn=0x0000000000461140 string=0x0000000000461144 ""
 *   insn=0x0000000000461144 string=0x0000000000461148 ""
 *   insn=0x000000000046114C string=0x0000000000461150 ""
 *   insn=0x0000000000461150 string=0x0000000000461154 ""
 *   insn=0x000000000046117C string=0x0000000000461180 "h"
 *   insn=0x0000000000461184 string=0x0000000000461188 "q"
 *   insn=0x000000000046118C string=0x0000000000461190 "HX"
 *   insn=0x0000000000461194 string=0x0000000000461198 "m"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::ObjectTemplate::TemplateFromObject(__int64 a1@<X1>, __int64 *a2@<X8>)
{
  __int64 v4; // x19
  int v5; // w10
  __int64 v6; // x8
  _QWORD *v7; // x21
  _QWORD *v8; // x22
  __int64 v9; // x8
  __int64 v10; // x8
  __int64 v11; // x8
  __int64 v12; // x8

  _ReadStatusReg(TPIDR_EL0);
  v4 = operator new(0x138u);
  Caver::SceneObject::SceneObject((Caver::SceneObject *)v4);
  v5 = *(_DWORD *)(v4 + 8);
  *(_QWORD *)(v4 + 296) = 0;
  *(_QWORD *)(v4 + 16) = &off_6D48B0;
  *(_QWORD *)v4 = off_6D4850;
  *(_DWORD *)(v4 + 304) = 1065353216;
  *a2 = v4;
  *(_DWORD *)(v4 + 8) = v5 + 1;
  Caver::SceneObject::SetIdentifier();
  *(_DWORD *)(v4 + 304) = *(_DWORD *)(a1 + 140);
  v6 = *(_QWORD *)(a1 + 88);
  v7 = *(_QWORD **)(a1 + 96);
  if ( v7 )
    v7[1] += 2LL;
  v8 = *(_QWORD **)(v4 + 96);
  *(_QWORD *)(v4 + 88) = v6;
  *(_QWORD *)(v4 + 96) = v7;
  if ( v8 )
  {
    v9 = v8[1] - 1LL;
    v8[1] = v9;
    if ( !v9 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
      v10 = v8[2] - 1LL;
      v8[2] = v10;
      if ( !v10 )
        (*(void (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
    }
  }
  if ( v7 )
  {
    v11 = v7[1] - 1LL;
    v7[1] = v11;
    if ( !v11 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
      v12 = v7[2] - 1LL;
      v7[2] = v12;
      if ( !v12 )
        (*(void (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
    }
  }
  Caver::SceneObject::GetAllComponents();
}

