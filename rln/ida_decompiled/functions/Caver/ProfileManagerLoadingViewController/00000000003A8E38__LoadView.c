/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A8E38
 * Mangled: _ZN5Caver35ProfileManagerLoadingViewController8LoadViewEv
 * Demangled: Caver::ProfileManagerLoadingViewController::LoadView(void)
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FC040  boost::shared_ptr<Caver::ProfileManagerLoadingView>::shared_ptr<Caver::ProfileManagerLoadingView>(Caver::ProfileManagerLoadingView *)
 *   0x00000000001FCBA0  Caver::ProfileManagerLoadingView::ProfileManagerLoadingView(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003A9064  Caver::ProfileManagerLoadingViewController::Update(float)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 48
 *   insn=0x00000000003A8E48 string=0x00000000003A8E4C "V"
 *   insn=0x00000000003A8E60 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003A8E64 string=0x00000000003A8E68 "NO"
 *   insn=0x00000000003A8E68 string=0x00000000001FCBA0 "0'"
 *   insn=0x00000000003A8E70 string=0x00000000003A8E74 "sL"
 *   insn=0x00000000003A8E74 string=0x00000000003A8E78 "hRE"
 *   insn=0x00000000003A8E74 string=0x00000000001FC040 "0'"
 *   insn=0x00000000003A8E84 string=0x00000000003A8E88 "i""
 *   insn=0x00000000003A8E8C string=0x00000000003A8E90 "4"
 *   insn=0x00000000003A8E90 string=0x00000000003A8ED4 "h*@"
 *   insn=0x00000000003A8E94 string=0x00000000003A8E98 ""
 *   insn=0x00000000003A8EA8 string=0x00000000003A8EAC "\t@"
 *   insn=0x00000000003A8EB4 string=0x00000000003A8EB8 ""
 *   insn=0x00000000003A8EC8 string=0x00000000003A8ECC "@"
 *   insn=0x00000000003A8ED4 string=0x00000000003A8ED8 "\tq@"
 *   insn=0x00000000003A8ED8 string=0x00000000003A8EDC "?I"
 *   insn=0x00000000003A8EE0 string=0x00000000003A8F18 "t.@"
 *   insn=0x00000000003A8EE4 string=0x00000000003A8EE8 "I"
 *   insn=0x00000000003A8EE8 string=0x00000000003A8EEC "\tq"
 *   insn=0x00000000003A8EEC string=0x00000000003A8EF0 "@"
 *   insn=0x00000000003A8EF4 string=0x0000000000583734 "o"
 *   insn=0x00000000003A8EF8 string=0x00000000003A8EFC "!5G"
 *   insn=0x00000000003A8F04 string=0x00000000003A8F08 ""
 *   insn=0x00000000003A8F08 string=0x00000000003A8F0C "-@"
 *   insn=0x00000000003A8F10 string=0x00000000003A8F14 "h*@"
 *   insn=0x00000000003A8F1C string=0x00000000003A8F2C "u"
 *   insn=0x00000000003A8F20 string=0x00000000003A8F24 ")\t"
 *   insn=0x00000000003A8F2C string=0x00000000003A8F30 "h"
 *   insn=0x00000000003A8F30 string=0x00000000003A8F34 "5"
 *   insn=0x00000000003A8F34 string=0x00000000003A8F78 "`"@"
 *   insn=0x00000000003A8F38 string=0x00000000003A8F3C ""
 *   insn=0x00000000003A8F48 string=0x00000000003A8F4C "\t@"
 *   insn=0x00000000003A8F58 string=0x00000000003A8F5C ""
 *   insn=0x00000000003A8F68 string=0x00000000003A8F6C "@"
 *   insn=0x00000000003A8F7C string=0x00000000003A8F80 ""
 *   insn=0x00000000003A8F7C string=0x00000000003A8F90 "4"
 *   insn=0x00000000003A8F80 string=0x00000000003A8F84 ""
 *   insn=0x00000000003A8F94 string=0x00000000003A8F98 ""
 *   insn=0x00000000003A8FA8 string=0x00000000003A8FAC "\t@"
 *   insn=0x00000000003A8FB4 string=0x00000000003A8FB8 ""
 *   insn=0x00000000003A8FC8 string=0x00000000003A8FCC "@"
 *   insn=0x00000000003A8FF8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003A8FFC string=0x00000000003A9000 "4"
 *   insn=0x00000000003A9004 string=0x00000000003A9008 ""
 *   insn=0x00000000003A9014 string=0x00000000003A9018 "\t@"
 *   insn=0x00000000003A9024 string=0x00000000003A9028 ""
 *   insn=0x00000000003A9034 string=0x00000000003A9038 "@"
 *   insn=0x00000000003A9058 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall ***__fastcall Caver::ProfileManagerLoadingViewController::LoadView(
        Caver::ProfileManagerLoadingViewController *this))(_QWORD, Caver::ProfileManagerLoadingViewController *)
{
  Caver::ProfileManagerLoadingView *v2; // x0
  _QWORD *v3; // x20
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 v6; // x8
  float *v7; // x0
  _QWORD *v8; // x20
  _QWORD *v9; // x21
  __int64 v10; // x8
  __int64 v11; // x8
  __int64 (__fastcall ***result)(_QWORD, Caver::ProfileManagerLoadingViewController *); // x0
  __int64 v13; // x8
  __int64 v14; // x8
  __int64 v15; // [xsp+8h] [xbp-38h]
  __int64 v16; // [xsp+10h] [xbp-30h]

  _ReadStatusReg(TPIDR_EL0);
  v2 = (Caver::ProfileManagerLoadingView *)operator new(0x120u);
  Caver::ProfileManagerLoadingView::ProfileManagerLoadingView(v2);
  boost::shared_ptr<Caver::ProfileManagerLoadingView>::shared_ptr<Caver::ProfileManagerLoadingView>();
  v3 = (_QWORD *)*((_QWORD *)this + 11);
  *((_QWORD *)this + 10) = v15;
  *((_QWORD *)this + 11) = v16;
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
  v6 = *((_QWORD *)this + 10);
  if ( *(_DWORD *)(v6 + 112) != 18 )
  {
    v7 = *(float **)(v6 + 88);
    *(_DWORD *)(v6 + 112) = 18;
    if ( v7 )
    {
      if ( v7[35] > 0.001 )
      {
        (*(void (__fastcall **)(float *))(*(_QWORD *)v7 + 88LL))(v7);
        v6 = *((_QWORD *)this + 10);
      }
    }
  }
  v8 = (_QWORD *)*((_QWORD *)this + 11);
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
  result = (__int64 (__fastcall ***)(_QWORD, Caver::ProfileManagerLoadingViewController *))*((_QWORD *)this + 8);
  if ( result )
    result = (__int64 (__fastcall ***)(_QWORD, Caver::ProfileManagerLoadingViewController *))(**result)(result, this);
  if ( v8 )
  {
    v13 = v8[1] - 1LL;
    v8[1] = v13;
    if ( !v13 )
    {
      result = (__int64 (__fastcall ***)(_QWORD, Caver::ProfileManagerLoadingViewController *))(*(__int64 (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
      v14 = v8[2] - 1LL;
      v8[2] = v14;
      if ( !v14 )
        return (__int64 (__fastcall ***)(_QWORD, Caver::ProfileManagerLoadingViewController *))(*(__int64 (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
    }
  }
  return result;
}

