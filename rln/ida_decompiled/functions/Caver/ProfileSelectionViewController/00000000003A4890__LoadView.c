/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A4890
 * Mangled: _ZN5Caver30ProfileSelectionViewController8LoadViewEv
 * Demangled: Caver::ProfileSelectionViewController::LoadView(void)
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA130  boost::shared_ptr<Caver::ProfileSelectionView>::shared_ptr<Caver::ProfileSelectionView>(Caver::ProfileSelectionView *)
 *   0x00000000002011E0  Caver::ProfileSelectionView::ProfileSelectionView(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003A4AC4  Caver::ProfileSelectionViewController::ViewDidAppear(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 50
 *   insn=0x00000000003A48A0 string=0x00000000003A48A4 "V"
 *   insn=0x00000000003A48B4 string=0x00000000003A48B8 "JC"
 *   insn=0x00000000003A48B8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003A48BC string=0x00000000003A48C0 "Hr"
 *   insn=0x00000000003A48CC string=0x00000000003A48D0 "h"
 *   insn=0x00000000003A48CC string=0x00000000001FA130 "0'"
 *   insn=0x00000000003A48DC string=0x00000000003A48E0 "i"
 *   insn=0x00000000003A48E4 string=0x00000000003A48E8 "4"
 *   insn=0x00000000003A48E8 string=0x00000000003A492C "h.@"
 *   insn=0x00000000003A48EC string=0x00000000003A48F0 ""
 *   insn=0x00000000003A4900 string=0x00000000003A4904 "\t@"
 *   insn=0x00000000003A490C string=0x00000000003A4910 ""
 *   insn=0x00000000003A4920 string=0x00000000003A4924 "@"
 *   insn=0x00000000003A492C string=0x00000000003A4930 "\tq@"
 *   insn=0x00000000003A4930 string=0x00000000003A4934 "?I"
 *   insn=0x00000000003A4938 string=0x00000000003A4970 "i""
 *   insn=0x00000000003A493C string=0x00000000003A4940 "I"
 *   insn=0x00000000003A4940 string=0x00000000003A4944 "\tq"
 *   insn=0x00000000003A4944 string=0x00000000003A4948 "@"
 *   insn=0x00000000003A494C string=0x0000000000583734 "o"
 *   insn=0x00000000003A4950 string=0x00000000003A4954 "!5G"
 *   insn=0x00000000003A495C string=0x00000000003A4960 ""
 *   insn=0x00000000003A4960 string=0x00000000003A4964 "-@"
 *   insn=0x00000000003A4968 string=0x00000000003A496C "h.@"
 *   insn=0x00000000003A4970 string=0x00000000003A4974 "\t}"
 *   insn=0x00000000003A4974 string=0x00000000003A4978 "t2@"
 *   insn=0x00000000003A497C string=0x00000000003A498C "u"
 *   insn=0x00000000003A4980 string=0x00000000003A4984 ")\t"
 *   insn=0x00000000003A498C string=0x00000000003A4990 "h"
 *   insn=0x00000000003A4990 string=0x00000000003A4994 "5"
 *   insn=0x00000000003A4994 string=0x00000000003A49D8 "`"@"
 *   insn=0x00000000003A4998 string=0x00000000003A499C ""
 *   insn=0x00000000003A49A8 string=0x00000000003A49AC "\t@"
 *   insn=0x00000000003A49B8 string=0x00000000003A49BC ""
 *   insn=0x00000000003A49C8 string=0x00000000003A49CC "@"
 *   insn=0x00000000003A49DC string=0x00000000003A49E0 ""
 *   insn=0x00000000003A49DC string=0x00000000003A49F0 "4"
 *   insn=0x00000000003A49E0 string=0x00000000003A49E4 ""
 *   insn=0x00000000003A49F4 string=0x00000000003A49F8 ""
 *   insn=0x00000000003A4A08 string=0x00000000003A4A0C "\t@"
 *   insn=0x00000000003A4A14 string=0x00000000003A4A18 ""
 *   insn=0x00000000003A4A28 string=0x00000000003A4A2C "@"
 *   insn=0x00000000003A4A58 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003A4A5C string=0x00000000003A4A60 "4"
 *   insn=0x00000000003A4A64 string=0x00000000003A4A68 ""
 *   insn=0x00000000003A4A74 string=0x00000000003A4A78 "\t@"
 *   insn=0x00000000003A4A84 string=0x00000000003A4A88 ""
 *   insn=0x00000000003A4A94 string=0x00000000003A4A98 "@"
 *   insn=0x00000000003A4AA8 string=0x00000000003A4AAC "("
 *   insn=0x00000000003A4AB8 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall ***__fastcall Caver::ProfileSelectionViewController::LoadView(
        Caver::ProfileSelectionViewController *this))(_QWORD, Caver::ProfileSelectionViewController *)
{
  Caver::ProfileSelectionView *v2; // x0
  _QWORD *v3; // x20
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 v6; // x8
  float *v7; // x0
  _QWORD *v8; // x20
  _QWORD *v9; // x21
  __int64 v10; // x8
  __int64 v11; // x8
  __int64 (__fastcall ***result)(_QWORD, Caver::ProfileSelectionViewController *); // x0
  __int64 v13; // x8
  __int64 v14; // x8
  __int64 v15; // [xsp+8h] [xbp-38h]
  __int64 v16; // [xsp+10h] [xbp-30h]

  _ReadStatusReg(TPIDR_EL0);
  v2 = (Caver::ProfileSelectionView *)operator new(0x130u);
  Caver::ProfileSelectionView::ProfileSelectionView(v2);
  boost::shared_ptr<Caver::ProfileSelectionView>::shared_ptr<Caver::ProfileSelectionView>();
  v3 = (_QWORD *)*((_QWORD *)this + 12);
  *((_QWORD *)this + 11) = v15;
  *((_QWORD *)this + 12) = v16;
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
  v6 = *((_QWORD *)this + 11);
  if ( *(_DWORD *)(v6 + 112) != 18 )
  {
    v7 = *(float **)(v6 + 88);
    *(_DWORD *)(v6 + 112) = 18;
    if ( v7 )
    {
      if ( v7[35] > 0.001 )
      {
        (*(void (__fastcall **)(float *))(*(_QWORD *)v7 + 88LL))(v7);
        v6 = *((_QWORD *)this + 11);
      }
    }
  }
  *(_QWORD *)(v6 + 248) = (char *)this + 72;
  v8 = (_QWORD *)*((_QWORD *)this + 12);
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
  result = (__int64 (__fastcall ***)(_QWORD, Caver::ProfileSelectionViewController *))*((_QWORD *)this + 8);
  if ( result )
    result = (__int64 (__fastcall ***)(_QWORD, Caver::ProfileSelectionViewController *))(**result)(result, this);
  if ( v8 )
  {
    v13 = v8[1] - 1LL;
    v8[1] = v13;
    if ( !v13 )
    {
      result = (__int64 (__fastcall ***)(_QWORD, Caver::ProfileSelectionViewController *))(*(__int64 (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
      v14 = v8[2] - 1LL;
      v8[2] = v14;
      if ( !v14 )
        return (__int64 (__fastcall ***)(_QWORD, Caver::ProfileSelectionViewController *))(*(__int64 (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
    }
  }
  return result;
}

