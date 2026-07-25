/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033DE4C
 * Mangled: _ZN5Caver30ConfigureOverlayViewController8LoadViewEv
 * Demangled: Caver::ConfigureOverlayViewController::LoadView(void)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F4A90  boost::shared_ptr<Caver::ConfigureOverlayView>::shared_ptr<Caver::ConfigureOverlayView>(Caver::ConfigureOverlayView *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F75B0  Caver::ConfigureOverlayView::ConfigureOverlayView(void)
 *   0x00000000001F9820  Caver::ConfigureOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000033E140  Caver::ConfigureOverlayViewController::ViewWillDisappear(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 69
 *   insn=0x000000000033DE5C string=0x000000000033DE60 "V"
 *   insn=0x000000000033DE74 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000033DE7C string=0x00000000001F75B0 "0'"
 *   insn=0x000000000033DE88 string=0x000000000033DE8C "hRF"
 *   insn=0x000000000033DE88 string=0x00000000001F4A90 "P'"
 *   insn=0x000000000033DE98 string=0x000000000033DE9C "i""
 *   insn=0x000000000033DEA0 string=0x000000000033DEA4 "4"
 *   insn=0x000000000033DEA4 string=0x000000000033DEE8 "`2@"
 *   insn=0x000000000033DEA8 string=0x000000000033DEAC ""
 *   insn=0x000000000033DEBC string=0x000000000033DEC0 "\t@"
 *   insn=0x000000000033DEC8 string=0x000000000033DECC ""
 *   insn=0x000000000033DEDC string=0x000000000033DEE0 "@"
 *   insn=0x000000000033DEE8 string=0x000000000033DEEC "p@"
 *   insn=0x000000000033DEF4 string=0x000000000033DEF8 ",@"
 *   insn=0x000000000033DEF4 string=0x000000000033DF30 "h""
 *   insn=0x000000000033DEF8 string=0x000000000033DEFC "I"
 *   insn=0x000000000033DEFC string=0x000000000033DF00 "\tp"
 *   insn=0x000000000033DF00 string=0x000000000033DF04 "h"
 *   insn=0x000000000033DF04 string=0x000000000033DF08 ")"
 *   insn=0x000000000033DF08 string=0x0000000000583734 "o"
 *   insn=0x000000000033DF0C string=0x000000000033DF10 "!5G"
 *   insn=0x000000000033DF18 string=0x000000000033DF1C "\t"
 *   insn=0x000000000033DF20 string=0x000000000033DF24 ")-@"
 *   insn=0x000000000033DF24 string=0x000000000033DF28 " "
 *   insn=0x000000000033DF28 string=0x000000000033DF2C "`2@"
 *   insn=0x000000000033DF30 string=0x000000000033DF34 ""
 *   insn=0x000000000033DF34 string=0x000000000033DF38 "h*@"
 *   insn=0x000000000033DF38 string=0x000000000033DF3C "\t!H"
 *   insn=0x000000000033DF44 string=0x000000000033DF48 "\t"
 *   insn=0x000000000033DF48 string=0x000000000033DF4C ")"
 *   insn=0x000000000033DF4C string=0x000000000033DF50 "\t"
 *   insn=0x000000000033DF54 string=0x000000000033DF58 "2"
 *   insn=0x000000000033DF58 string=0x00000000001F9820 "0'"
 *   insn=0x000000000033DF5C string=0x000000000033DF60 "4"
 *   insn=0x000000000033DF60 string=0x000000000033DFA4 "hRF"
 *   insn=0x000000000033DF64 string=0x000000000033DF68 ""
 *   insn=0x000000000033DF78 string=0x000000000033DF7C "\t@"
 *   insn=0x000000000033DF84 string=0x000000000033DF88 ""
 *   insn=0x000000000033DF98 string=0x000000000033DF9C "@"
 *   insn=0x000000000033DFA8 string=0x000000000033DFB8 "u"
 *   insn=0x000000000033DFAC string=0x000000000033DFB0 ")\t"
 *   insn=0x000000000033DFB8 string=0x000000000033DFBC "h"
 *   insn=0x000000000033DFBC string=0x000000000033DFC0 "5"
 *   insn=0x000000000033DFC0 string=0x000000000033E004 "`"@"
 *   insn=0x000000000033DFC4 string=0x000000000033DFC8 ""
 *   insn=0x000000000033DFD4 string=0x000000000033DFD8 "\t@"
 *   insn=0x000000000033DFE4 string=0x000000000033DFE8 ""
 *   insn=0x000000000033DFF4 string=0x000000000033DFF8 "@"
 *   insn=0x000000000033E008 string=0x000000000033E00C ""
 *   insn=0x000000000033E008 string=0x000000000033E01C "4"
 *   insn=0x000000000033E00C string=0x000000000033E010 ""
 *   insn=0x000000000033E020 string=0x000000000033E024 ""
 *   insn=0x000000000033E034 string=0x000000000033E038 "\t@"
 *   insn=0x000000000033E040 string=0x000000000033E044 ""
 *   insn=0x000000000033E054 string=0x000000000033E058 "@"
 *   insn=0x000000000033E084 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000033E090 string=0x000000000033E094 ""
 *   insn=0x000000000033E098 string=0x000000000033E09C "!"
 *   insn=0x000000000033E0A0 string=0x000000000033E0A4 "\t@"
 *   insn=0x000000000033E0B0 string=0x000000000033E0B4 ""
 *   insn=0x000000000033E0B8 string=0x000000000033E0BC "!"
 *   insn=0x000000000033E0C0 string=0x000000000033E0C4 "@"
 *   insn=0x000000000033E0D8 string=0x000000000033E0DC "4"
 *   insn=0x000000000033E0E0 string=0x000000000033E0E4 ""
 *   insn=0x000000000033E0F0 string=0x000000000033E0F4 "\t@"
 *   insn=0x000000000033E100 string=0x000000000033E104 ""
 *   insn=0x000000000033E110 string=0x000000000033E114 "@"
 *   insn=0x000000000033E130 string=0x000000000033E134 "_"
 *   insn=0x000000000033E134 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall ***__fastcall Caver::ConfigureOverlayViewController::LoadView(
        Caver::ConfigureOverlayViewController *this))(_QWORD, Caver::ConfigureOverlayViewController *)
{
  Caver::ConfigureOverlayView *v2; // x0
  _QWORD *v3; // x20
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 v6; // x0
  float *v7; // x8
  _QWORD *v8; // x8
  __int64 v9; // x8
  __int64 v10; // x8
  __int64 v11; // x8
  _QWORD *v12; // x20
  _QWORD *v13; // x21
  __int64 v14; // x8
  __int64 v15; // x8
  __int64 (__fastcall ***result)(_QWORD, Caver::ConfigureOverlayViewController *); // x0
  __int64 v17; // x8
  __int64 v18; // x8
  __int64 v19; // [xsp+8h] [xbp-38h]
  __int64 v20; // [xsp+10h] [xbp-30h]
  _QWORD *v21; // [xsp+10h] [xbp-30h]

  _ReadStatusReg(TPIDR_EL0);
  v2 = (Caver::ConfigureOverlayView *)operator new(0x170u);
  Caver::ConfigureOverlayView::ConfigureOverlayView(v2);
  boost::shared_ptr<Caver::ConfigureOverlayView>::shared_ptr<Caver::ConfigureOverlayView>();
  v3 = (_QWORD *)*((_QWORD *)this + 13);
  *((_QWORD *)this + 12) = v19;
  *((_QWORD *)this + 13) = v20;
  if ( v3 )
  {
    v4 = v3[1] - 1LL;
    v3[1] = v4;
    if ( !v4 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
      v5 = v3[2] - 1LL;
      v3[2] = v5;
      if ( !v5 )
        (*(void (__fastcall **)(_QWORD *))(*v3 + 24LL))(v3);
    }
  }
  v6 = *((_QWORD *)this + 12);
  if ( *(_DWORD *)(v6 + 112) != 18 )
  {
    v7 = *(float **)(v6 + 88);
    *(_DWORD *)(v6 + 112) = 18;
    if ( v7 )
    {
      if ( v7[35] > 0.001 )
      {
        (*(void (__fastcall **)(float *__return_ptr, float *))(*(_QWORD *)v7 + 88LL))(v7, v7);
        v6 = *((_QWORD *)this + 12);
      }
    }
  }
  *(_QWORD *)(v6 + 256) = (char *)this + 72;
  v8 = *(_QWORD **)(*((_QWORD *)this + 10) + 136LL);
  v21 = v8;
  if ( v8 )
    ++v8[1];
  Caver::ConfigureOverlayView::InitWithGameState();
  if ( v21 )
  {
    v9 = v21[1] - 1LL;
    v21[1] = v9;
    if ( !v9 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v21 + 16LL))(v21);
      v10 = v21[2] - 1LL;
      v21[2] = v10;
      if ( !v10 )
        (*(void (__fastcall **)(_QWORD *))(*v21 + 24LL))(v21);
    }
  }
  v11 = *((_QWORD *)this + 12);
  v12 = (_QWORD *)*((_QWORD *)this + 13);
  if ( v12 )
    v12[1] += 2LL;
  v13 = (_QWORD *)*((_QWORD *)this + 4);
  *((_QWORD *)this + 3) = v11;
  *((_QWORD *)this + 4) = v12;
  if ( v13 )
  {
    v14 = v13[1] - 1LL;
    v13[1] = v14;
    if ( !v14 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
      v15 = v13[2] - 1LL;
      v13[2] = v15;
      if ( !v15 )
        (*(void (__fastcall **)(_QWORD *))(*v13 + 24LL))(v13);
    }
  }
  result = (__int64 (__fastcall ***)(_QWORD, Caver::ConfigureOverlayViewController *))*((_QWORD *)this + 8);
  if ( result )
    result = (__int64 (__fastcall ***)(_QWORD, Caver::ConfigureOverlayViewController *))(**result)(result, this);
  if ( v12 )
  {
    v17 = v12[1] - 1LL;
    v12[1] = v17;
    if ( !v17 )
    {
      result = (__int64 (__fastcall ***)(_QWORD, Caver::ConfigureOverlayViewController *))(*(__int64 (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
      v18 = v12[2] - 1LL;
      v12[2] = v18;
      if ( !v18 )
        return (__int64 (__fastcall ***)(_QWORD, Caver::ConfigureOverlayViewController *))(*(__int64 (__fastcall **)(_QWORD *))(*v12 + 24LL))(v12);
    }
  }
  return result;
}

