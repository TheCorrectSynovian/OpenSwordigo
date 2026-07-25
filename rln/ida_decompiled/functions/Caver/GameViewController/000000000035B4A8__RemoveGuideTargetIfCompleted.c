/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000035B4A8
 * Mangled: _ZN5Caver18GameViewController28RemoveGuideTargetIfCompletedEv
 * Demangled: Caver::GameViewController::RemoveGuideTargetIfCompleted(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000202680  Caver::GameState::GuideTargetCompleted(boost::shared_ptr<Caver::GuideTarget> const&)
 *
 * Referenced strings: 25
 *   insn=0x000000000035B4B4 string=0x000000000035B4B8 "h"
 *   insn=0x000000000035B4B8 string=0x000000000035B4BC "("
 *   insn=0x000000000035B4BC string=0x000000000035B4C0 "`V@"
 *   insn=0x000000000035B4C0 string=0x000000000035B4C4 "tb"
 *   insn=0x000000000035B4C8 string=0x000000000035B4CC "m"
 *   insn=0x000000000035B4D0 string=0x000000000035B4D4 "`"
 *   insn=0x000000000035B4D4 string=0x000000000035B4D8 "`"
 *   insn=0x000000000035B4D8 string=0x000000000035B504 "s"
 *   insn=0x000000000035B4DC string=0x000000000035B4E0 ""
 *   insn=0x000000000035B4E4 string=0x000000000035B4E8 "@"
 *   insn=0x000000000035B4E8 string=0x000000000035B4EC ""
 *   insn=0x000000000035B4EC string=0x000000000035B4F0 ""
 *   insn=0x000000000035B4F4 string=0x000000000035B4F8 ""
 *   insn=0x000000000035B4F8 string=0x000000000035B4FC ""
 *   insn=0x000000000035B50C string=0x000000000035B510 "h"
 *   insn=0x000000000035B510 string=0x000000000035B514 ""
 *   insn=0x000000000035B514 string=0x000000000035B518 "h"
 *   insn=0x000000000035B518 string=0x000000000035B51C "!"
 *   insn=0x000000000035B51C string=0x000000000035B520 "h"
 *   insn=0x000000000035B524 string=0x000000000035B528 "\t@"
 *   insn=0x000000000035B52C string=0x000000000035B530 "h\n@"
 *   insn=0x000000000035B530 string=0x000000000035B534 ""
 *   insn=0x000000000035B534 string=0x000000000035B538 "h\n"
 *   insn=0x000000000035B53C string=0x000000000035B54C "h"
 *   insn=0x000000000035B55C string=0x000000000035B560 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GameViewController::RemoveGuideTargetIfCompleted(Caver::GameViewController *this)
{
  _QWORD *v2; // x20
  char v3; // w0
  __int64 v4; // x0
  int v5; // w8
  _QWORD *v6; // x19
  __int64 v7; // x8
  __int64 v8; // x8

  if ( *((_QWORD *)this + 35) )
  {
    v2 = (_QWORD *)((char *)this + 280);
    Caver::GameState::GuideTargetCompleted();
    if ( (v3 & 1) != 0 )
    {
      v4 = *((_QWORD *)this + 37);
      if ( v4 )
      {
        *(_BYTE *)(v4 + 232) = 1;
        *((_QWORD *)this + 37) = 0;
        v5 = *(_DWORD *)(v4 + 8) - 1;
        *(_DWORD *)(v4 + 8) = v5;
        if ( !v5 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      }
      v6 = (_QWORD *)*((_QWORD *)this + 36);
      *v2 = 0;
      v2[1] = 0;
      if ( v6 )
      {
        v7 = v6[1] - 1LL;
        v6[1] = v7;
        if ( !v7 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
          v8 = v6[2] - 1LL;
          v6[2] = v8;
          if ( !v8 )
            (*(void (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
        }
      }
    }
  }
}

