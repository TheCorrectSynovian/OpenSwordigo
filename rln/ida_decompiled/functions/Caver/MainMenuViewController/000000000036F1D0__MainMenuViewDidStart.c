/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000036F1D0
 * Mangled: _ZN5Caver22MainMenuViewController20MainMenuViewDidStartEPNS_12MainMenuViewE
 * Demangled: Caver::MainMenuViewController::MainMenuViewDidStart(Caver::MainMenuView *)
 *
 * Callers: 1
 *   0x00000000001FFBD0  Caver::MainMenuViewController::MainMenuViewDidStart(Caver::MainMenuView *)
 *
 * Callees: 8
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7A70  Caver::ProfileSelectionViewController::ProfileSelectionViewController(void)
 *   0x00000000001FA080  boost::shared_ptr<Caver::ProfileSelectionViewController>::shared_ptr<Caver::ProfileSelectionViewController>(Caver::ProfileSelectionViewController *)
 *   0x00000000001FFBD0  Caver::MainMenuViewController::MainMenuViewDidStart(Caver::MainMenuView *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 42
 *   insn=0x000000000036F1E0 string=0x000000000036F1E4 "U"
 *   insn=0x000000000036F1F0 string=0x000000000036F1F4 "in@"
 *   insn=0x000000000036F1F4 string=0x000000000036F1F8 "I"
 *   insn=0x000000000036F1F8 string=0x000000000036F280 "h"
 *   insn=0x000000000036F200 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000036F208 string=0x00000000001F7A70 "0'"
 *   insn=0x000000000036F214 string=0x000000000036F218 "h"
 *   insn=0x000000000036F214 string=0x00000000001FA080 "0'"
 *   insn=0x000000000036F224 string=0x000000000036F228 "i"
 *   insn=0x000000000036F22C string=0x000000000036F230 "4"
 *   insn=0x000000000036F230 string=0x000000000036F274 "in@"
 *   insn=0x000000000036F234 string=0x000000000036F238 ""
 *   insn=0x000000000036F248 string=0x000000000036F24C "\t@"
 *   insn=0x000000000036F254 string=0x000000000036F258 ""
 *   insn=0x000000000036F268 string=0x000000000036F26C "@"
 *   insn=0x000000000036F274 string=0x000000000036F278 "h"
 *   insn=0x000000000036F278 string=0x000000000036F27C "()"
 *   insn=0x000000000036F280 string=0x000000000036F284 ")@"
 *   insn=0x000000000036F288 string=0x000000000036F28C "ir@"
 *   insn=0x000000000036F294 string=0x000000000036F298 "*"
 *   insn=0x000000000036F298 string=0x000000000036F29C "J"
 *   insn=0x000000000036F29C string=0x000000000036F2A0 "*"
 *   insn=0x000000000036F2B0 string=0x000000000036F2B4 "3"
 *   insn=0x000000000036F2B4 string=0x000000000036F2B8 "h"
 *   insn=0x000000000036F2B8 string=0x000000000036F2BC ""
 *   insn=0x000000000036F2BC string=0x000000000036F2C0 "h"
 *   insn=0x000000000036F2C4 string=0x000000000036F2C8 "h"
 *   insn=0x000000000036F2CC string=0x000000000036F2D0 "\t@"
 *   insn=0x000000000036F2D4 string=0x000000000036F2D8 "h\n@"
 *   insn=0x000000000036F2D8 string=0x000000000036F2DC ""
 *   insn=0x000000000036F2DC string=0x000000000036F2E0 "h\n"
 *   insn=0x000000000036F2E4 string=0x000000000036F2E8 "h"
 *   insn=0x000000000036F2EC string=0x000000000036F2F0 "@"
 *   insn=0x000000000036F31C string=0x00000000001F62D0 "0'"
 *   insn=0x000000000036F328 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000036F32C string=0x000000000036F330 "eI"
 *   insn=0x000000000036F338 string=0x000000000036F33C "4"
 *   insn=0x000000000036F340 string=0x000000000036F344 ""
 *   insn=0x000000000036F350 string=0x000000000036F354 "\t@"
 *   insn=0x000000000036F360 string=0x000000000036F364 ""
 *   insn=0x000000000036F370 string=0x000000000036F374 "@"
 *   insn=0x000000000036F380 string=0x000000000036F384 "PI"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MainMenuViewController::MainMenuViewDidStart(
        Caver::MainMenuViewController *this,
        Caver::MainMenuView *a2)
{
  __int64 v3; // x9
  Caver::ProfileSelectionViewController *v4; // x0
  _QWORD *v5; // x20
  __int64 v6; // x9
  _QWORD *v7; // x8
  __int64 v8; // x8
  __int64 v9; // x8
  __int64 (__fastcall *v10)(Caver::MainMenuViewController *, __int64 *); // x8
  _QWORD *v11; // x9
  __int64 result; // x0
  _QWORD *v13; // x19
  __int64 v14; // x8
  __int64 v15; // x8
  __int64 v16; // [xsp+8h] [xbp-38h] BYREF
  _QWORD *v17; // [xsp+10h] [xbp-30h]
  __int64 v18; // [xsp+18h] [xbp-28h]

  v18 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = *((_QWORD *)this + 27);
  if ( !v3 )
  {
    v4 = (Caver::ProfileSelectionViewController *)operator new(0x68u);
    Caver::ProfileSelectionViewController::ProfileSelectionViewController(v4);
    boost::shared_ptr<Caver::ProfileSelectionViewController>::shared_ptr<Caver::ProfileSelectionViewController>();
    v5 = (_QWORD *)*((_QWORD *)this + 28);
    v6 = v16;
    v16 = *((_QWORD *)this + 27);
    v7 = v17;
    *((_QWORD *)this + 27) = v6;
    *((_QWORD *)this + 28) = v7;
    v17 = v5;
    if ( v5 )
    {
      v8 = v5[1] - 1LL;
      v5[1] = v8;
      if ( !v8 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
        v9 = v5[2] - 1LL;
        v5[2] = v9;
        if ( !v9 )
          (*(void (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
      }
    }
    v3 = *((_QWORD *)this + 27);
    *(_QWORD *)(v3 + 80) = (char *)this + 96;
  }
  v10 = *(__int64 (__fastcall **)(Caver::MainMenuViewController *, __int64 *))(*(_QWORD *)this + 80LL);
  v16 = v3;
  v11 = (_QWORD *)*((_QWORD *)this + 28);
  v17 = v11;
  if ( v11 )
    ++v11[1];
  result = v10(this, &v16);
  v13 = v17;
  if ( v17 )
  {
    v14 = v17[1] - 1LL;
    v17[1] = v14;
    if ( !v14 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
      v15 = v13[2] - 1LL;
      v13[2] = v15;
      if ( !v15 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v13 + 24LL))(v13);
    }
  }
  return result;
}

