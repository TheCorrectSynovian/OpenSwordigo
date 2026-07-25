/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EEC70
 * Mangled: sub_4EEC70
 * Demangled: sub_4EEC70
 *
 * Callers: 5
 *   0x00000000004F17E0  sub_4F17E0
 *   0x00000000004F21A8  sub_4F21A8
 *   0x00000000004F2614  sub_4F2614
 *   0x00000000004FE158  sub_4FE158
 *   0x00000000005001E8  sub_5001E8
 *
 * Callees: 2
 *   0x00000000004EB320  sub_4EB320
 *   0x00000000004EB814  sub_4EB814
 *
 * Referenced strings: 14
 *   insn=0x00000000004EEC88 string=0x00000000004EEC8C "h"
 *   insn=0x00000000004EECAC string=0x00000000004EECB0 "y"
 *   insn=0x00000000004EECDC string=0x00000000004EECE0 ")\t"
 *   insn=0x00000000004EECE0 string=0x00000000004EECE4 "?"
 *   insn=0x00000000004EECE8 string=0x00000000004EECEC "A"
 *   insn=0x00000000004EECEC string=0x0000000000599B4C "memory allocation error: block too big"
 *   insn=0x00000000004EED00 string=0x00000000004EED54 "t"
 *   insn=0x00000000004EED04 string=0x00000000004EED08 "h"
 *   insn=0x00000000004EED0C string=0x00000000004EED10 "I"
 *   insn=0x00000000004EED24 string=0x00000000004EED28 " "
 *   insn=0x00000000004EED30 string=0x00000000004EED44 "H?@"
 *   insn=0x00000000004EED44 string=0x00000000004EED48 ")"
 *   insn=0x00000000004EED48 string=0x00000000004EED4C "("
 *   insn=0x00000000004EED4C string=0x00000000004EED50 "H?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4EEC70(__int64 a1, __int64 a2, int *a3, unsigned __int64 a4, int a5, const char *a6)
{
  int v7; // w8
  int v8; // w20
  int v9; // w9
  int v11; // w8
  __int64 v12; // x26
  __int64 v13; // x24
  __int64 v14; // x25
  __int64 result; // x0

  v7 = *a3;
  v8 = a5;
  if ( a5 >= 0 )
    v9 = a5;
  else
    v9 = a5 + 1;
  if ( v7 >= v9 >> 1 )
  {
    if ( v7 >= a5 )
      sub_4EB320(a1, a6);
  }
  else
  {
    v11 = 2 * v7;
    if ( v11 <= 4 )
      v8 = 4;
    else
      v8 = v11;
  }
  if ( 0xFFFFFFFFFFFFFFFDLL / a4 < v8 + 1 )
    sub_4EB320(a1, "memory allocation error: block too big");
  v12 = *(_QWORD *)(a1 + 32);
  v13 = *a3 * a4;
  v14 = v8 * a4;
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(v12 + 16))(
             *(_QWORD *)(v12 + 24),
             a2,
             v13,
             v14);
  if ( v14 && !result )
    sub_4EB814(a1, 4);
  *(_QWORD *)(v12 + 120) += v14 - v13;
  *a3 = v8;
  return result;
}

