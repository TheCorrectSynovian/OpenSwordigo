/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000397B98
 * Mangled: _ZN5Caver24OnlineMenuViewController8LoadViewEv
 * Demangled: Caver::OnlineMenuViewController::LoadView(void)
 *
 * Callers: 0
 *
 * Callees: 10
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6B70  boost::detail::function::has_empty_target(...)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F9BE0  Caver::GUIControl::AddTargetActionForControlEvent(void *,boost::function<void ()(void *,Caver::GUIEvent *)> const&,Caver::GUIControl::Event)
 *   0x00000000001FB080  Caver::OnlineMenuView::OnlineMenuView(void)
 *   0x0000000000203C90  boost::shared_ptr<Caver::OnlineMenuView>::shared_ptr<Caver::OnlineMenuView>(Caver::OnlineMenuView *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000039801C  Caver::OnlineMenuViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 104
 *   insn=0x0000000000397BA8 string=0x0000000000397BAC "V"
 *   insn=0x0000000000397BC0 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000397BC4 string=0x0000000000397BC8 "."
 *   insn=0x0000000000397BC8 string=0x00000000001FB080 "0'"
 *   insn=0x0000000000397BD0 string=0x0000000000397BD4 "/"
 *   insn=0x0000000000397BD4 string=0x0000000000397BD8 "h"
 *   insn=0x0000000000397BE4 string=0x0000000000397BE8 "i"
 *   insn=0x0000000000397BEC string=0x0000000000397BF0 "4"
 *   insn=0x0000000000397BF0 string=0x0000000000397C34 "h&@"
 *   insn=0x0000000000397BF4 string=0x0000000000397BF8 ""
 *   insn=0x0000000000397C08 string=0x0000000000397C0C "\t@"
 *   insn=0x0000000000397C14 string=0x0000000000397C18 ""
 *   insn=0x0000000000397C28 string=0x0000000000397C2C "@"
 *   insn=0x0000000000397C34 string=0x0000000000397C38 "\tq@"
 *   insn=0x0000000000397C38 string=0x0000000000397C3C "?I"
 *   insn=0x0000000000397C40 string=0x0000000000397C78 "t*@"
 *   insn=0x0000000000397C44 string=0x0000000000397C48 "I"
 *   insn=0x0000000000397C48 string=0x0000000000397C4C "\tq"
 *   insn=0x0000000000397C4C string=0x0000000000397C50 "@"
 *   insn=0x0000000000397C50 string=0x0000000000397C54 "i"
 *   insn=0x0000000000397C54 string=0x0000000000583734 "o"
 *   insn=0x0000000000397C58 string=0x0000000000397C5C "!5G"
 *   insn=0x0000000000397C64 string=0x0000000000397C68 ""
 *   insn=0x0000000000397C68 string=0x0000000000397C6C "-@"
 *   insn=0x0000000000397C70 string=0x0000000000397C74 "h&@"
 *   insn=0x0000000000397C7C string=0x0000000000397C8C "u"
 *   insn=0x0000000000397C80 string=0x0000000000397C84 ")\t"
 *   insn=0x0000000000397C8C string=0x0000000000397C90 "h"
 *   insn=0x0000000000397C90 string=0x0000000000397C94 "5"
 *   insn=0x0000000000397C94 string=0x0000000000397CD8 "`"@"
 *   insn=0x0000000000397C98 string=0x0000000000397C9C ""
 *   insn=0x0000000000397CA8 string=0x0000000000397CAC "\t@"
 *   insn=0x0000000000397CB8 string=0x0000000000397CBC ""
 *   insn=0x0000000000397CC8 string=0x0000000000397CCC "@"
 *   insn=0x0000000000397CDC string=0x0000000000397CE0 ""
 *   insn=0x0000000000397CDC string=0x0000000000397CF0 "4"
 *   insn=0x0000000000397CE0 string=0x0000000000397CE4 ""
 *   insn=0x0000000000397CF0 string=0x0000000000397D34 "h&@"
 *   insn=0x0000000000397CF4 string=0x0000000000397CF8 ""
 *   insn=0x0000000000397D08 string=0x0000000000397D0C "\t@"
 *   insn=0x0000000000397D14 string=0x0000000000397D18 ""
 *   insn=0x0000000000397D28 string=0x0000000000397D2C "@"
 *   insn=0x0000000000397D34 string=0x0000000000397D38 "u"
 *   insn=0x0000000000397D5C string=0x0000000000397D60 "`"
 *   insn=0x0000000000397D5C string=0x00000000001F6B70 "0'"
 *   insn=0x0000000000397D64 string=0x0000000000397D68 ""
 *   insn=0x0000000000397D78 string=0x0000000000397D7C "h"
 *   insn=0x0000000000397D7C string=0x0000000000397D80 "1A"
 *   insn=0x0000000000397D98 string=0x00000000001F9BE0 "0'"
 *   insn=0x0000000000397D9C string=0x0000000000397DA0 "h"
 *   insn=0x0000000000397DA0 string=0x0000000000397DA4 "("
 *   insn=0x0000000000397DA0 string=0x0000000000397DCC "h&@"
 *   insn=0x0000000000397DA4 string=0x0000000000397DA8 ""
 *   insn=0x0000000000397DA8 string=0x0000000000397DAC ""
 *   insn=0x0000000000397DB4 string=0x0000000000397DB8 " !"
 *   insn=0x0000000000397DE8 string=0x0000000000397DEC "a{"
 *   insn=0x0000000000397DEC string=0x0000000000397DF0 "`"
 *   insn=0x0000000000397DF4 string=0x0000000000397DF8 ""
 *   insn=0x0000000000397E08 string=0x0000000000397E0C "h"
 *   insn=0x0000000000397E0C string=0x0000000000397E10 "1A"
 *   insn=0x0000000000397E24 string=0x0000000000397E28 "n"
 *   insn=0x0000000000397E2C string=0x0000000000397E30 "h"
 *   insn=0x0000000000397E30 string=0x0000000000397E34 "("
 *   insn=0x0000000000397E30 string=0x0000000000397E5C "h&@"
 *   insn=0x0000000000397E34 string=0x0000000000397E38 ""
 *   insn=0x0000000000397E38 string=0x0000000000397E3C ""
 *   insn=0x0000000000397E44 string=0x0000000000397E48 " !"
 *   insn=0x0000000000397E78 string=0x0000000000397E7C "={"
 *   insn=0x0000000000397E7C string=0x0000000000397E80 "`"
 *   insn=0x0000000000397E84 string=0x0000000000397E88 ""
 *   insn=0x0000000000397E98 string=0x0000000000397E9C "h"
 *   insn=0x0000000000397E9C string=0x0000000000397EA0 "1A"
 *   insn=0x0000000000397EB4 string=0x0000000000397EB8 "J"
 *   insn=0x0000000000397EBC string=0x0000000000397EC0 "h"
 *   insn=0x0000000000397EC0 string=0x0000000000397EC4 "("
 *   insn=0x0000000000397EC4 string=0x0000000000397EC8 ""
 *   insn=0x0000000000397EC8 string=0x0000000000397ECC ""
 *   insn=0x0000000000397ED4 string=0x0000000000397ED8 " !"
 *   insn=0x0000000000397F10 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000397F14 string=0x0000000000397F18 "4"
 *   insn=0x0000000000397F1C string=0x0000000000397F20 ""
 *   insn=0x0000000000397F2C string=0x0000000000397F30 "\t@"
 *   insn=0x0000000000397F3C string=0x0000000000397F40 ""
 *   insn=0x0000000000397F4C string=0x0000000000397F50 "@"
 *   insn=0x0000000000397F58 string=0x0000000000397F5C "("
 *   insn=0x0000000000397F68 string=0x0000000000397F6C "h"
 *   insn=0x0000000000397F6C string=0x0000000000397F70 ""
 *   insn=0x0000000000397F70 string=0x0000000000397F74 ""
 *   insn=0x0000000000397F74 string=0x0000000000397F78 ""
 *   insn=0x0000000000397F7C string=0x0000000000397F80 " !"
 *   insn=0x0000000000397F98 string=0x0000000000397F9C ""
 *   insn=0x0000000000397FA0 string=0x0000000000397FA4 ""
 *   insn=0x0000000000397FA4 string=0x0000000000397FA8 ""
 *   insn=0x0000000000397FA8 string=0x0000000000397FAC "h"
 *   insn=0x0000000000397FB0 string=0x0000000000397FB4 " !"
 *   insn=0x0000000000397FC0 string=0x0000000000397FC4 ""
 *   insn=0x0000000000397FCC string=0x0000000000397FD0 "h"
 *   insn=0x0000000000397FD0 string=0x0000000000397FD4 "("
 *   insn=0x0000000000397FD4 string=0x0000000000397FD8 ""
 *   insn=0x0000000000397FD8 string=0x0000000000397FDC ""
 *   insn=0x0000000000397FE4 string=0x0000000000397FE8 " !"
 *   insn=0x0000000000397FFC string=0x0000000000398000 "1"
 *   insn=0x0000000000398010 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000398014 string=0x0000000000398018 "+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::OnlineMenuViewController::LoadView(Caver::OnlineMenuViewController *this)
{
  Caver::OnlineMenuView *v2; // x0
  _QWORD *v3; // x20
  unsigned __int64 v4; // x8
  __int64 v5; // x8
  __int64 v6; // x8
  __int64 v7; // x8
  float *v8; // x0
  _QWORD *v9; // x20
  _QWORD *v10; // x21
  __int64 v11; // x8
  __int64 v12; // x8
  void (__fastcall ***v13)(_QWORD, Caver::OnlineMenuViewController *); // x0
  __int64 v14; // x8
  __int64 v15; // x8
  int64x2_t v16; // q0
  __int64 (__fastcall **v17)(); // x8
  void (__fastcall *v18)(int64x2_t *, int64x2_t *, __int64); // x8
  int64x2_t v19; // q0
  __int64 (__fastcall **v20)(); // x8
  void (__fastcall *v21)(int64x2_t *, int64x2_t *, __int64); // x8
  int64x2_t v22; // q0
  __int64 (__fastcall **v23)(); // x8
  __int64 result; // x0
  __int64 (__fastcall *v25)(int64x2_t *, int64x2_t *, __int64); // x8
  __int64 v26; // [xsp+0h] [xbp-60h]
  __int64 (__fastcall **v27)(); // [xsp+0h] [xbp-60h]
  __int64 (__fastcall **v28)(); // [xsp+0h] [xbp-60h]
  __int64 (__fastcall **v29)(); // [xsp+0h] [xbp-60h]
  int64x2_t v30; // [xsp+8h] [xbp-58h] BYREF
  Caver::OnlineMenuViewController *v31; // [xsp+18h] [xbp-48h]
  int64x2_t v32; // [xsp+20h] [xbp-40h]
  Caver::OnlineMenuViewController *v33; // [xsp+30h] [xbp-30h]
  __int64 v34; // [xsp+38h] [xbp-28h]

  v34 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = (Caver::OnlineMenuView *)operator new(0x148u);
  Caver::OnlineMenuView::OnlineMenuView(v2);
  boost::shared_ptr<Caver::OnlineMenuView>::shared_ptr<Caver::OnlineMenuView>();
  v3 = (_QWORD *)*((_QWORD *)this + 10);
  v4 = v30.n128_u64[0];
  *((_QWORD *)this + 9) = v26;
  *((_QWORD *)this + 10) = v4;
  v30.n128_u64[0] = (unsigned __int64)v3;
  if ( v3 )
  {
    v5 = v3[1] - 1LL;
    v3[1] = v5;
    if ( !v5 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
      v6 = v3[2] - 1LL;
      v3[2] = v6;
      if ( !v6 )
        (*(void (__fastcall **)(_QWORD *))(*v3 + 24LL))(v3);
    }
  }
  v7 = *((_QWORD *)this + 9);
  if ( *(_DWORD *)(v7 + 112) != 18 )
  {
    v8 = *(float **)(v7 + 88);
    *(_DWORD *)(v7 + 112) = 18;
    if ( v8 )
    {
      if ( v8[35] > 0.001 )
      {
        (*(void (__fastcall **)(float *))(*(_QWORD *)v8 + 88LL))(v8);
        v7 = *((_QWORD *)this + 9);
      }
    }
  }
  v9 = (_QWORD *)*((_QWORD *)this + 10);
  if ( v9 )
    v9[1] += 2LL;
  v10 = (_QWORD *)*((_QWORD *)this + 4);
  *((_QWORD *)this + 3) = v7;
  *((_QWORD *)this + 4) = v9;
  if ( v10 )
  {
    v11 = v10[1] - 1LL;
    v10[1] = v11;
    if ( !v11 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
      v12 = v10[2] - 1LL;
      v10[2] = v12;
      if ( !v12 )
        (*(void (__fastcall **)(_QWORD *))(*v10 + 24LL))(v10);
    }
  }
  v13 = (void (__fastcall ***)(_QWORD, Caver::OnlineMenuViewController *))*((_QWORD *)this + 8);
  if ( v13 )
    (**v13)(v13, this);
  if ( v9 )
  {
    v14 = v9[1] - 1LL;
    v9[1] = v14;
    if ( !v14 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
      v15 = v9[2] - 1LL;
      v9[2] = v15;
      if ( !v15 )
        (*(void (__fastcall **)(_QWORD *))(*v9 + 24LL))(v9);
    }
  }
  v16 = vdupq_n_s64(0);
  v33 = this;
  v16.n128_u64[0] = (unsigned __int64)Caver::OnlineMenuViewController::ButtonPressed;
  v32 = v16;
  if ( (boost::detail::function::has_empty_target() & 1) != 0 )
  {
    v17 = 0;
  }
  else
  {
    v31 = v33;
    v30 = v32;
    v17 = boost::function2<void,void *,Caver::GUIEvent *>::assign_to<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::OnlineMenuViewController,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::OnlineMenuViewController*>,boost::arg<1>,boost::arg<2>>>>(boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::OnlineMenuViewController,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::OnlineMenuViewController*>,boost::arg<1>,boost::arg<2>>>)::stored_vtable;
  }
  v27 = v17;
  Caver::GUIControl::AddTargetActionForControlEvent();
  if ( v27 )
  {
    if ( ((unsigned __int8)v27 & 1) == 0 )
    {
      v18 = *(void (__fastcall **)(int64x2_t *, int64x2_t *, __int64))((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFFELL);
      if ( v18 )
        v18(&v30, &v30, 2);
    }
  }
  v19 = vdupq_n_s64(0);
  v19.n128_u64[0] = (unsigned __int64)Caver::OnlineMenuViewController::ButtonPressed;
  v32 = v19;
  v33 = this;
  if ( (boost::detail::function::has_empty_target() & 1) != 0 )
  {
    v20 = 0;
  }
  else
  {
    v31 = v33;
    v30 = v32;
    v20 = boost::function2<void,void *,Caver::GUIEvent *>::assign_to<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::OnlineMenuViewController,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::OnlineMenuViewController*>,boost::arg<1>,boost::arg<2>>>>(boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::OnlineMenuViewController,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::OnlineMenuViewController*>,boost::arg<1>,boost::arg<2>>>)::stored_vtable;
  }
  v28 = v20;
  Caver::GUIControl::AddTargetActionForControlEvent();
  if ( v28 )
  {
    if ( ((unsigned __int8)v28 & 1) == 0 )
    {
      v21 = *(void (__fastcall **)(int64x2_t *, int64x2_t *, __int64))((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFFELL);
      if ( v21 )
        v21(&v30, &v30, 2);
    }
  }
  v22 = vdupq_n_s64(0);
  v22.n128_u64[0] = (unsigned __int64)Caver::OnlineMenuViewController::ButtonPressed;
  v32 = v22;
  v33 = this;
  if ( (boost::detail::function::has_empty_target() & 1) != 0 )
  {
    v23 = 0;
  }
  else
  {
    v31 = v33;
    v30 = v32;
    v23 = boost::function2<void,void *,Caver::GUIEvent *>::assign_to<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::OnlineMenuViewController,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::OnlineMenuViewController*>,boost::arg<1>,boost::arg<2>>>>(boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::OnlineMenuViewController,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::OnlineMenuViewController*>,boost::arg<1>,boost::arg<2>>>)::stored_vtable;
  }
  v29 = v23;
  result = Caver::GUIControl::AddTargetActionForControlEvent();
  if ( v29 && ((unsigned __int8)v29 & 1) == 0 )
  {
    v25 = *(__int64 (__fastcall **)(int64x2_t *, int64x2_t *, __int64))((unsigned __int64)v29 & 0xFFFFFFFFFFFFFFFELL);
    if ( v25 )
      return v25(&v30, &v30, 2);
  }
  return result;
}

