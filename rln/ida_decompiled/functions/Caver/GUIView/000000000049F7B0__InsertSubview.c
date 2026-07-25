/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049F7B0
 * Mangled: _ZN5Caver7GUIView13InsertSubviewESt14_List_iteratorIN5boost10shared_ptrIS0_EEERKS4_
 * Demangled: Caver::GUIView::InsertSubview(std::_List_iterator<boost::shared_ptr<Caver::GUIView>>,boost::shared_ptr<Caver::GUIView> const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F55E0  operator new(ulong)
 *   0x000000000052A9AC  sub_52A9AC
 *
 * Referenced strings: 20
 *   insn=0x000000000049F7CC string=0x000000000049F7D0 "\tAA9i"
 *   insn=0x000000000049F7D0 string=0x000000000049F7D4 "i"
 *   insn=0x000000000049F7DC string=0x000000000049F814 "\t"
 *   insn=0x000000000049F7E4 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000049F7E8 string=0x000000000049F7EC ""
 *   insn=0x000000000049F7F0 string=0x000000000049F7F4 ""
 *   insn=0x000000000049F7F8 string=0x000000000049F7FC "\t"
 *   insn=0x000000000049F7FC string=0x000000000049F800 ")"
 *   insn=0x000000000049F800 string=0x000000000049F804 "\t"
 *   insn=0x000000000049F808 string=0x000000000049F80C "h,"
 *   insn=0x000000000049F80C string=0x000000000052A9AC """
 *   insn=0x000000000049F81C string=0x000000000049F820 ")A@"
 *   insn=0x000000000049F820 string=0x000000000049F824 " "
 *   insn=0x000000000049F828 string=0x000000000049F82C "q@"
 *   insn=0x000000000049F830 string=0x000000000049F834 "("
 *   insn=0x000000000049F834 string=0x000000000049F838 "`"
 *   insn=0x000000000049F834 string=0x0000000000583734 "o"
 *   insn=0x000000000049F840 string=0x000000000049F844 ""
 *   insn=0x000000000049F844 string=0x000000000049F848 "h"
 *   insn=0x000000000049F85C string=0x000000000049F860 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIView::InsertSubview(float *a1, __int64 a2, __int64 **a3)
{
  __int64 *v4; // x8
  __int64 v7; // x0
  __int64 *v8; // x8
  __int64 v9; // x9
  __int64 result; // x0

  v4 = *a3;
  if ( *((_BYTE *)*a3 + 80) )
  {
    *((_BYTE *)v4 + 80) = 0;
  }
  else
  {
    v7 = operator new(0x20u);
    *(_QWORD *)(v7 + 16) = *a3;
    v8 = a3[1];
    *(_QWORD *)(v7 + 24) = v8;
    if ( v8 )
      ++v8[1];
    sub_52A9AC(v7, a2);
    v4 = *a3;
  }
  v9 = *v4;
  v4[11] = (__int64)a1;
  result = (*(__int64 (__fastcall **)(__int64 *))(v9 + 128))(v4);
  if ( *((_DWORD *)*a3 + 28) )
  {
    if ( a1[35] > 0.001 )
      return (*(__int64 (__fastcall **)(float *))(*(_QWORD *)a1 + 88LL))(a1);
  }
  return result;
}

