/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000347C68
 * Mangled: _ZN5Caver22GameOverViewController8LoadViewEv
 * Demangled: Caver::GameOverViewController::LoadView(void)
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7990  Caver::GameOverView::GameOverView(void)
 *   0x00000000001FE9E0  boost::shared_ptr<Caver::GameOverView>::shared_ptr<Caver::GameOverView>(Caver::GameOverView *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000347E9C  Caver::GameOverViewController::SuspendView(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 53
 *   insn=0x0000000000347C78 string=0x0000000000347C7C "V"
 *   insn=0x0000000000347C8C string=0x0000000000347C90 "T"
 *   insn=0x0000000000347C90 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000347C94 string=0x0000000000347C98 ">"
 *   insn=0x0000000000347C98 string=0x00000000001F7990 "0'"
 *   insn=0x0000000000347CA0 string=0x0000000000347CA4 "O"
 *   insn=0x0000000000347CA4 string=0x0000000000347CA8 "h"
 *   insn=0x0000000000347CB4 string=0x0000000000347CB8 "i"
 *   insn=0x0000000000347CBC string=0x0000000000347CC0 "4"
 *   insn=0x0000000000347CC0 string=0x0000000000347D04 "h6@"
 *   insn=0x0000000000347CC4 string=0x0000000000347CC8 ""
 *   insn=0x0000000000347CD8 string=0x0000000000347CDC "\t@"
 *   insn=0x0000000000347CE4 string=0x0000000000347CE8 ""
 *   insn=0x0000000000347CF8 string=0x0000000000347CFC "@"
 *   insn=0x0000000000347D04 string=0x0000000000347D08 "\tq@"
 *   insn=0x0000000000347D08 string=0x0000000000347D0C "?I"
 *   insn=0x0000000000347D10 string=0x0000000000347D48 "i""
 *   insn=0x0000000000347D14 string=0x0000000000347D18 "I"
 *   insn=0x0000000000347D18 string=0x0000000000347D1C "\tq"
 *   insn=0x0000000000347D1C string=0x0000000000347D20 "@"
 *   insn=0x0000000000347D24 string=0x0000000000583734 "o"
 *   insn=0x0000000000347D28 string=0x0000000000347D2C "!5G"
 *   insn=0x0000000000347D34 string=0x0000000000347D38 ""
 *   insn=0x0000000000347D38 string=0x0000000000347D3C "-@"
 *   insn=0x0000000000347D40 string=0x0000000000347D44 "h6@"
 *   insn=0x0000000000347D48 string=0x0000000000347D4C "\ty"
 *   insn=0x0000000000347D4C string=0x0000000000347D50 "t:@"
 *   insn=0x0000000000347D54 string=0x0000000000347D64 "u"
 *   insn=0x0000000000347D58 string=0x0000000000347D5C ")\t"
 *   insn=0x0000000000347D64 string=0x0000000000347D68 "h"
 *   insn=0x0000000000347D68 string=0x0000000000347D6C "5"
 *   insn=0x0000000000347D6C string=0x0000000000347DB0 "`"@"
 *   insn=0x0000000000347D70 string=0x0000000000347D74 ""
 *   insn=0x0000000000347D80 string=0x0000000000347D84 "\t@"
 *   insn=0x0000000000347D90 string=0x0000000000347D94 ""
 *   insn=0x0000000000347DA0 string=0x0000000000347DA4 "@"
 *   insn=0x0000000000347DB4 string=0x0000000000347DB8 ""
 *   insn=0x0000000000347DB4 string=0x0000000000347DC8 "4"
 *   insn=0x0000000000347DB8 string=0x0000000000347DBC ""
 *   insn=0x0000000000347DCC string=0x0000000000347DD0 ""
 *   insn=0x0000000000347DE0 string=0x0000000000347DE4 "\t@"
 *   insn=0x0000000000347DEC string=0x0000000000347DF0 ""
 *   insn=0x0000000000347E00 string=0x0000000000347E04 "@"
 *   insn=0x0000000000347E18 string=0x0000000000347E30 "("
 *   insn=0x0000000000347E30 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000347E34 string=0x0000000000347E38 "4"
 *   insn=0x0000000000347E3C string=0x0000000000347E40 ""
 *   insn=0x0000000000347E4C string=0x0000000000347E50 "\t@"
 *   insn=0x0000000000347E5C string=0x0000000000347E60 ""
 *   insn=0x0000000000347E6C string=0x0000000000347E70 "@"
 *   insn=0x0000000000347E80 string=0x0000000000347E84 "2"
 *   insn=0x0000000000347E8C string=0x0000000000347E90 ""
 *   insn=0x0000000000347E90 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall ***__fastcall Caver::GameOverViewController::LoadView(
        Caver::GameOverViewController *this))(_QWORD, Caver::GameOverViewController *)
{
  Caver::GameOverView *v2; // x0
  _QWORD *v3; // x20
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 v6; // x8
  float *v7; // x0
  _QWORD *v8; // x20
  _QWORD *v9; // x21
  __int64 v10; // x8
  __int64 v11; // x8
  __int64 (__fastcall ***result)(_QWORD, Caver::GameOverViewController *); // x0
  __int64 v13; // x8
  __int64 v14; // x8
  __int64 v15; // [xsp+8h] [xbp-38h]
  __int64 v16; // [xsp+10h] [xbp-30h]

  _ReadStatusReg(TPIDR_EL0);
  v2 = (Caver::GameOverView *)operator new(0x108u);
  Caver::GameOverView::GameOverView(v2);
  boost::shared_ptr<Caver::GameOverView>::shared_ptr<Caver::GameOverView>();
  v3 = (_QWORD *)*((_QWORD *)this + 14);
  *((_QWORD *)this + 13) = v15;
  *((_QWORD *)this + 14) = v16;
  if ( v3 )
  {
    v4 = v3[1] - 1LL;
    v3[1] = v4;
    if ( !v4 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
      v5 = v3[2] - 1LL;
      v3[2] = v5;
      if ( !v5 )
        (*(void (__fastcall **)(_QWORD *))(*v3 + 24LL))(v3);
    }
  }
  v6 = *((_QWORD *)this + 13);
  if ( *(_DWORD *)(v6 + 112) != 18 )
  {
    v7 = *(float **)(v6 + 88);
    *(_DWORD *)(v6 + 112) = 18;
    if ( v7 )
    {
      if ( v7[35] > 0.001 )
      {
        (*(void (__fastcall **)(float *))(*(_QWORD *)v7 + 88LL))(v7);
        v6 = *((_QWORD *)this + 13);
      }
    }
  }
  *(_QWORD *)(v6 + 240) = (char *)this + 72;
  v8 = (_QWORD *)*((_QWORD *)this + 14);
  if ( v8 )
    v8[1] += 2LL;
  v9 = (_QWORD *)*((_QWORD *)this + 4);
  *((_QWORD *)this + 3) = v6;
  *((_QWORD *)this + 4) = v8;
  if ( v9 )
  {
    v10 = v9[1] - 1LL;
    v9[1] = v10;
    if ( !v10 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
      v11 = v9[2] - 1LL;
      v9[2] = v11;
      if ( !v11 )
        (*(void (__fastcall **)(_QWORD *))(*v9 + 24LL))(v9);
    }
  }
  result = (__int64 (__fastcall ***)(_QWORD, Caver::GameOverViewController *))*((_QWORD *)this + 8);
  if ( result )
    result = (__int64 (__fastcall ***)(_QWORD, Caver::GameOverViewController *))(**result)(result, this);
  if ( v8 )
  {
    v13 = v8[1] - 1LL;
    v8[1] = v13;
    if ( !v13 )
    {
      result = (__int64 (__fastcall ***)(_QWORD, Caver::GameOverViewController *))(*(__int64 (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
      v14 = v8[2] - 1LL;
      v8[2] = v14;
      if ( !v14 )
        return (__int64 (__fastcall ***)(_QWORD, Caver::GameOverViewController *))(*(__int64 (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
    }
  }
  return result;
}

