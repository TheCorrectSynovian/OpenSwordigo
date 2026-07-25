/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A05B8
 * Mangled: _ZN5Caver16ProfilePanelView29AlertViewClickedButtonAtIndexEPNS_12GUIAlertViewEi
 * Demangled: Caver::ProfilePanelView::AlertViewClickedButtonAtIndex(Caver::GUIAlertView *,int)
 *
 * Callers: 1
 *   0x00000000001F94A0  Caver::ProfilePanelView::AlertViewClickedButtonAtIndex(Caver::GUIAlertView *,int)
 *
 * Callees: 4
 *   0x00000000001F43A0  Caver::ProfilePanelView::InitWithProfile(boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x00000000001F8A60  Caver::PlayerProfile::LoadGameState(void)
 *   0x00000000001FCE10  Caver::PlayerProfile::Save(bool)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 22
 *   insn=0x00000000003A05CC string=0x00000000003A05D0 "h"
 *   insn=0x00000000003A05D8 string=0x00000000003A05DC "@"
 *   insn=0x00000000003A05E0 string=0x00000000003A05E4 "h"
 *   insn=0x00000000003A05EC string=0x00000000003A05F0 "h"
 *   insn=0x00000000003A05F0 string=0x00000000003A05F4 "t"
 *   insn=0x00000000003A05FC string=0x00000000003A0638 "w"
 *   insn=0x00000000003A060C string=0x00000000003A0610 "\t@"
 *   insn=0x00000000003A0618 string=0x00000000003A061C ""
 *   insn=0x00000000003A062C string=0x00000000003A0630 "@"
 *   insn=0x00000000003A063C string=0x00000000003A0640 "a"
 *   insn=0x00000000003A0640 string=0x00000000001F8A60 "0'"
 *   insn=0x00000000003A0644 string=0x00000000003A0648 "u"
 *   insn=0x00000000003A064C string=0x00000000003A0650 ""
 *   insn=0x00000000003A0650 string=0x00000000003A0654 ""
 *   insn=0x00000000003A0664 string=0x00000000003A0668 "`"
 *   insn=0x00000000003A0670 string=0x00000000001FCE10 "0'"
 *   insn=0x00000000003A0678 string=0x00000000003A067C "IO"
 *   insn=0x00000000003A067C string=0x00000000003A0680 ""
 *   insn=0x00000000003A067C string=0x00000000001F43A0 "P'"
 *   insn=0x00000000003A0684 string=0x00000000003A0688 "`"
 *   insn=0x00000000003A068C string=0x00000000003A0690 ""
 *   insn=0x00000000003A0694 string=0x00000000003A0698 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProfilePanelView::AlertViewClickedButtonAtIndex(
        Caver::ProfilePanelView *this,
        Caver::GUIAlertView *a2,
        int a3)
{
  __int64 v5; // x8
  Caver::PlayerProfile **v6; // x20
  _QWORD *v7; // x22
  __int64 v8; // x23
  __int64 v9; // x8
  _QWORD *v10; // x8
  __int64 v11; // x21
  __int64 v12; // x0

  if ( *((Caver::GUIAlertView **)this + 36) == a2 )
  {
    if ( !a3 )
    {
      v12 = *((_QWORD *)this + 44);
      if ( v12 )
        (*(void (__fastcall **)(__int64, Caver::ProfilePanelView *))(*(_QWORD *)v12 + 8LL))(v12, this);
    }
  }
  else if ( !a3 && *((Caver::GUIAlertView **)this + 42) == a2 )
  {
    v5 = *((_QWORD *)this + 45);
    v6 = (Caver::PlayerProfile **)((char *)this + 360);
    v8 = *(_QWORD *)(v5 + 128);
    v7 = *(_QWORD **)(v5 + 136);
    if ( v7 )
    {
      if ( !v7[1] )
      {
        (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
        v9 = v7[2] - 1LL;
        v7[2] = v9;
        if ( !v9 )
          (*(void (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
      }
    }
    if ( !v8 )
      Caver::PlayerProfile::LoadGameState(*v6);
    v10 = (_QWORD *)*((_QWORD *)a2 + 40);
    v11 = *((_QWORD *)this + 45);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v10 + 344LL))(*v10);
    sub_56A6A8(v11 + 32);
    Caver::PlayerProfile::Save(*((Caver::PlayerProfile **)this + 45));
    Caver::ProfilePanelView::InitWithProfile(this);
  }
  return 1;
}

