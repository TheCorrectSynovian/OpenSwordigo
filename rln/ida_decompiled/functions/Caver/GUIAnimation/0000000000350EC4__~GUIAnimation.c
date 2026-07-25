/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000350EC4
 * Mangled: _ZN5Caver12GUIAnimationD2Ev
 * Demangled: Caver::GUIAnimation::~GUIAnimation()
 *
 * Callers: 1
 *   0x00000000001F8B20  Caver::GUIAnimation::~GUIAnimation()
 *
 * Callees: 3
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000035119C  boost::shared_ptr<Caver::DebugInfoOverlay>::shared_ptr<Caver::DebugInfoOverlay>(Caver::DebugInfoOverlay *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 72
 *   insn=0x0000000000350ED4 string=0x0000000000350ED8 "tZ@"
 *   insn=0x0000000000350ED8 string=0x0000000000350EDC "4"
 *   insn=0x0000000000350EDC string=0x0000000000350F20 "tN@"
 *   insn=0x0000000000350EE0 string=0x0000000000350EE4 ""
 *   insn=0x0000000000350EF0 string=0x0000000000350EF4 "\t@"
 *   insn=0x0000000000350F00 string=0x0000000000350F04 ""
 *   insn=0x0000000000350F10 string=0x0000000000350F14 "@"
 *   insn=0x0000000000350F20 string=0x0000000000350F24 "4"
 *   insn=0x0000000000350F24 string=0x0000000000350F68 "tB@"
 *   insn=0x0000000000350F28 string=0x0000000000350F2C ""
 *   insn=0x0000000000350F38 string=0x0000000000350F3C "\t@"
 *   insn=0x0000000000350F48 string=0x0000000000350F4C ""
 *   insn=0x0000000000350F58 string=0x0000000000350F5C "@"
 *   insn=0x0000000000350F68 string=0x0000000000350F6C "4"
 *   insn=0x0000000000350F6C string=0x0000000000350FB0 "h\n@"
 *   insn=0x0000000000350F70 string=0x0000000000350F74 ""
 *   insn=0x0000000000350F80 string=0x0000000000350F84 "\t@"
 *   insn=0x0000000000350F90 string=0x0000000000350F94 ""
 *   insn=0x0000000000350FA0 string=0x0000000000350FA4 "@"
 *   insn=0x0000000000350FB0 string=0x0000000000350FB4 "H"
 *   insn=0x0000000000350FB4 string=0x0000000000350FB8 ""
 *   insn=0x0000000000350FB4 string=0x0000000000350FDC "`"
 *   insn=0x0000000000350FB8 string=0x0000000000350FBC ""
 *   insn=0x0000000000350FBC string=0x0000000000350FC0 ""
 *   insn=0x0000000000350FC4 string=0x0000000000350FC8 "`b"
 *   insn=0x0000000000350FE0 string=0x0000000000350FE4 "@"
 *   insn=0x0000000000350FE4 string=0x0000000000350FE8 ""
 *   insn=0x0000000000350FE8 string=0x0000000000350FEC ""
 *   insn=0x0000000000350FF0 string=0x0000000000351004 ""
 *   insn=0x0000000000351014 string=0x0000000000351018 " "
 *   insn=0x0000000000351024 string=0x0000000000351028 "\t\t@"
 *   insn=0x0000000000351028 string=0x000000000035102C ")"
 *   insn=0x000000000035102C string=0x0000000000351030 "\t\t"
 *   insn=0x0000000000351034 string=0x0000000000351038 "\t"
 *   insn=0x0000000000351038 string=0x000000000035103C ")@"
 *   insn=0x0000000000351040 string=0x0000000000351044 " "
 *   insn=0x0000000000351044 string=0x0000000000351048 "C"
 *   insn=0x0000000000351050 string=0x0000000000351054 "h\n@"
 *   insn=0x0000000000351058 string=0x000000000035105C "5"
 *   insn=0x0000000000351058 string=0x000000000035110C ""
 *   insn=0x000000000035105C string=0x0000000000351130 "`"
 *   insn=0x0000000000351060 string=0x0000000000351064 "uB@"
 *   insn=0x0000000000351068 string=0x000000000035106C "&"
 *   insn=0x000000000035106C string=0x0000000000351104 "h\n@"
 *   insn=0x0000000000351074 string=0x0000000000351078 "5"
 *   insn=0x0000000000351078 string=0x00000000003510BC "uB@"
 *   insn=0x000000000035107C string=0x0000000000351080 ""
 *   insn=0x000000000035108C string=0x0000000000351090 "\t@"
 *   insn=0x000000000035109C string=0x00000000003510A0 ""
 *   insn=0x00000000003510AC string=0x00000000003510B0 "@"
 *   insn=0x00000000003510BC string=0x00000000003510C0 "5"
 *   insn=0x00000000003510C4 string=0x00000000003510C8 ""
 *   insn=0x00000000003510D4 string=0x00000000003510D8 "\t@"
 *   insn=0x00000000003510E4 string=0x00000000003510E8 ""
 *   insn=0x00000000003510F4 string=0x00000000003510F8 "@"
 *   insn=0x0000000000351104 string=0x0000000000351108 "H"
 *   insn=0x000000000035110C string=0x0000000000351110 ""
 *   insn=0x0000000000351110 string=0x0000000000351114 ""
 *   insn=0x0000000000351118 string=0x000000000035111C "`b"
 *   insn=0x0000000000351134 string=0x0000000000351138 "@"
 *   insn=0x0000000000351138 string=0x000000000035113C ""
 *   insn=0x000000000035113C string=0x0000000000351140 ""
 *   insn=0x0000000000351144 string=0x0000000000351148 ""
 *   insn=0x0000000000351148 string=0x000000000035114C "@"
 *   insn=0x0000000000351158 string=0x000000000035115C "h"
 *   insn=0x0000000000351164 string=0x0000000000351168 "\t\t@"
 *   insn=0x0000000000351168 string=0x000000000035116C ")"
 *   insn=0x000000000035116C string=0x0000000000351170 "\t\t"
 *   insn=0x0000000000351174 string=0x0000000000351178 "\t"
 *   insn=0x0000000000351178 string=0x000000000035117C ")@"
 *   insn=0x0000000000351180 string=0x0000000000351184 " "
 *   insn=0x0000000000351194 string=0x0000000000351198 "m"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUIAnimation::~GUIAnimation(Caver::GUIAnimation *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x8
  _QWORD *v8; // x20
  __int64 v9; // x8
  __int64 v10; // x8
  __int64 v11; // x8
  void (__fastcall *v12)(char *, char *, __int64); // x8
  _QWORD *v13; // x0
  __int64 v14; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 22);
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
  v5 = (_QWORD *)*((_QWORD *)this + 19);
  if ( v5 )
  {
    v6 = v5[1] - 1LL;
    v5[1] = v6;
    if ( !v6 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
      v7 = v5[2] - 1LL;
      v5[2] = v7;
      if ( !v7 )
        (*(void (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
    }
  }
  v8 = (_QWORD *)*((_QWORD *)this + 16);
  if ( v8 )
  {
    v9 = v8[1] - 1LL;
    v8[1] = v9;
    if ( !v9 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
      v10 = v8[2] - 1LL;
      v8[2] = v10;
      if ( !v10 )
        (*(void (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
    }
  }
  v11 = *((_QWORD *)this + 2);
  if ( v11 )
  {
    if ( (v11 & 1) == 0 )
    {
      v12 = *(void (__fastcall **)(char *, char *, __int64))(v11 & 0xFFFFFFFFFFFFFFFELL);
      if ( v12 )
        v12((char *)this + 24, (char *)this + 24, 2);
    }
    *((_QWORD *)this + 2) = 0;
  }
  v13 = (_QWORD *)*((_QWORD *)this + 1);
  if ( v13 )
  {
    v14 = v13[2] - 1LL;
    v13[2] = v14;
    if ( !v14 )
      (*(void (__fastcall **)(_QWORD *))(*v13 + 24LL))(v13);
  }
}

