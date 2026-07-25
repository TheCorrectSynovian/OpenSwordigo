/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049F95C
 * Mangled: _ZN5Caver7GUIView20InsertSubviewAtIndexEiRKN5boost10shared_ptrIS0_EE
 * Demangled: Caver::GUIView::InsertSubviewAtIndex(int,boost::shared_ptr<Caver::GUIView> const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F55E0  operator new(ulong)
 *   0x000000000052A9AC  sub_52A9AC
 *
 * Referenced strings: 22
 *   insn=0x000000000049F980 string=0x000000000049F984 ")"
 *   insn=0x000000000049F980 string=0x000000000049F99C "h"
 *   insn=0x000000000049F984 string=0x000000000049F988 ")"
 *   insn=0x000000000049F9B4 string=0x000000000049F9B8 "@"
 *   insn=0x000000000049F9BC string=0x000000000049F9C0 "@A9h"
 *   insn=0x000000000049F9C0 string=0x000000000049F9C4 "h"
 *   insn=0x000000000049F9CC string=0x000000000049FA04 ""
 *   insn=0x000000000049F9D4 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000049F9D8 string=0x000000000049F9DC ""
 *   insn=0x000000000049F9E0 string=0x000000000049F9E4 ""
 *   insn=0x000000000049F9E8 string=0x000000000049F9EC "\t"
 *   insn=0x000000000049F9EC string=0x000000000049F9F0 ")"
 *   insn=0x000000000049F9F0 string=0x000000000049F9F4 "\t"
 *   insn=0x000000000049F9FC string=0x000000000052A9AC """
 *   insn=0x000000000049FA08 string=0x000000000049FA0C "A@"
 *   insn=0x000000000049FA14 string=0x000000000049FA18 "q@"
 *   insn=0x000000000049FA1C string=0x000000000049FA20 "("
 *   insn=0x000000000049FA20 string=0x000000000049FA24 "`"
 *   insn=0x000000000049FA20 string=0x0000000000583734 "o"
 *   insn=0x000000000049FA2C string=0x000000000049FA30 ""
 *   insn=0x000000000049FA30 string=0x000000000049FA34 "h"
 *   insn=0x000000000049FA48 string=0x000000000049FA4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIView::InsertSubviewAtIndex(float *a1, int a2, _QWORD *a3)
{
  float *v4; // x21
  int v6; // w9
  __int64 result; // x0
  __int64 *v8; // x0
  __int64 v9; // x0
  __int64 v10; // x8
  __int64 v11; // x8

  v4 = (float *)*((_QWORD *)a1 + 4);
  if ( a1 + 8 == v4 )
    return (*(__int64 (__fastcall **)(float *, _QWORD *))(*(_QWORD *)a1 + 96LL))(a1, a3);
  v6 = a2 + 1;
  while ( --v6 )
  {
    v4 = *(float **)v4;
    if ( a1 + 8 == v4 )
      return (*(__int64 (__fastcall **)(float *, _QWORD *))(*(_QWORD *)a1 + 96LL))(a1, a3);
  }
  v8 = (__int64 *)*a3;
  if ( *(_BYTE *)(*a3 + 80LL) )
  {
    *((_BYTE *)v8 + 80) = 0;
  }
  else
  {
    v9 = operator new(0x20u);
    *(_QWORD *)(v9 + 16) = *a3;
    v10 = a3[1];
    *(_QWORD *)(v9 + 24) = v10;
    if ( v10 )
      ++*(_QWORD *)(v10 + 8);
    sub_52A9AC(v9, v4);
    v8 = (__int64 *)*a3;
  }
  v11 = *v8;
  v8[11] = (__int64)a1;
  result = (*(__int64 (**)(void))(v11 + 128))();
  if ( *(_DWORD *)(*a3 + 112LL) )
  {
    if ( a1[35] > 0.001 )
      return (*(__int64 (__fastcall **)(float *))(*(_QWORD *)a1 + 88LL))(a1);
  }
  return result;
}

