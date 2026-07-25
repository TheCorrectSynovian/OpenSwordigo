/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049F874
 * Mangled: _ZN5Caver7GUIView25InsertSubviewBelowSubviewERKN5boost10shared_ptrIS0_EEPS0_
 * Demangled: Caver::GUIView::InsertSubviewBelowSubview(boost::shared_ptr<Caver::GUIView> const&,Caver::GUIView*)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F55E0  operator new(ulong)
 *   0x000000000052A9AC  sub_52A9AC
 *
 * Referenced strings: 23
 *   insn=0x000000000049F89C string=0x000000000049F8A0 "?"
 *   insn=0x000000000049F8AC string=0x000000000049F8B0 "a"
 *   insn=0x000000000049F8B0 string=0x000000000049F8B4 "&"
 *   insn=0x000000000049F8B8 string=0x000000000049F8BC "@A9h"
 *   insn=0x000000000049F8BC string=0x000000000049F8C0 "h"
 *   insn=0x000000000049F8C8 string=0x000000000049F900 ""
 *   insn=0x000000000049F8CC string=0x000000000049F8D0 "DW"
 *   insn=0x000000000049F8D0 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000049F8D4 string=0x000000000049F8D8 ""
 *   insn=0x000000000049F8DC string=0x000000000049F8E0 ""
 *   insn=0x000000000049F8E4 string=0x000000000049F8E8 "\t"
 *   insn=0x000000000049F8E8 string=0x000000000049F8EC ")"
 *   insn=0x000000000049F8EC string=0x000000000049F8F0 "\t"
 *   insn=0x000000000049F8F4 string=0x000000000049F8F8 "-,"
 *   insn=0x000000000049F8F8 string=0x000000000052A9AC """
 *   insn=0x000000000049F904 string=0x000000000049F908 "A@"
 *   insn=0x000000000049F910 string=0x000000000049F914 "q@"
 *   insn=0x000000000049F918 string=0x000000000049F91C "("
 *   insn=0x000000000049F91C string=0x000000000049F920 "`"
 *   insn=0x000000000049F91C string=0x0000000000583734 "o"
 *   insn=0x000000000049F928 string=0x000000000049F92C ""
 *   insn=0x000000000049F92C string=0x000000000049F930 "h"
 *   insn=0x000000000049F944 string=0x000000000049F948 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIView::InsertSubviewBelowSubview(__int64 result, _QWORD *a2, __int64 a3)
{
  float *v3; // x19
  _QWORD *v4; // x21
  __int64 *v6; // x0
  __int64 v7; // x0
  __int64 v8; // x8
  __int64 v9; // x8

  v3 = (float *)result;
  v4 = *(_QWORD **)(result + 32);
  if ( (_QWORD *)(result + 32) != v4 )
  {
    while ( v4[2] != a3 )
    {
      v4 = (_QWORD *)*v4;
      if ( (_QWORD *)(result + 32) == v4 )
        return result;
    }
    v6 = (__int64 *)*a2;
    if ( *(_BYTE *)(*a2 + 80LL) )
    {
      *((_BYTE *)v6 + 80) = 0;
    }
    else
    {
      v7 = operator new(0x20u);
      *(_QWORD *)(v7 + 16) = *a2;
      v8 = a2[1];
      *(_QWORD *)(v7 + 24) = v8;
      if ( v8 )
        ++*(_QWORD *)(v8 + 8);
      sub_52A9AC(v7, v4);
      v6 = (__int64 *)*a2;
    }
    v9 = *v6;
    v6[11] = (__int64)v3;
    result = (*(__int64 (**)(void))(v9 + 128))();
    if ( *(_DWORD *)(*a2 + 112LL) )
    {
      if ( v3[35] > 0.001 )
        return (*(__int64 (__fastcall **)(float *))(*(_QWORD *)v3 + 88LL))(v3);
    }
  }
  return result;
}

