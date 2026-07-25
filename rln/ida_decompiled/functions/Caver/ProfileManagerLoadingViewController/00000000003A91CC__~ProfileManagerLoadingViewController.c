/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A91CC
 * Mangled: _ZN5Caver35ProfileManagerLoadingViewControllerD2Ev
 * Demangled: Caver::ProfileManagerLoadingViewController::~ProfileManagerLoadingViewController()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F6590  Caver::GUIViewController::~GUIViewController()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003A9304  boost::shared_ptr<Caver::ProfileManagerLoadingView>::shared_ptr<Caver::ProfileManagerLoadingView>(Caver::ProfileManagerLoadingView *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 22
 *   insn=0x00000000003A91DC string=0x00000000003A91E0 "t.@"
 *   insn=0x00000000003A91E0 string=0x00000000003A91E4 ""
 *   insn=0x00000000003A91E4 string=0x00000000003A91E8 "A"
 *   insn=0x00000000003A91E8 string=0x00000000003A91EC "h"
 *   insn=0x00000000003A91EC string=0x00000000003A91F0 "4"
 *   insn=0x00000000003A91F4 string=0x00000000003A91F8 ""
 *   insn=0x00000000003A9204 string=0x00000000003A9208 "\t@"
 *   insn=0x00000000003A9214 string=0x00000000003A9218 ""
 *   insn=0x00000000003A9224 string=0x00000000003A9228 "@"
 *   insn=0x00000000003A9240 string=0x00000000001F6590 "0'"
 *   insn=0x00000000003A9254 string=0x00000000003A9258 "="
 *   insn=0x00000000003A926C string=0x00000000003A9270 "t.@"
 *   insn=0x00000000003A9270 string=0x00000000003A9274 ""
 *   insn=0x00000000003A9274 string=0x00000000003A9278 "A"
 *   insn=0x00000000003A9278 string=0x00000000003A927C "h"
 *   insn=0x00000000003A927C string=0x00000000003A9280 "4"
 *   insn=0x00000000003A9284 string=0x00000000003A9288 ""
 *   insn=0x00000000003A9294 string=0x00000000003A9298 "\t@"
 *   insn=0x00000000003A92A4 string=0x00000000003A92A8 ""
 *   insn=0x00000000003A92B4 string=0x00000000003A92B8 "@"
 *   insn=0x00000000003A92D8 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003A92FC string=0x00000000003A9300 "qa"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ProfileManagerLoadingViewController::~ProfileManagerLoadingViewController(
        Caver::ProfileManagerLoadingViewController *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 11);
  *(_QWORD *)this = off_6CEB70;
  if ( v2 )
  {
    v3 = v2[1] - 1LL;
    v2[1] = v3;
    if ( !v3 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
      v4 = v2[2] - 1LL;
      v2[2] = v4;
      if ( !v4 )
        (*(void (__fastcall **)(_QWORD *))(*v2 + 24LL))(v2);
    }
  }
  Caver::GUIViewController::~GUIViewController(this);
}

