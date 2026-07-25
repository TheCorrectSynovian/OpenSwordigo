/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000370370
 * Mangled: _ZN5Caver19PauseViewControllerD2Ev
 * Demangled: Caver::PauseViewController::~PauseViewController()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F6590  Caver::GUIViewController::~GUIViewController()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003704B8  boost::shared_ptr<Caver::PauseView>::shared_ptr<Caver::PauseView>(Caver::PauseView *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 29
 *   insn=0x0000000000370380 string=0x0000000000370384 ""
 *   insn=0x0000000000370384 string=0x0000000000370388 "t.@"
 *   insn=0x0000000000370388 string=0x000000000037038C "\tA"
 *   insn=0x000000000037038C string=0x0000000000370390 ""
 *   insn=0x0000000000370390 string=0x0000000000370394 "i"
 *   insn=0x0000000000370394 string=0x0000000000370398 "h&"
 *   insn=0x0000000000370398 string=0x000000000037039C "4"
 *   insn=0x00000000003703A0 string=0x00000000003703A4 ""
 *   insn=0x00000000003703B0 string=0x00000000003703B4 "\t@"
 *   insn=0x00000000003703C0 string=0x00000000003703C4 ""
 *   insn=0x00000000003703D0 string=0x00000000003703D4 "@"
 *   insn=0x00000000003703E8 string=0x00000000003703EC "i"
 *   insn=0x00000000003703EC string=0x00000000001F6590 "0'"
 *   insn=0x00000000003703F4 string=0x00000000003703F8 "f"
 *   insn=0x00000000003703FC string=0x0000000000370400 "1E"
 *   insn=0x0000000000370418 string=0x000000000037041C ""
 *   insn=0x000000000037041C string=0x0000000000370420 "t.@"
 *   insn=0x0000000000370420 string=0x0000000000370424 "\tA"
 *   insn=0x0000000000370424 string=0x0000000000370428 ""
 *   insn=0x0000000000370428 string=0x000000000037042C "i"
 *   insn=0x000000000037042C string=0x0000000000370430 "h&"
 *   insn=0x0000000000370430 string=0x0000000000370434 "4"
 *   insn=0x0000000000370438 string=0x000000000037043C ""
 *   insn=0x0000000000370448 string=0x000000000037044C "\t@"
 *   insn=0x0000000000370458 string=0x000000000037045C ""
 *   insn=0x0000000000370468 string=0x000000000037046C "@"
 *   insn=0x0000000000370478 string=0x000000000037047C "E"
 *   insn=0x000000000037048C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000370494 string=0x0000000000370498 ">"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::PauseViewController::~PauseViewController(Caver::PauseViewController *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 11);
  *(_QWORD *)this = off_6CC920;
  *((_QWORD *)this + 9) = &off_6CC990;
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

