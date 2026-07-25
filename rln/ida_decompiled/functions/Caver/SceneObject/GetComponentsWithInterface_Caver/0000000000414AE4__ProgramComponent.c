/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000414AE4
 * Mangled: _ZN5Caver11SceneObject26GetComponentsWithInterfaceINS_16ProgramComponentEEEvPSt6vectorIPT_SaIS5_EE
 * Demangled: Caver::SceneObject::GetComponentsWithInterface<Caver::ProgramComponent>(std::vector<Caver::ProgramComponent *,std::allocator<Caver::ProgramComponent *>> *)
 *
 * Callers: 1
 *   0x00000000001FFDC0  Caver::SceneObject::GetComponentsWithInterface<Caver::ProgramComponent>(std::vector<Caver::ProgramComponent *,std::allocator<Caver::ProgramComponent *>> *)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6940  std::vector<Caver::ProgramComponent *,std::allocator<Caver::ProgramComponent *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::ProgramComponent **,std::vector<Caver::ProgramComponent *,std::allocator<Caver::ProgramComponent *>>>,Caver::ProgramComponent * const&)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FE0E0  Caver::ItemBuyPopupView::~ItemBuyPopupView()
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000233044  Caver::ProgramComponent::className(void)
 *   0x0000000000415064  boost::detail::function::functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::ItemBuyPopupView,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::ItemBuyPopupView*>,boost::arg<1>,boost::arg<2>>>>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 119
 *   insn=0x0000000000414AF8 string=0x0000000000414AFC "V"
 *   insn=0x0000000000414B24 string=0x0000000000414B28 "h\n@"
 *   insn=0x0000000000414B24 string=0x0000000000414B34 "h"
 *   insn=0x0000000000414B28 string=0x0000000000414B2C ""
 *   insn=0x0000000000414B2C string=0x0000000000414B30 "h\n"
 *   insn=0x0000000000414B34 string=0x0000000000414B38 "Q@"
 *   insn=0x0000000000414B48 string=0x0000000000414B7C "h\n@"
 *   insn=0x0000000000414B50 string=0x0000000000414B54 "?"
 *   insn=0x0000000000414B58 string=0x0000000000414B5C "3"
 *   insn=0x0000000000414B60 string=0x0000000000414B64 "!"
 *   insn=0x0000000000414B74 string=0x0000000000414B78 "r"
 *   insn=0x0000000000414B78 string=0x00000000001F6940 "0'"
 *   insn=0x0000000000414B7C string=0x0000000000414B80 ""
 *   insn=0x0000000000414B80 string=0x0000000000414B84 "h\n"
 *   insn=0x0000000000414B88 string=0x0000000000414B8C "h"
 *   insn=0x0000000000414B90 string=0x0000000000414B94 ""
 *   insn=0x0000000000414BD0 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000414BD4 string=0x0000000000414BD8 "h\n@"
 *   insn=0x0000000000414BDC string=0x0000000000414BE0 ""
 *   insn=0x0000000000414BE0 string=0x0000000000414BE4 "h\n"
 *   insn=0x0000000000414BE8 string=0x0000000000414BEC "h"
 *   insn=0x0000000000414BEC string=0x0000000000414BF0 ""
 *   insn=0x0000000000414BFC string=0x0000000000414C00 "1"
 *   insn=0x0000000000414C1C string=0x0000000000414C20 "`"
 *   insn=0x0000000000414C20 string=0x0000000000414C24 ""
 *   insn=0x0000000000414C24 string=0x0000000000414C28 "A"
 *   insn=0x0000000000414C28 string=0x0000000000414C2C "h"
 *   insn=0x0000000000414C30 string=0x0000000000414C34 "@"
 *   insn=0x0000000000414C30 string=0x0000000000414C50 "t"
 *   insn=0x0000000000414C34 string=0x0000000000414C38 ""
 *   insn=0x0000000000414C38 string=0x0000000000414C3C ""
 *   insn=0x0000000000414C40 string=0x0000000000414C44 ""
 *   insn=0x0000000000414C44 string=0x0000000000414C48 ""
 *   insn=0x0000000000414C50 string=0x0000000000414C54 "4"
 *   insn=0x0000000000414C54 string=0x0000000000414C98 "t"
 *   insn=0x0000000000414C58 string=0x0000000000414C5C ""
 *   insn=0x0000000000414C68 string=0x0000000000414C6C "\t@"
 *   insn=0x0000000000414C78 string=0x0000000000414C7C ""
 *   insn=0x0000000000414C88 string=0x0000000000414C8C "@"
 *   insn=0x0000000000414C98 string=0x0000000000414C9C "4"
 *   insn=0x0000000000414C9C string=0x0000000000414CE0 "t"
 *   insn=0x0000000000414CA0 string=0x0000000000414CA4 ""
 *   insn=0x0000000000414CB0 string=0x0000000000414CB4 "\t@"
 *   insn=0x0000000000414CC0 string=0x0000000000414CC4 ""
 *   insn=0x0000000000414CD0 string=0x0000000000414CD4 "@"
 *   insn=0x0000000000414CE0 string=0x0000000000414CE4 "4"
 *   insn=0x0000000000414CE4 string=0x0000000000414D28 "t"
 *   insn=0x0000000000414CE8 string=0x0000000000414CEC ""
 *   insn=0x0000000000414CF8 string=0x0000000000414CFC "\t@"
 *   insn=0x0000000000414D08 string=0x0000000000414D0C ""
 *   insn=0x0000000000414D18 string=0x0000000000414D1C "@"
 *   insn=0x0000000000414D28 string=0x0000000000414D2C "4"
 *   insn=0x0000000000414D2C string=0x0000000000414D70 "t"
 *   insn=0x0000000000414D30 string=0x0000000000414D34 ""
 *   insn=0x0000000000414D40 string=0x0000000000414D44 "\t@"
 *   insn=0x0000000000414D50 string=0x0000000000414D54 ""
 *   insn=0x0000000000414D60 string=0x0000000000414D64 "@"
 *   insn=0x0000000000414D70 string=0x0000000000414D74 "4"
 *   insn=0x0000000000414D74 string=0x0000000000414DB8 "t~@"
 *   insn=0x0000000000414D78 string=0x0000000000414D7C ""
 *   insn=0x0000000000414D88 string=0x0000000000414D8C "\t@"
 *   insn=0x0000000000414D98 string=0x0000000000414D9C ""
 *   insn=0x0000000000414DA8 string=0x0000000000414DAC "@"
 *   insn=0x0000000000414DB8 string=0x0000000000414DBC "4"
 *   insn=0x0000000000414DC0 string=0x0000000000414DC4 ""
 *   insn=0x0000000000414DD0 string=0x0000000000414DD4 "\t@"
 *   insn=0x0000000000414DE0 string=0x0000000000414DE4 ""
 *   insn=0x0000000000414DF0 string=0x0000000000414DF4 "@"
 *   insn=0x0000000000414E0C string=0x0000000000414E10 ""
 *   insn=0x0000000000414E1C string=0x0000000000414EB0 "u"
 *   insn=0x0000000000414E20 string=0x0000000000414E24 ""
 *   insn=0x0000000000414E28 string=0x0000000000414E2C "!"
 *   insn=0x0000000000414E30 string=0x0000000000414E34 "\t@"
 *   insn=0x0000000000414E40 string=0x0000000000414E44 ""
 *   insn=0x0000000000414E48 string=0x0000000000414E4C "!"
 *   insn=0x0000000000414E50 string=0x0000000000414E54 "@"
 *   insn=0x0000000000414E64 string=0x0000000000414E68 "l"
 *   insn=0x0000000000414E6C string=0x0000000000414E70 "u~@"
 *   insn=0x0000000000414E70 string=0x0000000000414E74 "5"
 *   insn=0x0000000000414E74 string=0x0000000000414E78 "h"
 *   insn=0x0000000000414E7C string=0x0000000000414E80 "u"
 *   insn=0x0000000000414E80 string=0x0000000000414E84 "u"
 *   insn=0x0000000000414E84 string=0x0000000000414E88 "R"
 *   insn=0x0000000000414E88 string=0x0000000000414FD0 "u~@"
 *   insn=0x0000000000414E8C string=0x0000000000414E90 "u"
 *   insn=0x0000000000414E94 string=0x0000000000414E98 "<"
 *   insn=0x0000000000414E98 string=0x0000000000414F88 "u"
 *   insn=0x0000000000414E9C string=0x0000000000414EA0 "u"
 *   insn=0x0000000000414EA4 string=0x0000000000414EA8 "&"
 *   insn=0x0000000000414EA8 string=0x0000000000414F40 "u"
 *   insn=0x0000000000414EB0 string=0x0000000000414EB4 "5"
 *   insn=0x0000000000414EB4 string=0x0000000000414EF8 "u"
 *   insn=0x0000000000414EB8 string=0x0000000000414EBC ""
 *   insn=0x0000000000414EC8 string=0x0000000000414ECC "\t@"
 *   insn=0x0000000000414ED8 string=0x0000000000414EDC ""
 *   insn=0x0000000000414EE8 string=0x0000000000414EEC "@"
 *   insn=0x0000000000414EF8 string=0x0000000000414EFC "5"
 *   insn=0x0000000000414F00 string=0x0000000000414F04 ""
 *   insn=0x0000000000414F10 string=0x0000000000414F14 "\t@"
 *   insn=0x0000000000414F20 string=0x0000000000414F24 ""
 *   insn=0x0000000000414F30 string=0x0000000000414F34 "@"
 *   insn=0x0000000000414F40 string=0x0000000000414F44 "5"
 *   insn=0x0000000000414F48 string=0x0000000000414F4C ""
 *   insn=0x0000000000414F58 string=0x0000000000414F5C "\t@"
 *   insn=0x0000000000414F68 string=0x0000000000414F6C ""
 *   insn=0x0000000000414F78 string=0x0000000000414F7C "@"
 *   insn=0x0000000000414F88 string=0x0000000000414F8C "5"
 *   insn=0x0000000000414F90 string=0x0000000000414F94 ""
 *   insn=0x0000000000414FA0 string=0x0000000000414FA4 "\t@"
 *   insn=0x0000000000414FB0 string=0x0000000000414FB4 ""
 *   insn=0x0000000000414FC0 string=0x0000000000414FC4 "@"
 *   insn=0x0000000000414FD0 string=0x0000000000414FD4 "5"
 *   insn=0x0000000000414FD8 string=0x0000000000414FDC ""
 *   insn=0x0000000000414FE8 string=0x0000000000414FEC "\t@"
 *   insn=0x0000000000414FF8 string=0x0000000000414FFC ""
 *   insn=0x0000000000415008 string=0x000000000041500C "@"
 *   insn=0x0000000000415020 string=0x0000000000415024 "("
 *   insn=0x0000000000415038 string=0x000000000041503C ")"
 *   insn=0x000000000041504C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SceneObject::GetComponentsWithInterface<Caver::ProgramComponent>(__int64 result, __int64 a2)
{
  _DWORD **v3; // x23
  _DWORD **i; // x24
  _DWORD *v5; // x19
  _QWORD *v6; // x1
  int v7; // w8

  _ReadStatusReg(TPIDR_EL0);
  v3 = *(_DWORD ***)(result + 192);
  for ( i = *(_DWORD ***)(result + 200); i != v3; ++v3 )
  {
    v5 = *v3;
    if ( *v3 )
      ++v5[2];
    result = (*(__int64 (__fastcall **)(_DWORD *, _QWORD (*)(Caver::ProgramComponent *__hidden)))(*(_QWORD *)v5 + 160LL))(
               v5,
               Caver::ProgramComponent::Interface);
    if ( (result & 1) != 0 )
    {
      v6 = *(_QWORD **)(a2 + 8);
      if ( v6 == *(_QWORD **)(a2 + 16) )
      {
        result = std::vector<Caver::ProgramComponent *>::_M_insert_aux(a2, v6);
      }
      else
      {
        *v6 = v5;
        *(_QWORD *)(a2 + 8) += 8LL;
      }
    }
    v7 = v5[2] - 1;
    v5[2] = v7;
    if ( !v7 )
      result = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  return result;
}

