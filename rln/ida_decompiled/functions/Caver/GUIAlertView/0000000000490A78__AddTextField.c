/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000490A78
 * Mangled: _ZN5Caver12GUIAlertView12AddTextFieldERKN5boost10shared_ptrINS_12GUITextFieldEEE
 * Demangled: Caver::GUIAlertView::AddTextField(boost::shared_ptr<Caver::GUITextField> const&)
 *
 * Callers: 1
 *   0x00000000001F4880  Caver::GUIAlertView::AddTextField(boost::shared_ptr<Caver::GUITextField> const&)
 *
 * Callees: 9
 *   0x00000000001F3EE0  std::vector<boost::shared_ptr<Caver::GUIButton>,std::allocator<boost::shared_ptr<Caver::GUIButton>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GUIButton>*,std::vector<boost::shared_ptr<Caver::GUIButton>,std::allocator<boost::shared_ptr<Caver::GUIButton>>>>,boost::shared_ptr<Caver::GUIButton> const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6B70  boost::detail::function::has_empty_target(...)
 *   0x00000000001F7610  Caver::GUIAlertView::UpdateLayout(void)
 *   0x00000000001F9BE0  Caver::GUIControl::AddTargetActionForControlEvent(void *,boost::function<void ()(void *,Caver::GUIEvent *)> const&,Caver::GUIControl::Event)
 *   0x00000000001FA940  std::vector<boost::shared_ptr<Caver::GUITextField>,std::allocator<boost::shared_ptr<Caver::GUITextField>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GUITextField>*,std::vector<boost::shared_ptr<Caver::GUITextField>,std::allocator<boost::shared_ptr<Caver::GUITextField>>>>,boost::shared_ptr<Caver::GUITextField> const&)
 *   0x0000000000200880  Caver::GUIAlertView::Dismiss(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 108
 *   insn=0x0000000000490A88 string=0x0000000000490A8C "V"
 *   insn=0x0000000000490A9C string=0x0000000000490AA0 "h"
 *   insn=0x0000000000490AA4 string=0x0000000000490AA8 "1@"
 *   insn=0x0000000000490AB8 string=0x0000000000490ABC "*"
 *   insn=0x0000000000490ABC string=0x0000000000490AC0 "J"
 *   insn=0x0000000000490AC0 string=0x0000000000490AC4 "*"
 *   insn=0x0000000000490AD4 string=0x0000000000490AD8 "5"
 *   insn=0x0000000000490AD8 string=0x0000000000490B1C "a"
 *   insn=0x0000000000490ADC string=0x0000000000490AE0 ""
 *   insn=0x0000000000490AF0 string=0x0000000000490AF4 "\t@"
 *   insn=0x0000000000490AFC string=0x0000000000490B00 ""
 *   insn=0x0000000000490B10 string=0x0000000000490B14 "@"
 *   insn=0x0000000000490B1C string=0x0000000000490B20 "?"
 *   insn=0x0000000000490B24 string=0x0000000000490B54 "`"
 *   insn=0x0000000000490B28 string=0x0000000000490B2C "("
 *   insn=0x0000000000490B30 string=0x0000000000490B34 "("
 *   insn=0x0000000000490B38 string=0x0000000000490B3C "\t"
 *   insn=0x0000000000490B38 string=0x0000000000490B48 "(@"
 *   insn=0x0000000000490B3C string=0x0000000000490B40 ")"
 *   insn=0x0000000000490B40 string=0x0000000000490B44 "\t"
 *   insn=0x0000000000490B48 string=0x0000000000490B4C "h"
 *   insn=0x0000000000490B58 string=0x0000000000490B5C "y"
 *   insn=0x0000000000490B5C string=0x00000000001FA940 "0'"
 *   insn=0x0000000000490B60 string=0x0000000000490B64 "iB"
 *   insn=0x0000000000490B68 string=0x0000000000490B6C "\t"
 *   insn=0x0000000000490B70 string=0x00000000001F7610 "0'"
 *   insn=0x0000000000490B98 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000490BA0 string=0x0000000000490BA4 "4"
 *   insn=0x0000000000490BA8 string=0x0000000000490BAC ""
 *   insn=0x0000000000490BB8 string=0x0000000000490BBC "\t@"
 *   insn=0x0000000000490BC8 string=0x0000000000490BCC ""
 *   insn=0x0000000000490BD8 string=0x0000000000490BDC "@"
 *   insn=0x0000000000490BE8 string=0x0000000000490BEC "6"
 *   insn=0x0000000000490C04 string=0x0000000000490C08 "V"
 *   insn=0x0000000000490C18 string=0x0000000000490C1C "h"
 *   insn=0x0000000000490C20 string=0x0000000000490C24 "1@"
 *   insn=0x0000000000490C34 string=0x0000000000490C38 "*"
 *   insn=0x0000000000490C38 string=0x0000000000490C3C "J"
 *   insn=0x0000000000490C3C string=0x0000000000490C40 "*"
 *   insn=0x0000000000490C50 string=0x0000000000490C54 "5"
 *   insn=0x0000000000490C54 string=0x0000000000490C98 "a"V"
 *   insn=0x0000000000490C58 string=0x0000000000490C5C ""
 *   insn=0x0000000000490C6C string=0x0000000000490C70 "\t@"
 *   insn=0x0000000000490C78 string=0x0000000000490C7C ""
 *   insn=0x0000000000490C8C string=0x0000000000490C90 "@"
 *   insn=0x0000000000490C98 string=0x0000000000490C9C "?"
 *   insn=0x0000000000490CA0 string=0x0000000000490CD0 "`b"
 *   insn=0x0000000000490CA4 string=0x0000000000490CA8 "("
 *   insn=0x0000000000490CAC string=0x0000000000490CB0 "("
 *   insn=0x0000000000490CB4 string=0x0000000000490CB8 "\t"
 *   insn=0x0000000000490CB4 string=0x0000000000490CC4 "(@"
 *   insn=0x0000000000490CB8 string=0x0000000000490CBC ")"
 *   insn=0x0000000000490CBC string=0x0000000000490CC0 "\t"
 *   insn=0x0000000000490CC4 string=0x0000000000490CC8 "h"
 *   insn=0x0000000000490CD8 string=0x00000000001F3EE0 "P'"
 *   insn=0x0000000000490CE4 string=0x0000000000490CE8 "!E"
 *   insn=0x0000000000490D00 string=0x0000000000490D04 "`"
 *   insn=0x0000000000490D00 string=0x00000000001F6B70 "0'"
 *   insn=0x0000000000490D08 string=0x0000000000490D0C ""
 *   insn=0x0000000000490D20 string=0x0000000000490D24 ""
 *   insn=0x0000000000490D3C string=0x00000000001F9BE0 "0'"
 *   insn=0x0000000000490D40 string=0x0000000000490D44 "h"
 *   insn=0x0000000000490D44 string=0x0000000000490D48 "("
 *   insn=0x0000000000490D48 string=0x0000000000490D4C ""
 *   insn=0x0000000000490D4C string=0x0000000000490D50 ""
 *   insn=0x0000000000490D58 string=0x0000000000490D5C " !"
 *   insn=0x0000000000490D70 string=0x0000000000490D74 "'"
 *   insn=0x0000000000490D84 string=0x0000000000490D9C "M"
 *   insn=0x0000000000490DA4 string=0x0000000000490DA8 ""
 *   insn=0x0000000000490DA8 string=0x0000000000490DAC "("
 *   insn=0x0000000000490DAC string=0x0000000000490DB0 ""
 *   insn=0x0000000000490DB0 string=0x0000000000490DB4 ""
 *   insn=0x0000000000490DBC string=0x0000000000490DC0 " !"
 *   insn=0x0000000000490DE0 string=0x0000000000490DE4 "4"
 *   insn=0x0000000000490DE8 string=0x0000000000490DEC ""
 *   insn=0x0000000000490DF8 string=0x0000000000490DFC "\t@"
 *   insn=0x0000000000490E08 string=0x0000000000490E0C ""
 *   insn=0x0000000000490E18 string=0x0000000000490E1C "@"
 *   insn=0x0000000000490E2C string=0x0000000000490E30 "G"
 *   insn=0x0000000000490E44 string=0x0000000000490E48 "h"
 *   insn=0x0000000000490E4C string=0x0000000000490E50 ")"
 *   insn=0x0000000000490E50 string=0x0000000000490E54 ")"
 *   insn=0x0000000000490E54 string=0x0000000000490E58 "?"
 *   insn=0x0000000000490E5C string=0x0000000000490EB8 "h&W"
 *   insn=0x0000000000490E64 string=0x0000000000490E68 "iv"
 *   insn=0x0000000000490E6C string=0x0000000000490E70 "a"
 *   insn=0x0000000000490E70 string=0x0000000000490E74 "`"
 *   insn=0x0000000000490E70 string=0x0000000000490E9C "h"
 *   insn=0x0000000000490E78 string=0x0000000000490E7C ""
 *   insn=0x0000000000490E84 string=0x0000000000490E88 ""
 *   insn=0x0000000000490E8C string=0x0000000000490E90 "`"
 *   insn=0x0000000000490E94 string=0x0000000000490E98 "z"
 *   insn=0x0000000000490EA4 string=0x0000000000490EA8 ")"
 *   insn=0x0000000000490EA8 string=0x0000000000490EAC ")"
 *   insn=0x0000000000490EB8 string=0x0000000000490EBC ")"
 *   insn=0x0000000000490EBC string=0x0000000000490EC0 ")"
 *   insn=0x0000000000490EC0 string=0x0000000000490EC4 "?"
 *   insn=0x0000000000490ED4 string=0x0000000000490F10 "iu"
 *   insn=0x0000000000490EDC string=0x0000000000490EE0 ""
 *   insn=0x0000000000490EDC string=0x0000000000490F1C "h&W"
 *   insn=0x0000000000490EE0 string=0x0000000000490EE4 "i"
 *   insn=0x0000000000490EE8 string=0x0000000000490EEC ""
 *   insn=0x0000000000490EEC string=0x0000000000490EF0 "I"
 *   insn=0x0000000000490EF0 string=0x0000000000490EF4 ")"
 *   insn=0x0000000000490F04 string=0x0000000000490F08 "^"
 *   insn=0x0000000000490F18 string=0x0000000000490ED8 "`"
 *   insn=0x0000000000490F24 string=0x0000000000490F28 ")"
 *   insn=0x0000000000490F28 string=0x0000000000490F2C ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIAlertView::AddTextField(Caver::GUIAlertView *a1, _QWORD *a2)
{
  void (__fastcall *v4)(Caver::GUIAlertView *, __int64 *); // x8
  _QWORD *v5; // x9
  _QWORD *v6; // x21
  __int64 v7; // x8
  __int64 v8; // x8
  _QWORD *v9; // x1
  __int64 v10; // x8
  __int64 v12; // [xsp+A8h] [xbp-38h] BYREF
  _QWORD *v13; // [xsp+B0h] [xbp-30h]
  __int64 v14; // [xsp+B8h] [xbp-28h]

  v14 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *(void (__fastcall **)(Caver::GUIAlertView *, __int64 *))(*(_QWORD *)a1 + 96LL);
  v12 = *a2;
  v5 = (_QWORD *)a2[1];
  v13 = v5;
  if ( v5 )
    ++v5[1];
  v4(a1, &v12);
  v6 = v13;
  if ( v13 )
  {
    v7 = v13[1] - 1LL;
    v13[1] = v7;
    if ( !v7 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
      v8 = v6[2] - 1LL;
      v6[2] = v8;
      if ( !v8 )
        (*(void (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
    }
  }
  v9 = (_QWORD *)*((_QWORD *)a1 + 41);
  if ( v9 == *((_QWORD **)a1 + 42) )
  {
    std::vector<boost::shared_ptr<Caver::GUITextField>>::_M_insert_aux();
  }
  else
  {
    *v9 = *a2;
    v10 = a2[1];
    v9[1] = v10;
    if ( v10 )
      ++*(_QWORD *)(v10 + 8);
    *((_QWORD *)a1 + 41) = v9 + 2;
  }
  *(_QWORD *)(*a2 + 312LL) = (char *)a1 + 272;
  return Caver::GUIAlertView::UpdateLayout(a1);
}

