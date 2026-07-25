/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BC92C
 * Mangled: _ZN5Caver22ProfileManager_Android20ShowCloudLoadingViewEv
 * Demangled: Caver::ProfileManager_Android::ShowCloudLoadingView(void)
 *
 * Callers: 0
 *
 * Callees: 10
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6B70  boost::detail::function::has_empty_target(...)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F9BE0  Caver::GUIControl::AddTargetActionForControlEvent(void *,boost::function<void ()(void *,Caver::GUIEvent *)> const&,Caver::GUIControl::Event)
 *   0x00000000001FD890  Caver::ProfileManagerLoadingViewController::ProfileManagerLoadingViewController(void)
 *   0x00000000001FF410  Caver::ProfileManagerLoadingViewController::DismissAfterMinimumDelay(float)
 *   0x0000000000201C60  boost::shared_ptr<Caver::ProfileManagerLoadingViewController>::shared_ptr<Caver::ProfileManagerLoadingViewController>(Caver::ProfileManagerLoadingViewController *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 101
 *   insn=0x00000000004BC940 string=0x00000000004BC944 "W"
 *   insn=0x00000000004BC954 string=0x00000000004BC958 "h"
 *   insn=0x00000000004BC964 string=0x00000000004BC968 "!"
 *   insn=0x00000000004BC988 string=0x00000000004BC98C "h"
 *   insn=0x00000000004BC988 string=0x00000000004BC998 "v"
 *   insn=0x00000000004BC98C string=0x00000000004BC990 ""
 *   insn=0x00000000004BC990 string=0x00000000004BC994 "h"
 *   insn=0x00000000004BC9A0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004BC9AC string=0x00000000001FD890 "0'"
 *   insn=0x00000000004BC9D0 string=0x00000000004BC9D4 "5"
 *   insn=0x00000000004BC9D8 string=0x00000000004BC9DC ""
 *   insn=0x00000000004BC9E8 string=0x00000000004BC9EC "\t@"
 *   insn=0x00000000004BC9F8 string=0x00000000004BC9FC ""
 *   insn=0x00000000004BCA08 string=0x00000000004BCA0C "@"
 *   insn=0x00000000004BCA1C string=0x00000000004BCA2C ""
 *   insn=0x00000000004BCA20 string=0x00000000004BCA24 ""
 *   insn=0x00000000004BCA30 string=0x00000000004BCA34 ")@"
 *   insn=0x00000000004BCA44 string=0x00000000004BCA48 "*"
 *   insn=0x00000000004BCA48 string=0x00000000004BCA4C "J"
 *   insn=0x00000000004BCA4C string=0x00000000004BCA50 "*"
 *   insn=0x00000000004BCA5C string=0x00000000004BCA60 "6"
 *   insn=0x00000000004BCA60 string=0x00000000004BCAA4 "5"
 *   insn=0x00000000004BCA64 string=0x00000000004BCA68 ""
 *   insn=0x00000000004BCA74 string=0x00000000004BCA78 "\t@"
 *   insn=0x00000000004BCA84 string=0x00000000004BCA88 ""
 *   insn=0x00000000004BCA94 string=0x00000000004BCA98 "@"
 *   insn=0x00000000004BCAA8 string=0x00000000004BCAAC ""
 *   insn=0x00000000004BCAB8 string=0x00000000004BCABC "\t@"
 *   insn=0x00000000004BCAC8 string=0x00000000004BCACC ""
 *   insn=0x00000000004BCAD8 string=0x00000000004BCADC "@"
 *   insn=0x00000000004BCAF0 string=0x00000000004BCAF4 ")@"
 *   insn=0x00000000004BCAFC string=0x00000000004BCB00 "H"
 *   insn=0x00000000004BCB00 string=0x00000000004BCB04 "aF"
 *   insn=0x00000000004BCB14 string=0x00000000004BCB18 "`"
 *   insn=0x00000000004BCB14 string=0x00000000001F6B70 "0'"
 *   insn=0x00000000004BCB1C string=0x00000000004BCB20 ""
 *   insn=0x00000000004BCB30 string=0x00000000004BCB34 "H"
 *   insn=0x00000000004BCB34 string=0x00000000004BCB38 "a@"
 *   insn=0x00000000004BCB4C string=0x00000000004BCB50 "$"
 *   insn=0x00000000004BCB50 string=0x00000000001F9BE0 "0'"
 *   insn=0x00000000004BCB54 string=0x00000000004BCB58 "h"
 *   insn=0x00000000004BCB58 string=0x00000000004BCB5C "("
 *   insn=0x00000000004BCB5C string=0x00000000004BCB60 ""
 *   insn=0x00000000004BCB60 string=0x00000000004BCB64 ""
 *   insn=0x00000000004BCB6C string=0x00000000004BCB70 " !"
 *   insn=0x00000000004BCB84 string=0x00000000004BCB88 "h"
 *   insn=0x00000000004BCB88 string=0x00000000004BCB8C ""
 *   insn=0x00000000004BCB8C string=0x00000000004BCB90 "h"
 *   insn=0x00000000004BCB90 string=0x00000000004BCB94 "A"
 *   insn=0x00000000004BCB94 string=0x00000000004BCB98 "h"
 *   insn=0x00000000004BCB9C string=0x00000000004BCBA0 "\t@"
 *   insn=0x00000000004BCBA4 string=0x00000000004BCBA8 "h\n@"
 *   insn=0x00000000004BCBA8 string=0x00000000004BCBAC ""
 *   insn=0x00000000004BCBAC string=0x00000000004BCBB0 "h\n"
 *   insn=0x00000000004BCBB0 string=0x00000000004BCBB4 "A"
 *   insn=0x00000000004BCBB4 string=0x00000000004BCBB8 "h"
 *   insn=0x00000000004BCBBC string=0x00000000004BCBC0 "@"
 *   insn=0x00000000004BCBC4 string=0x00000000004BCBC8 "e"
 *   insn=0x00000000004BCBCC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004BCBD8 string=0x00000000004BCBDC ";"
 *   insn=0x00000000004BCBDC string=0x00000000004BCCC8 "3"
 *   insn=0x00000000004BCBE4 string=0x00000000004BCBE8 ""
 *   insn=0x00000000004BCBE8 string=0x00000000004BCBEC "("
 *   insn=0x00000000004BCBEC string=0x00000000004BCBF0 ""
 *   insn=0x00000000004BCBF0 string=0x00000000004BCBF4 ""
 *   insn=0x00000000004BCBFC string=0x00000000004BCC00 " !"
 *   insn=0x00000000004BCC14 string=0x00000000004BCC18 "="
 *   insn=0x00000000004BCC14 string=0x00000000004BCCCC "h"
 *   insn=0x00000000004BCC20 string=0x00000000004BCC24 "6"
 *   insn=0x00000000004BCC28 string=0x00000000004BCC2C ""
 *   insn=0x00000000004BCC38 string=0x00000000004BCC3C "\t@"
 *   insn=0x00000000004BCC48 string=0x00000000004BCC4C ""
 *   insn=0x00000000004BCC58 string=0x00000000004BCC5C "@"
 *   insn=0x00000000004BCC6C string=0x00000000004BCC70 ""
 *   insn=0x00000000004BCC7C string=0x00000000004BCC80 "\t@"
 *   insn=0x00000000004BCC8C string=0x00000000004BCC90 ""
 *   insn=0x00000000004BCC9C string=0x00000000004BCCA0 "@"
 *   insn=0x00000000004BCCA8 string=0x00000000004BCCAC ""
 *   insn=0x00000000004BCCB4 string=0x00000000004BCCB8 "~"
 *   insn=0x00000000004BCCB8 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004BCCCC string=0x00000000004BCCD0 ""
 *   insn=0x00000000004BCCD0 string=0x00000000004BCCD4 "h"
 *   insn=0x00000000004BCCD8 string=0x00000000004BCCDC "h"
 *   insn=0x00000000004BCCDC string=0x00000000004BCCE0 "\t@"
 *   insn=0x00000000004BCCE8 string=0x00000000004BCCEC "h\n@"
 *   insn=0x00000000004BCCEC string=0x00000000004BCCF0 ""
 *   insn=0x00000000004BCCF0 string=0x00000000004BCCF4 "h\n"
 *   insn=0x00000000004BCCF8 string=0x00000000004BCCFC "h"
 *   insn=0x00000000004BCCFC string=0x00000000004BCD00 "@"
 *   insn=0x00000000004BCD28 string=0x00000000004BCD2C "@"
 *   insn=0x00000000004BCD40 string=0x00000000004BCD44 "h"
 *   insn=0x00000000004BCD44 string=0x00000000004BCD48 ""
 *   insn=0x00000000004BCD48 string=0x00000000004BCD4C "h"
 *   insn=0x00000000004BCD4C string=0x00000000004BCD50 "!"
 *   insn=0x00000000004BCD50 string=0x00000000004BCD54 "h"
 *   insn=0x00000000004BCD58 string=0x00000000004BCD5C "\t@"
 *   insn=0x00000000004BCD60 string=0x00000000004BCD64 "h\n@"
 *   insn=0x00000000004BCD64 string=0x00000000004BCD68 ""
 *   insn=0x00000000004BCD68 string=0x00000000004BCD6C "h\n"
 *   insn=0x00000000004BCD70 string=0x00000000004BCD80 "h"
 *   insn=0x00000000004BCD90 string=0x00000000004BCD94 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::ProfileManager_Android::ShowCloudLoadingView(_QWORD *this)
{
  _QWORD *v1; // x20
  _QWORD *v2; // x19
  __int64 v3; // x22
  Caver::ProfileManagerLoadingViewController *v4; // x0
  _QWORD *v5; // x21
  unsigned __int64 v6; // x8
  __int64 v7; // x8
  __int64 v8; // x8
  __int64 v9; // x0
  _QWORD *v10; // x21
  void (__fastcall *v11)(__int64); // x8
  unsigned __int64 v12; // x9
  _QWORD *v13; // x22
  __int64 v14; // x8
  __int64 v15; // x8
  __int64 v16; // x8
  __int64 v17; // x8
  int64x2_t v18; // q0
  _UNKNOWN **v19; // x8
  __int64 (__fastcall *v20)(int64x2_t *, int64x2_t *, __int64); // x8
  __int64 v21; // x8
  __int64 v22; // x8
  __int64 v23; // [xsp+20h] [xbp-70h]
  unsigned __int64 v24; // [xsp+20h] [xbp-70h]
  int64x2_t v25; // [xsp+28h] [xbp-68h] BYREF
  _QWORD *v26; // [xsp+38h] [xbp-58h]
  int64x2_t v27; // [xsp+40h] [xbp-50h]
  _QWORD *v28; // [xsp+50h] [xbp-40h]
  __int64 v29; // [xsp+58h] [xbp-38h]

  v1 = this;
  v29 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !this[18] )
  {
    v3 = this[7];
    v2 = (_QWORD *)this[8];
    if ( v2 )
      ++v2[1];
    if ( v3 )
    {
      v4 = (Caver::ProfileManagerLoadingViewController *)operator new(0x60u);
      Caver::ProfileManagerLoadingViewController::ProfileManagerLoadingViewController(v4);
      boost::shared_ptr<Caver::ProfileManagerLoadingViewController>::shared_ptr<Caver::ProfileManagerLoadingViewController>();
      v5 = (_QWORD *)v1[19];
      v6 = v25.n128_u64[0];
      v1[18] = v23;
      v1[19] = v6;
      v25.n128_u64[0] = (unsigned __int64)v5;
      if ( v5 )
      {
        v7 = v5[1] - 1LL;
        v5[1] = v7;
        if ( !v7 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
          v8 = v5[2] - 1LL;
          v5[2] = v8;
          if ( !v8 )
            (*(void (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
        }
      }
      v9 = *(_QWORD *)(v3 + 256);
      v10 = *(_QWORD **)(v3 + 264);
      if ( v10 )
        ++v10[1];
      v11 = *(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 80LL);
      v12 = v1[19];
      v25.n128_u64[0] = v12;
      if ( v12 )
        ++*(_QWORD *)(v12 + 8);
      v11(v9);
      v13 = (_QWORD *)v25.n128_u64[0];
      if ( v25.n128_u64[0] )
      {
        v14 = *(_QWORD *)(v25.n128_u64[0] + 8) - 1LL;
        *(_QWORD *)(v25.n128_u64[0] + 8) = v14;
        if ( !v14 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
          v15 = v13[2] - 1LL;
          v13[2] = v15;
          if ( !v15 )
            (*(void (__fastcall **)(_QWORD *))(*v13 + 24LL))(v13);
        }
      }
      if ( v10 )
      {
        v16 = v10[1] - 1LL;
        v10[1] = v16;
        if ( !v16 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
          v17 = v10[2] - 1LL;
          v10[2] = v17;
          if ( !v17 )
            (*(void (__fastcall **)(_QWORD *))(*v10 + 24LL))(v10);
        }
      }
      v18 = vdupq_n_s64(0);
      v28 = v1;
      v18.n128_u64[0] = (unsigned __int64)&Caver::ProfileManager_Android::SkipLoadingButtonPressed;
      v27 = v18;
      if ( (boost::detail::function::has_empty_target() & 1) != 0 )
      {
        v19 = 0;
      }
      else
      {
        v26 = v28;
        v25 = v27;
        v19 = &boost::function2<void,void *,Caver::GUIEvent *>::assign_to<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::ProfileManager_Android,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::ProfileManager_Android*>,boost::arg<1>,boost::arg<2>>>>(boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::ProfileManager_Android,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::ProfileManager_Android*>,boost::arg<1>,boost::arg<2>>>)::stored_vtable;
      }
      v24 = (unsigned __int64)v19;
      this = (_QWORD *)Caver::GUIControl::AddTargetActionForControlEvent();
      if ( v24 )
      {
        if ( (v24 & 1) == 0 )
        {
          v20 = *(__int64 (__fastcall **)(int64x2_t *, int64x2_t *, __int64))(v24 & 0xFFFFFFFFFFFFFFFELL);
          if ( v20 )
            this = (_QWORD *)v20(&v25, &v25, 2);
        }
      }
    }
    if ( v2 )
    {
      v21 = v2[1] - 1LL;
      v2[1] = v21;
      if ( !v21 )
      {
        this = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
        v22 = v2[2] - 1LL;
        v2[2] = v22;
        if ( !v22 )
          return (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v2 + 24LL))(v2);
      }
    }
  }
  return this;
}

