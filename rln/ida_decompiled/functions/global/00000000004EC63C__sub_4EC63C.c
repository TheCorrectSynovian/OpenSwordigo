/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EC63C
 * Mangled: sub_4EC63C
 * Demangled: sub_4EC63C
 *
 * Callers: 11
 *   0x00000000004E98A8  lua_call(lua_State *,int,int)
 *   0x00000000004E9A78  sub_4E9A78
 *   0x00000000004E9AEC  sub_4E9AEC
 *   0x00000000004EB6DC  sub_4EB6DC
 *   0x00000000004ED9A0  sub_4ED9A0
 *   0x00000000004F6020  sub_4F6020
 *   0x00000000004F61E8  sub_4F61E8
 *   0x00000000004F63FC  sub_4F63FC
 *   0x00000000004F6604  sub_4F6604
 *   0x00000000004F67EC  sub_4F67EC
 *   0x00000000004F6B64  sub_4F6B64
 *
 * Callees: 5
 *   0x00000000004EB320  sub_4EB320
 *   0x00000000004EB814  sub_4EB814
 *   0x00000000004EBCF4  sub_4EBCF4
 *   0x00000000004EDCB0  sub_4EDCB0
 *   0x00000000004F6B64  sub_4F6B64
 *
 * Referenced strings: 20
 *   insn=0x00000000004EC64C string=0x00000000004EC650 "h"
 *   insn=0x00000000004EC658 string=0x00000000004EC65C ""
 *   insn=0x00000000004EC65C string=0x00000000004EC660 "\t="
 *   insn=0x00000000004EC660 string=0x00000000004EC664 "?!"
 *   insn=0x00000000004EC664 string=0x00000000004EC668 "h"
 *   insn=0x00000000004EC668 string=0x00000000004EC66C "C"
 *   insn=0x00000000004EC670 string=0x00000000004EC674 "a"
 *   insn=0x00000000004EC670 string=0x00000000004EC688 "="
 *   insn=0x00000000004EC674 string=0x0000000000599A66 "C stack overflow"
 *   insn=0x00000000004EC67C string=0x00000000004EC680 "("
 *   insn=0x00000000004EC68C string=0x00000000004EC690 """
 *   insn=0x00000000004EC6A4 string=0x00000000004EC6B4 "h"
 *   insn=0x00000000004EC6AC string=0x00000000004EC6B0 "-)"
 *   insn=0x00000000004EC6B4 string=0x00000000004EC6B8 "i"
 *   insn=0x00000000004EC6B8 string=0x00000000004EC6BC ""
 *   insn=0x00000000004EC6BC string=0x00000000004EC6C0 "h"
 *   insn=0x00000000004EC6C0 string=0x00000000004EC6C4 "(%G"
 *   insn=0x00000000004EC6C4 string=0x00000000004EC6C8 "?"
 *   insn=0x00000000004EC6EC string=0x00000000004EC6F0 "p"
 *   insn=0x00000000004EC6F8 string=0x00000000004EC6FC "F"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4EC63C(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int16 v4; // w8
  __int64 result; // x0
  __int64 v6; // x9

  v4 = *(_WORD *)(a1 + 96) + 1;
  *(_WORD *)(a1 + 96) = v4;
  if ( v4 >= 0xC8u )
  {
    if ( v4 == 200 )
      sub_4EB320(a1, "C stack overflow");
    if ( v4 >= 0xE1u )
      sub_4EB814(a1, 5);
  }
  result = sub_4EBCF4(a1, a2, a3);
  if ( !(_DWORD)result )
    result = sub_4F6B64(a1, 1);
  v6 = *(_QWORD *)(a1 + 32);
  --*(_WORD *)(a1 + 96);
  if ( *(_QWORD *)(v6 + 120) >= *(_QWORD *)(v6 + 112) )
    return sub_4EDCB0(a1);
  return result;
}

