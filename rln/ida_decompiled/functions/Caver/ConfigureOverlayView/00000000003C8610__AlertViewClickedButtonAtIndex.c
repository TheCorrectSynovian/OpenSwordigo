/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C8610
 * Mangled: _ZN5Caver20ConfigureOverlayView29AlertViewClickedButtonAtIndexEPNS_12GUIAlertViewEi
 * Demangled: Caver::ConfigureOverlayView::AlertViewClickedButtonAtIndex(Caver::GUIAlertView *,int)
 *
 * Callers: 1
 *   0x00000000001F4810  Caver::ConfigureOverlayView::AlertViewClickedButtonAtIndex(Caver::GUIAlertView *,int)
 *
 * Callees: 7
 *   0x00000000001F4810  Caver::ConfigureOverlayView::AlertViewClickedButtonAtIndex(Caver::GUIAlertView *,int)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FBCE0  Caver::GameOverlayView::SetLayout(boost::shared_ptr<Caver::GUIViewLayout> const&)
 *   0x00000000001FCB50  Caver::CurrentDeviceType(void)
 *   0x00000000001FD5A0  Caver::GameOptions::defaultOptions(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 49
 *   insn=0x00000000003C8620 string=0x00000000003C8624 "U"
 *   insn=0x00000000003C8630 string=0x00000000003C8634 "h"
 *   insn=0x00000000003C8638 string=0x00000000003C863C "`"
 *   insn=0x00000000003C863C string=0x00000000003C8668 "B"
 *   insn=0x00000000003C865C string=0x0000000000000001 "ELF"
 *   insn=0x00000000003C8668 string=0x00000000003C866C "t"
 *   insn=0x00000000003C8668 string=0x00000000003C8770 "t"
 *   insn=0x00000000003C8674 string=0x00000000001FD5A0 "0'"
 *   insn=0x00000000003C8678 string=0x00000000003C867C "5"
 *   insn=0x00000000003C867C string=0x00000000001FCB50 "0'"
 *   insn=0x00000000003C8688 string=0x00000000003C868C ""
 *   insn=0x00000000003C868C string=0x00000000003C8690 "\t"
 *   insn=0x00000000003C8690 string=0x00000000003C8694 ""
 *   insn=0x00000000003C869C string=0x00000000003C86A0 "\t"
 *   insn=0x00000000003C86A0 string=0x00000000003C86A4 ")"
 *   insn=0x00000000003C86A4 string=0x00000000003C86A8 "\t"
 *   insn=0x00000000003C86B4 string=0x00000000001FBCE0 "0'"
 *   insn=0x00000000003C86B8 string=0x00000000003C86BC "4"
 *   insn=0x00000000003C86C0 string=0x00000000003C86C4 ""
 *   insn=0x00000000003C86D0 string=0x00000000003C86D4 "\t@"
 *   insn=0x00000000003C86E0 string=0x00000000003C86E4 ""
 *   insn=0x00000000003C86F0 string=0x00000000003C86F4 "@"
 *   insn=0x00000000003C8700 string=0x00000000003C8704 "4"
 *   insn=0x00000000003C8704 string=0x00000000003C8748 "h"
 *   insn=0x00000000003C8708 string=0x00000000003C870C ""
 *   insn=0x00000000003C871C string=0x00000000003C8720 "\t@"
 *   insn=0x00000000003C8728 string=0x00000000003C872C ""
 *   insn=0x00000000003C873C string=0x00000000003C8740 "@"
 *   insn=0x00000000003C874C string=0x00000000003C8750 "-@"
 *   insn=0x00000000003C8754 string=0x00000000003C8758 "`"
 *   insn=0x00000000003C875C string=0x00000000003C8760 ""
 *   insn=0x00000000003C8764 string=0x00000000003C8768 ""
 *   insn=0x00000000003C8774 string=0x00000000003C8778 "T"
 *   insn=0x00000000003C877C string=0x00000000003C8780 ""
 *   insn=0x00000000003C8790 string=0x00000000003C8794 "\t@"
 *   insn=0x00000000003C879C string=0x00000000003C87A0 ""
 *   insn=0x00000000003C87B0 string=0x00000000003C87B4 "@"
 *   insn=0x00000000003C87C0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003C87C8 string=0x00000000003C87CC "t"
 *   insn=0x00000000003C87D0 string=0x00000000003C87D4 ""
 *   insn=0x00000000003C87E0 string=0x00000000003C87E4 "\t@"
 *   insn=0x00000000003C87F0 string=0x00000000003C87F4 ""
 *   insn=0x00000000003C8800 string=0x00000000003C8804 "@"
 *   insn=0x00000000003C8818 string=0x00000000003C881C "4"
 *   insn=0x00000000003C8820 string=0x00000000003C8824 ""
 *   insn=0x00000000003C8830 string=0x00000000003C8834 "\t@"
 *   insn=0x00000000003C8840 string=0x00000000003C8844 ""
 *   insn=0x00000000003C8850 string=0x00000000003C8854 "@"
 *   insn=0x00000000003C8878 string=0x00000000001F4810 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ConfigureOverlayView::AlertViewClickedButtonAtIndex(
        Caver::ConfigureOverlayView *this,
        Caver::GUIAlertView *a2,
        int a3)
{
  Caver *v5; // x0
  __int64 v6; // x22
  int v7; // w0
  __int64 *v8; // x8
  __int64 v9; // x9
  _QWORD *v10; // x8
  _QWORD *v11; // x20
  __int64 v12; // x8
  __int64 v13; // x8
  _QWORD *v14; // x20
  __int64 v15; // x8
  __int64 v16; // x8
  void (__fastcall ***v17)(_QWORD, Caver::ConfigureOverlayView *); // x0
  _QWORD *v18; // x20
  __int64 v19; // x8
  __int64 v20; // x8
  __int64 v21; // [xsp+18h] [xbp-48h] BYREF
  _QWORD *v22; // [xsp+20h] [xbp-40h]
  __int64 v23; // [xsp+28h] [xbp-38h]
  _QWORD *v24; // [xsp+30h] [xbp-30h]
  __int64 v25; // [xsp+38h] [xbp-28h]

  v25 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *((Caver::GUIAlertView **)this + 44) == a2 )
  {
    if ( !a3 )
    {
      v5 = (Caver *)Caver::GameOptions::defaultOptions(&v21, this);
      v6 = v21;
      v7 = Caver::CurrentDeviceType(v5);
      v8 = (__int64 *)(v6 + 64);
      if ( v7 != 1 )
        v8 = (__int64 *)(v6 + 48);
      v9 = *v8;
      v10 = (_QWORD *)v8[1];
      v23 = v9;
      v24 = v10;
      if ( v10 )
        ++v10[1];
      Caver::GameOverlayView::SetLayout();
      v11 = v24;
      if ( v24 )
      {
        v12 = v24[1] - 1LL;
        v24[1] = v12;
        if ( !v12 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
          v13 = v11[2] - 1LL;
          v11[2] = v13;
          if ( !v13 )
            (*(void (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
        }
      }
      v14 = v22;
      if ( v22 )
      {
        v15 = v22[1] - 1LL;
        v22[1] = v15;
        if ( !v15 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
          v16 = v14[2] - 1LL;
          v14[2] = v16;
          if ( !v16 )
            (*(void (__fastcall **)(_QWORD *))(*v14 + 24LL))(v14);
        }
      }
      (*(void (__fastcall **)(Caver::ConfigureOverlayView *))(*(_QWORD *)this + 88LL))(this);
      v17 = (void (__fastcall ***)(_QWORD, Caver::ConfigureOverlayView *))*((_QWORD *)this + 32);
      if ( v17 )
        (**v17)(v17, this);
    }
    v18 = (_QWORD *)*((_QWORD *)this + 45);
    *((_QWORD *)this + 44) = 0;
    *((_QWORD *)this + 45) = 0;
    if ( v18 )
    {
      v19 = v18[1] - 1LL;
      v18[1] = v19;
      if ( !v19 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
        v20 = v18[2] - 1LL;
        v18[2] = v20;
        if ( !v20 )
          (*(void (__fastcall **)(_QWORD *))(*v18 + 24LL))(v18);
      }
    }
  }
  return (__int64)&dword_0 + 1;
}

