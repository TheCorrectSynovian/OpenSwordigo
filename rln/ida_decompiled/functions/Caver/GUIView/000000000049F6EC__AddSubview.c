/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049F6EC
 * Mangled: _ZN5Caver7GUIView10AddSubviewERKN5boost10shared_ptrIS0_EE
 * Demangled: Caver::GUIView::AddSubview(boost::shared_ptr<Caver::GUIView> const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F55E0  operator new(ulong)
 *   0x000000000052A9AC  sub_52A9AC
 *
 * Referenced strings: 20
 *   insn=0x000000000049F704 string=0x000000000049F708 "\tAA9i"
 *   insn=0x000000000049F708 string=0x000000000049F70C "i"
 *   insn=0x000000000049F714 string=0x000000000049F750 "\t"
 *   insn=0x000000000049F718 string=0x000000000049F71C "u"
 *   insn=0x000000000049F720 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000049F724 string=0x000000000049F728 ""
 *   insn=0x000000000049F72C string=0x000000000049F730 ""
 *   insn=0x000000000049F734 string=0x000000000049F738 "\t"
 *   insn=0x000000000049F738 string=0x000000000049F73C ")"
 *   insn=0x000000000049F73C string=0x000000000049F740 "\t"
 *   insn=0x000000000049F748 string=0x000000000052A9AC """
 *   insn=0x000000000049F758 string=0x000000000049F75C ")A@"
 *   insn=0x000000000049F75C string=0x000000000049F760 " "
 *   insn=0x000000000049F764 string=0x000000000049F768 "q@"
 *   insn=0x000000000049F76C string=0x000000000049F770 "("
 *   insn=0x000000000049F770 string=0x000000000049F774 "`"
 *   insn=0x000000000049F770 string=0x0000000000583734 "o"
 *   insn=0x000000000049F77C string=0x000000000049F780 ""
 *   insn=0x000000000049F780 string=0x000000000049F784 "h"
 *   insn=0x000000000049F798 string=0x000000000049F79C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIView::AddSubview(float *a1, __int64 **a2)
{
  __int64 *v3; // x8
  __int64 v5; // x0
  __int64 *v6; // x8
  __int64 v7; // x9
  __int64 result; // x0

  v3 = *a2;
  if ( *((_BYTE *)*a2 + 80) )
  {
    *((_BYTE *)v3 + 80) = 0;
  }
  else
  {
    v5 = operator new(0x20u);
    *(_QWORD *)(v5 + 16) = *a2;
    v6 = a2[1];
    *(_QWORD *)(v5 + 24) = v6;
    if ( v6 )
      ++v6[1];
    sub_52A9AC(v5, a1 + 8);
    v3 = *a2;
  }
  v7 = *v3;
  v3[11] = (__int64)a1;
  result = (*(__int64 (__fastcall **)(__int64 *))(v7 + 128))(v3);
  if ( *((_DWORD *)*a2 + 28) )
  {
    if ( a1[35] > 0.001 )
      return (*(__int64 (__fastcall **)(float *))(*(_QWORD *)a1 + 88LL))(a1);
  }
  return result;
}

