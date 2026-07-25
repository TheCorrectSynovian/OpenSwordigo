/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BB450
 * Mangled: _ZNSt4listIN5Caver12TargetActionIFvbRKSsEEESaIS5_EE5eraseESt14_List_iteratorIS5_E
 * Demangled: std::list<Caver::TargetAction<void ()(bool,std::string const&)>,std::allocator<Caver::TargetAction<void ()(bool,std::string const&)>>>::erase(std::_List_iterator<Caver::TargetAction<void ()(bool,std::string const&)>>)
 *
 * Callers: 2
 *   0x00000000002034F0  std::list<Caver::TargetAction<void ()(bool,std::string const&)>,std::allocator<Caver::TargetAction<void ()(bool,std::string const&)>>>::erase(std::_List_iterator<Caver::TargetAction<void ()(bool,std::string const&)>>)
 *   0x00000000004BAE14  Caver::OnlineController_Android::HandleGoogleSignInCompleted(bool)
 *
 * Callees: 8
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FED70  Caver::StoreController::IsNoAdsUnlockedCheck(void)
 *   0x00000000001FF270  Caver::StoreController::SharedController(void)
 *   0x0000000000200AB0  Caver::StoreController::IsCoinDoublerUnlockedCheck(void)
 *   0x0000000000203C30  Caver::StoreController::IsGuideUnlockedCheck(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000052A9C8  sub_52A9C8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 29
 *   insn=0x00000000004BB45C string=0x00000000004BB460 "t"
 *   insn=0x00000000004BB464 string=0x00000000004BB468 "X"
 *   insn=0x00000000004BB468 string=0x00000000004BB46C "h"
 *   insn=0x00000000004BB46C string=0x00000000004BB470 "H"
 *   insn=0x00000000004BB470 string=0x00000000004BB474 ""
 *   insn=0x00000000004BB470 string=0x00000000004BB498 "`"
 *   insn=0x00000000004BB474 string=0x00000000004BB478 ""
 *   insn=0x00000000004BB478 string=0x00000000004BB47C ""
 *   insn=0x00000000004BB480 string=0x00000000004BB484 "`"
 *   insn=0x00000000004BB49C string=0x00000000004BB4A0 "@"
 *   insn=0x00000000004BB4A0 string=0x00000000004BB4A4 ""
 *   insn=0x00000000004BB4A4 string=0x00000000004BB4A8 ""
 *   insn=0x00000000004BB4AC string=0x00000000004BB4B0 ""
 *   insn=0x00000000004BB4B0 string=0x00000000004BB4B4 "@"
 *   insn=0x00000000004BB4BC string=0x00000000004BB4C0 "|"
 *   insn=0x00000000004BB4C0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004BB4D8 string=0x00000000004BB4DC "("
 *   insn=0x00000000004BB4DC string=0x00000000004BB4E0 "\t\t@"
 *   insn=0x00000000004BB4E0 string=0x00000000004BB4E4 ")"
 *   insn=0x00000000004BB4E4 string=0x00000000004BB4E8 "\t\t"
 *   insn=0x00000000004BB4EC string=0x00000000004BB4F0 "\t"
 *   insn=0x00000000004BB4F0 string=0x00000000004BB4F4 ")@"
 *   insn=0x00000000004BB4F8 string=0x00000000004BB4FC " "
 *   insn=0x00000000004BB510 string=0x00000000004BB514 "W"
 *   insn=0x00000000004BB51C string=0x00000000004BB520 "T"
 *   insn=0x00000000004BB520 string=0x00000000004BB524 "c"
 *   insn=0x00000000004BB524 string=0x00000000004BB528 "`"
 *   insn=0x00000000004BB528 string=0x00000000004BB534 "O"
 *   insn=0x00000000004BB538 string=0x00000000004BB53C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::list<Caver::TargetAction<void ()(bool,std::string const&)>>::erase(__int64 a1, __int64 *a2)
{
  __int64 v3; // x20
  __int64 v4; // x8
  void (__fastcall *v5)(__int64 *, __int64 *, __int64); // x8
  _QWORD *v6; // x0
  __int64 v7; // x8

  v3 = *a2;
  sub_52A9C8(a2);
  v4 = a2[4];
  if ( v4 )
  {
    if ( (v4 & 1) == 0 )
    {
      v5 = *(void (__fastcall **)(__int64 *, __int64 *, __int64))(v4 & 0xFFFFFFFFFFFFFFFELL);
      if ( v5 )
        v5(a2 + 5, a2 + 5, 2);
    }
    a2[4] = 0;
  }
  v6 = (_QWORD *)a2[3];
  if ( v6 )
  {
    v7 = v6[2] - 1LL;
    v6[2] = v7;
    if ( !v7 )
      (*(void (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
  }
  operator delete(a2);
  return v3;
}

