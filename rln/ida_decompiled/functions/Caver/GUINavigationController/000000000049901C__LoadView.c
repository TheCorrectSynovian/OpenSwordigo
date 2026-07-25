/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049901C
 * Mangled: _ZN5Caver23GUINavigationController8LoadViewEv
 * Demangled: Caver::GUINavigationController::LoadView(void)
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F9150  Caver::GUIView::GUIView(void)
 *   0x00000000001FCFC0  boost::shared_ptr<Caver::GUIView>::shared_ptr<Caver::GUIView>(Caver::GUIView *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 52
 *   insn=0x000000000049902C string=0x0000000000499030 "U"
 *   insn=0x0000000000499040 string=0x0000000000499044 "gq"
 *   insn=0x0000000000499044 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000499048 string=0x000000000049904C "A"
 *   insn=0x000000000049904C string=0x00000000001F9150 "0'"
 *   insn=0x0000000000499058 string=0x00000000001FCFC0 "0'"
 *   insn=0x000000000049905C string=0x0000000000499060 "\tq@"
 *   insn=0x0000000000499060 string=0x0000000000499064 "?I"
 *   insn=0x000000000049906C string=0x0000000000499070 "I"
 *   insn=0x0000000000499070 string=0x0000000000499074 "\tq"
 *   insn=0x0000000000499074 string=0x0000000000499078 "@"
 *   insn=0x0000000000499078 string=0x000000000049907C "I"
 *   insn=0x000000000049907C string=0x0000000000583734 "o"
 *   insn=0x0000000000499080 string=0x0000000000499084 "!5G"
 *   insn=0x000000000049908C string=0x0000000000499090 ""
 *   insn=0x0000000000499090 string=0x0000000000499094 "-@"
 *   insn=0x00000000004990A4 string=0x00000000004990A8 "*"
 *   insn=0x00000000004990A4 string=0x00000000004990B4 "t"
 *   insn=0x00000000004990A8 string=0x00000000004990AC "J"
 *   insn=0x00000000004990AC string=0x00000000004990B0 "*"
 *   insn=0x00000000004990B4 string=0x00000000004990B8 "h"
 *   insn=0x00000000004990B8 string=0x00000000004990BC "4"
 *   insn=0x00000000004990BC string=0x0000000000499100 "`"@"
 *   insn=0x00000000004990C0 string=0x00000000004990C4 ""
 *   insn=0x00000000004990D0 string=0x00000000004990D4 "\t@"
 *   insn=0x00000000004990E0 string=0x00000000004990E4 ""
 *   insn=0x00000000004990F0 string=0x00000000004990F4 "@"
 *   insn=0x0000000000499104 string=0x0000000000499108 ""
 *   insn=0x0000000000499108 string=0x000000000049910C ""
 *   insn=0x0000000000499118 string=0x000000000049911C "3"
 *   insn=0x000000000049911C string=0x0000000000499120 "h"
 *   insn=0x0000000000499120 string=0x0000000000499124 ""
 *   insn=0x0000000000499124 string=0x0000000000499128 "h"
 *   insn=0x000000000049912C string=0x0000000000499130 "h"
 *   insn=0x0000000000499134 string=0x0000000000499138 "\t@"
 *   insn=0x000000000049913C string=0x0000000000499140 "h\n@"
 *   insn=0x0000000000499140 string=0x0000000000499144 ""
 *   insn=0x0000000000499144 string=0x0000000000499148 "h\n"
 *   insn=0x000000000049914C string=0x0000000000499150 "h"
 *   insn=0x0000000000499154 string=0x0000000000499158 "@"
 *   insn=0x000000000049916C string=0x0000000000499184 "St"
 *   insn=0x0000000000499184 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000049918C string=0x0000000000499190 "Hx"
 *   insn=0x0000000000499190 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004991A0 string=0x00000000004991A4 "4"
 *   insn=0x00000000004991A8 string=0x00000000004991AC ""
 *   insn=0x00000000004991B8 string=0x00000000004991BC "\t@"
 *   insn=0x00000000004991C8 string=0x00000000004991CC ""
 *   insn=0x00000000004991D8 string=0x00000000004991DC "@"
 *   insn=0x00000000004991EC string=0x00000000004991F0 "W"
 *   insn=0x00000000004991F8 string=0x00000000004991FC ""
 *   insn=0x0000000000499200 string=0x0000000000499204 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall ***__fastcall Caver::GUINavigationController::LoadView(
        Caver::GUINavigationController *this))(_QWORD, Caver::GUINavigationController *)
{
  Caver::GUIView *v2; // x0
  __int64 v3; // x8
  float *v4; // x0
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 (__fastcall ***result)(_QWORD, Caver::GUINavigationController *); // x0
  __int64 v9; // x8
  __int64 v10; // x8
  __int64 v11; // [xsp+8h] [xbp-38h]
  _QWORD *v12; // [xsp+10h] [xbp-30h]

  _ReadStatusReg(TPIDR_EL0);
  v2 = (Caver::GUIView *)operator new(0xF0u);
  Caver::GUIView::GUIView(v2);
  boost::shared_ptr<Caver::GUIView>::shared_ptr<Caver::GUIView>();
  v3 = v11;
  if ( *(_DWORD *)(v11 + 112) != 18 )
  {
    v4 = *(float **)(v11 + 88);
    *(_DWORD *)(v11 + 112) = 18;
    if ( v4 )
    {
      if ( v4[35] > 0.001 )
      {
        (*(void (__fastcall **)(float *))(*(_QWORD *)v4 + 88LL))(v4);
        v3 = v11;
      }
    }
  }
  if ( v12 )
    ++v12[1];
  v5 = (_QWORD *)*((_QWORD *)this + 4);
  *((_QWORD *)this + 3) = v3;
  *((_QWORD *)this + 4) = v12;
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
  result = (__int64 (__fastcall ***)(_QWORD, Caver::GUINavigationController *))*((_QWORD *)this + 8);
  if ( result )
    result = (__int64 (__fastcall ***)(_QWORD, Caver::GUINavigationController *))(**result)(result, this);
  if ( v12 )
  {
    v9 = v12[1] - 1LL;
    v12[1] = v9;
    if ( !v9 )
    {
      result = (__int64 (__fastcall ***)(_QWORD, Caver::GUINavigationController *))(*(__int64 (__fastcall **)())(*v12 + 16LL))();
      v10 = v12[2] - 1LL;
      v12[2] = v10;
      if ( !v10 )
        return (__int64 (__fastcall ***)(_QWORD, Caver::GUINavigationController *))(*(__int64 (__fastcall **)())(*v12 + 24LL))();
    }
  }
  return result;
}

