/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000036E764
 * Mangled: _ZN5Caver22MainMenuViewController29AlertViewClickedButtonAtIndexEPNS_12GUIAlertViewEi
 * Demangled: Caver::MainMenuViewController::AlertViewClickedButtonAtIndex(Caver::GUIAlertView *,int)
 *
 * Callers: 1
 *   0x00000000001F6B00  Caver::MainMenuViewController::AlertViewClickedButtonAtIndex(Caver::GUIAlertView *,int)
 *
 * Callees: 2
 *   0x00000000001F93B0  Caver::OnlineController::SharedController(void)
 *   0x0000000000202D50  Caver::MainMenuViewController::CompleteInitialPrivacy(void)
 *
 * Referenced strings: 21
 *   insn=0x000000000036E770 string=0x000000000036E774 "hv@"
 *   insn=0x000000000036E77C string=0x000000000036E780 "h~@"
 *   insn=0x000000000036E784 string=0x000000000036E788 "`"
 *   insn=0x000000000036E788 string=0x000000000036E794 "("
 *   insn=0x000000000036E78C string=0x0000000000000001 "ELF"
 *   insn=0x000000000036E79C string=0x000000000036E7A0 "h\nA"
 *   insn=0x000000000036E7A8 string=0x000000000036E7BC "h"
 *   insn=0x000000000036E7AC string=0x000000000036E7B0 ""
 *   insn=0x000000000036E7AC string=0x00000000001F93B0 "0'"
 *   insn=0x000000000036E7B0 string=0x000000000036E7B4 "M@"
 *   insn=0x000000000036E7C4 string=0x000000000036E7D8 "h"
 *   insn=0x000000000036E7C8 string=0x000000000036E7CC ""
 *   insn=0x000000000036E7CC string=0x000000000036E7D0 "U@"
 *   insn=0x000000000036E7D0 string=0x000000000036E7D4 ""
 *   insn=0x000000000036E7DC string=0x000000000036E7E0 "A"
 *   insn=0x000000000036E7E0 string=0x000000000036E808 "b"
 *   insn=0x000000000036E7E4 string=0x000000000036E7E8 ""
 *   insn=0x000000000036E7E8 string=0x000000000036E7EC "5@"
 *   insn=0x000000000036E80C string=0x000000000036E810 ""
 *   insn=0x000000000036E818 string=0x000000000036E81C "A@"
 *   insn=0x000000000036E824 string=0x000000000036E828 "JQ"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MainMenuViewController::AlertViewClickedButtonAtIndex(
        Caver::MainMenuViewController *this,
        Caver::GUIAlertView *a2,
        int a3)
{
  __int64 v4; // x20
  void (*v5)(void); // x8
  __int64 v7; // x0

  if ( *((Caver::GUIAlertView **)this + 29) != a2 && *((Caver::GUIAlertView **)this + 31) == a2 )
  {
    if ( *((_DWORD *)a2 + 106) != a3 )
    {
      if ( *((_DWORD *)this + 66) == a3 )
      {
        v5 = *(void (**)(void))(*(_QWORD *)Caver::OnlineController::SharedController(this) + 152LL);
      }
      else if ( *((_DWORD *)this + 67) == a3 )
      {
        v5 = *(void (**)(void))(*(_QWORD *)Caver::OnlineController::SharedController(this) + 168LL);
      }
      else
      {
        if ( *((_DWORD *)this + 68) != a3 )
        {
          if ( !a3 )
          {
            v7 = Caver::OnlineController::SharedController(this);
            LODWORD(v4) = 1;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 128LL))(v7, 1);
            Caver::MainMenuViewController::CompleteInitialPrivacy(this);
            return (unsigned int)v4;
          }
          goto LABEL_12;
        }
        v5 = *(void (**)(void))(*(_QWORD *)Caver::OnlineController::SharedController(this) + 104LL);
      }
      v5();
    }
LABEL_12:
    LODWORD(v4) = 0;
    return (unsigned int)v4;
  }
  return (unsigned int)&dword_0 + 1;
}

