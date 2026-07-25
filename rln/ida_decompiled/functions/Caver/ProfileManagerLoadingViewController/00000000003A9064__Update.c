/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A9064
 * Mangled: _ZN5Caver35ProfileManagerLoadingViewController6UpdateEf
 * Demangled: Caver::ProfileManagerLoadingViewController::Update(float)
 *
 * Callers: 1
 *   0x00000000003A8E38  Caver::ProfileManagerLoadingViewController::LoadView(void)
 *
 * Callees: 8
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7010  Caver::GUIViewController::DismissModalViewController(void)
 *   0x00000000001F8A30  Caver::GUIView::AddAnimation(boost::shared_ptr<Caver::GUIAnimation> const&)
 *   0x00000000001FA5A0  Caver::GUIView::RemoveAllAnimations(void)
 *   0x0000000000200B40  Caver::GUIAnimation::AlphaAnimation(float,float,float)
 *   0x0000000000202490  Caver::GUIViewController::Update(float)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 34
 *   insn=0x00000000003A9074 string=0x00000000003A9078 "U"
 *   insn=0x00000000003A9088 string=0x00000000003A908C "h"A9h"
 *   insn=0x00000000003A908C string=0x00000000003A9090 "h"
 *   insn=0x00000000003A9090 string=0x00000000003A9094 "h*@"
 *   insn=0x00000000003A9094 string=0x00000000003A9098 "aN@"
 *   insn=0x00000000003A90A4 string=0x00000000003A90A8 "h"
 *   insn=0x00000000003A90AC string=0x00000000003A90B0 "h"
 *   insn=0x00000000003A90D0 string=0x00000000003A90D4 "t*@"
 *   insn=0x00000000003A90D8 string=0x00000000003A90DC "1E"
 *   insn=0x00000000003A90DC string=0x00000000001FA5A0 "0'"
 *   insn=0x00000000003A90E4 string=0x00000000003A90E8 "R>"
 *   insn=0x00000000003A90E8 string=0x00000000003A90EC "`"
 *   insn=0x00000000003A90E8 string=0x00000000001F8A30 "0'"
 *   insn=0x00000000003A90F0 string=0x00000000001F7010 "0'"
 *   insn=0x00000000003A90F4 string=0x00000000003A90F8 "3"
 *   insn=0x00000000003A90F8 string=0x00000000003A90FC "h"
 *   insn=0x00000000003A90FC string=0x00000000003A9100 ""
 *   insn=0x00000000003A9100 string=0x00000000003A9104 "h"
 *   insn=0x00000000003A9108 string=0x00000000003A910C "h"
 *   insn=0x00000000003A9110 string=0x00000000003A9114 "\t@"
 *   insn=0x00000000003A9118 string=0x00000000003A911C "h\n@"
 *   insn=0x00000000003A911C string=0x00000000003A9120 ""
 *   insn=0x00000000003A9120 string=0x00000000003A9124 "h\n"
 *   insn=0x00000000003A9128 string=0x00000000003A912C "h"
 *   insn=0x00000000003A9130 string=0x00000000003A9134 "@"
 *   insn=0x00000000003A9148 string=0x00000000003A9160 "\4"
 *   insn=0x00000000003A9160 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003A9168 string=0x00000000003A916C "4"
 *   insn=0x00000000003A9170 string=0x00000000003A9174 ""
 *   insn=0x00000000003A9180 string=0x00000000003A9184 "\t@"
 *   insn=0x00000000003A9190 string=0x00000000003A9194 ""
 *   insn=0x00000000003A91A0 string=0x00000000003A91A4 "@"
 *   insn=0x00000000003A91B4 string=0x00000000003A91B8 "e"
 *   insn=0x00000000003A91BC string=0x00000000003A91C0 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ProfileManagerLoadingViewController::Update(Caver::GUIViewController **this, float a2)
{
  Caver::GUIAnimation *v3; // x0
  Caver::GUIViewController *v4; // x8
  _QWORD *v5; // x19
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 v8; // [xsp+8h] [xbp-38h] BYREF
  _QWORD *v9; // [xsp+10h] [xbp-30h]
  __int64 v10; // [xsp+18h] [xbp-28h]

  v10 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GUIViewController::Update((Caver::GUIViewController *)this, a2);
  if ( *((_BYTE *)this + 72) )
  {
    if ( *((float *)this[10] + 70) >= *((float *)this + 19) )
    {
      v4 = this[5];
      *((_BYTE *)this + 72) = 0;
      if ( v4 )
      {
        Caver::GUIAnimation::AlphaAnimation(&v8, v3, 1.0, 0.0, 0.2);
        *(_BYTE *)(v8 + 184) = 0;
        Caver::GUIView::RemoveAllAnimations(this[10]);
        Caver::GUIView::AddAnimation();
        Caver::GUIViewController::DismissModalViewController(this[5]);
        v5 = v9;
        if ( v9 )
        {
          v6 = v9[1] - 1LL;
          v9[1] = v6;
          if ( !v6 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
            v7 = v5[2] - 1LL;
            v5[2] = v7;
            if ( !v7 )
              (*(void (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
          }
        }
      }
    }
  }
}

