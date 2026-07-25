/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A7C04
 * Mangled: _ZN5Caver13GUIViewLayout23LoadFromProtobufMessageERKNS_5Proto13GUIViewLayoutE
 * Demangled: Caver::GUIViewLayout::LoadFromProtobufMessage(Caver::Proto::GUIViewLayout const&)
 *
 * Callers: 2
 *   0x0000000000203A40  Caver::GUIViewLayout::LoadFromProtobufMessage(Caver::Proto::GUIViewLayout const&)
 *   0x00000000004A7C04  Caver::GUIViewLayout::LoadFromProtobufMessage(Caver::Proto::GUIViewLayout const&)
 *
 * Callees: 14
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FDD20  std::map<std::string,boost::shared_ptr<Caver::GUIViewLayout>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>>::operator[](std::string const&)
 *   0x00000000001FE470  boost::detail::shared_count::shared_count<Caver::GUIViewLayout>(Caver::GUIViewLayout *)
 *   0x00000000001FFFE0  Caver::GUIMargins::LoadFromProtobufMessage(Caver::Proto::GUIMargins const&)
 *   0x0000000000201600  std::vector<boost::shared_ptr<Caver::GUIViewLayout>,std::allocator<boost::shared_ptr<Caver::GUIViewLayout>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GUIViewLayout>*,std::vector<boost::shared_ptr<Caver::GUIViewLayout>,std::allocator<boost::shared_ptr<Caver::GUIViewLayout>>>>,boost::shared_ptr<Caver::GUIViewLayout> const&)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x0000000000203BA0  Caver::GUIViewLayout::AddSubview(boost::shared_ptr<Caver::GUIViewLayout> const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 92
 *   insn=0x00000000004A7C1C string=0x00000000004A7C20 "W"
 *   insn=0x00000000004A7C30 string=0x00000000004A7C34 "a\n@"
 *   insn=0x00000000004A7C38 string=0x00000000004A7C3C "hbA9H"
 *   insn=0x00000000004A7C3C string=0x00000000004A7C40 "H"
 *   insn=0x00000000004A7C40 string=0x00000000004A7C68 "h"@"
 *   insn=0x00000000004A7C44 string=0x00000000004A7C48 "h*@"
 *   insn=0x00000000004A7C48 string=0x00000000004A7C4C ")"
 *   insn=0x00000000004A7C54 string=0x00000000004A7C58 ")"
 *   insn=0x00000000004A7C58 string=0x00000000004A7C5C "("
 *   insn=0x00000000004A7C6C string=0x00000000004A7C70 "+"
 *   insn=0x00000000004A7C74 string=0x00000000004A7C78 ")"
 *   insn=0x00000000004A7C84 string=0x00000000004A7C88 "9a"
 *   insn=0x00000000004A7C90 string=0x00000000004A7C94 "S6"
 *   insn=0x00000000004A7C94 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004A7CDC string=0x00000000004A7CE0 "h"
 *   insn=0x00000000004A7CFC string=0x00000000004A7D00 "6"
 *   insn=0x00000000004A7D00 string=0x00000000004A7D44 "h""
 *   insn=0x00000000004A7D04 string=0x00000000004A7D08 ""
 *   insn=0x00000000004A7D18 string=0x00000000004A7D1C "\t@"
 *   insn=0x00000000004A7D24 string=0x00000000004A7D28 ""
 *   insn=0x00000000004A7D38 string=0x00000000004A7D3C "@"
 *   insn=0x00000000004A7D4C string=0x00000000004A7D50 ""
 *   insn=0x00000000004A7D60 string=0x00000000004A7D80 "T9"
 *   insn=0x00000000004A7D80 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004A7D88 string=0x00000000004A7D8C "4"
 *   insn=0x00000000004A7D90 string=0x00000000004A7D94 ""
 *   insn=0x00000000004A7DA0 string=0x00000000004A7DA4 "\t@"
 *   insn=0x00000000004A7DB0 string=0x00000000004A7DB4 ""
 *   insn=0x00000000004A7DC0 string=0x00000000004A7DC4 "@"
 *   insn=0x00000000004A7DD4 string=0x00000000004A7DD8 "]"
 *   insn=0x00000000004A7DF0 string=0x00000000004A7DF4 "U"
 *   insn=0x00000000004A7E10 string=0x00000000004A7E14 "i"
 *   insn=0x00000000004A7E14 string=0x00000000004A7E18 "\t"
 *   insn=0x00000000004A7E18 string=0x00000000004A7E1C "i"
 *   insn=0x00000000004A7E1C string=0x00000000004A7E20 "\t"
 *   insn=0x00000000004A7E24 string=0x00000000004A7E28 "*"
 *   insn=0x00000000004A7E24 string=0x00000000004A7E34 "A"
 *   insn=0x00000000004A7E28 string=0x00000000004A7E2C "J"
 *   insn=0x00000000004A7E2C string=0x00000000004A7E30 "*"
 *   insn=0x00000000004A7E3C string=0x00000000004A7E50 "a"
 *   insn=0x00000000004A7E78 string=0x00000000004A7E7C "a"
 *   insn=0x00000000004A7E94 string=0x00000000004A7E98 "i"@"
 *   insn=0x00000000004A7E94 string=0x00000000001FDD20 "0'"
 *   insn=0x00000000004A7E9C string=0x00000000004A7EA0 "\n"
 *   insn=0x00000000004A7EA0 string=0x00000000004A7EA4 "J"
 *   insn=0x00000000004A7EA4 string=0x00000000004A7EA8 "\n"
 *   insn=0x00000000004A7EAC string=0x00000000004A7EB0 "\t "
 *   insn=0x00000000004A7EB0 string=0x00000000004A7EB4 "3"
 *   insn=0x00000000004A7EB4 string=0x00000000004A7EB8 "h"
 *   insn=0x00000000004A7EB8 string=0x00000000004A7EBC ""
 *   insn=0x00000000004A7EBC string=0x00000000004A7EC0 "h"
 *   insn=0x00000000004A7EC4 string=0x00000000004A7EC8 "h"
 *   insn=0x00000000004A7EC8 string=0x00000000004A7ECC "\t@"
 *   insn=0x00000000004A7ED4 string=0x00000000004A7ED8 "h\n@"
 *   insn=0x00000000004A7ED8 string=0x00000000004A7EDC ""
 *   insn=0x00000000004A7EDC string=0x00000000004A7EE0 "h\n"
 *   insn=0x00000000004A7EE4 string=0x00000000004A7EE8 "h"
 *   insn=0x00000000004A7EE8 string=0x00000000004A7EEC "@"
 *   insn=0x00000000004A7F10 string=0x00000000004A7F14 "A"
 *   insn=0x00000000004A7F30 string=0x00000000004A7F34 ")=G"
 *   insn=0x00000000004A7F34 string=0x00000000004A7F38 "!"
 *   insn=0x00000000004A7F3C string=0x00000000004A7F40 "\t"
 *   insn=0x00000000004A7F3C string=0x00000000004A7F78 "\t"
 *   insn=0x00000000004A7F40 string=0x00000000004A7F44 "*"
 *   insn=0x00000000004A7F44 string=0x00000000004A7F48 "\n"
 *   insn=0x00000000004A7F4C string=0x00000000004A7F50 ""
 *   insn=0x00000000004A7F50 string=0x00000000004A7F84 "?"
 *   insn=0x00000000004A7F54 string=0x00000000004A7F58 ")=G"
 *   insn=0x00000000004A7F58 string=0x00000000004A7F5C "!"
 *   insn=0x00000000004A7F60 string=0x00000000004A7F64 "\t"
 *   insn=0x00000000004A7F60 string=0x00000000004A7F9C "\t"
 *   insn=0x00000000004A7F64 string=0x00000000004A7F68 "*"
 *   insn=0x00000000004A7F68 string=0x00000000004A7F6C "\n"
 *   insn=0x00000000004A7F70 string=0x00000000004A7F74 ""
 *   insn=0x00000000004A7F74 string=0x00000000004A7FA8 "?"
 *   insn=0x00000000004A7F78 string=0x00000000004A7F7C "*"
 *   insn=0x00000000004A7F7C string=0x00000000004A7F80 "\n"
 *   insn=0x00000000004A7F90 string=0x00000000004A7F94 "W"
 *   insn=0x00000000004A7F9C string=0x00000000004A7FA0 "*"
 *   insn=0x00000000004A7FA0 string=0x00000000004A7FA4 "\n"
 *   insn=0x00000000004A7FC4 string=0x00000000004A7FC8 "(a"
 *   insn=0x00000000004A7FD4 string=0x00000000004A7FD8 "J=G"
 *   insn=0x00000000004A7FD8 string=0x00000000004A7FDC ")!"
 *   insn=0x00000000004A7FE0 string=0x00000000004A7FE4 "*"
 *   insn=0x00000000004A7FE0 string=0x00000000004A8010 "*"
 *   insn=0x00000000004A7FE4 string=0x00000000004A7FE8 "K"
 *   insn=0x00000000004A7FE8 string=0x00000000004A7FEC "+"
 *   insn=0x00000000004A7FF0 string=0x00000000004A7FF4 "_"
 *   insn=0x00000000004A8008 string=0x00000000004A800C ".f"
 *   insn=0x00000000004A8010 string=0x00000000004A8014 "K"
 *   insn=0x00000000004A8014 string=0x00000000004A8018 "+"
 *   insn=0x00000000004A8018 string=0x00000000004A801C "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUIViewLayout::LoadFromProtobufMessage(
        Caver::GUIViewLayout *this,
        const Caver::Proto::GUIViewLayout *a2)
{
  const Caver::Proto::GUIViewLayout *v4; // x8
  __int64 v5; // x24
  Caver::GUIViewLayout *v6; // x0
  __int64 v7; // x8
  __int64 v8; // x8
  Caver::GUIViewLayout *v9; // [xsp+68h] [xbp-58h]
  _QWORD *v10; // [xsp+70h] [xbp-50h]

  _ReadStatusReg(TPIDR_EL0);
  sub_56A6A8(this);
  if ( (*((_BYTE *)a2 + 88) & 4) != 0 )
  {
    if ( *((_QWORD *)a2 + 10) )
      v4 = a2;
    else
      v4 = (const Caver::Proto::GUIViewLayout *)Caver::Proto::GUIViewLayout::default_instance_;
    Caver::GUIMargins::LoadFromProtobufMessage(
      (Caver::GUIViewLayout *)((char *)this + 80),
      *((const Caver::Proto::GUIMargins **)v4 + 10));
  }
  if ( *((int *)a2 + 8) >= 1 )
  {
    v5 = 0;
    do
    {
      v6 = (Caver::GUIViewLayout *)operator new(0x70u);
      *((_QWORD *)v6 + 2) = 0;
      *((_QWORD *)v6 + 3) = 0;
      *(_QWORD *)v6 = &byte_6FD2F8;
      *((_QWORD *)v6 + 1) = 0;
      *((_QWORD *)v6 + 9) = 0;
      *((_QWORD *)v6 + 10) = 0;
      *((_QWORD *)v6 + 5) = 0;
      *((_QWORD *)v6 + 11) = 0;
      *((_QWORD *)v6 + 12) = 0;
      *((_QWORD *)v6 + 13) = 0x3F80000000000000LL;
      *((_QWORD *)v6 + 6) = 0;
      *((_QWORD *)v6 + 7) = (char *)v6 + 40;
      *((_QWORD *)v6 + 8) = (char *)v6 + 40;
      v9 = v6;
      boost::detail::shared_count::shared_count<Caver::GUIViewLayout>();
      boost::detail::sp_enable_shared_from_this();
      Caver::GUIViewLayout::LoadFromProtobufMessage(
        v9,
        *(const Caver::Proto::GUIViewLayout **)(*((_QWORD *)a2 + 3) + 8 * v5));
      Caver::GUIViewLayout::AddSubview();
      if ( v10 )
      {
        v7 = v10[1] - 1LL;
        v10[1] = v7;
        if ( !v7 )
        {
          (*(void (__fastcall **)())(*v10 + 16LL))();
          v8 = v10[2] - 1LL;
          v10[2] = v8;
          if ( !v8 )
            (*(void (__fastcall **)())(*v10 + 24LL))();
        }
      }
      ++v5;
    }
    while ( v5 < *((int *)a2 + 8) );
  }
}

