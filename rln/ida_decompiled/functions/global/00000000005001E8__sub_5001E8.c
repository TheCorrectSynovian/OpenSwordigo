/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005001E8
 * Mangled: sub_5001E8
 * Demangled: sub_5001E8
 *
 * Callers: 14
 *   0x00000000004F2C18  sub_4F2C18
 *   0x00000000004FDB84  sub_4FDB84
 *   0x00000000004FDBA0  sub_4FDBA0
 *   0x00000000004FDC7C  sub_4FDC7C
 *   0x00000000004FDD3C  sub_4FDD3C
 *   0x00000000004FE488  sub_4FE488
 *   0x00000000004FE674  sub_4FE674
 *   0x00000000004FED28  sub_4FED28
 *   0x00000000004FEF18  sub_4FEF18
 *   0x00000000004FF3C4  sub_4FF3C4
 *   0x00000000004FF794  sub_4FF794
 *   0x00000000005002D4  sub_5002D4
 *   0x0000000000500404  sub_500404
 *   0x00000000005005C8  sub_5005C8
 *
 * Callees: 2
 *   0x00000000004EEC70  sub_4EEC70
 *   0x00000000004FDEDC  sub_4FDEDC
 *
 * Referenced strings: 23
 *   insn=0x00000000005001FC string=0x0000000000500200 "h:@"
 *   insn=0x0000000000500200 string=0x0000000000500204 "b2@"
 *   insn=0x0000000000500204 string=0x0000000000500208 "v"
 *   insn=0x0000000000500218 string=0x000000000050021C "0"
 *   insn=0x000000000050021C string=0x0000000000500220 ""
 *   insn=0x0000000000500220 string=0x0000000000500224 "h:"
 *   insn=0x0000000000500228 string=0x000000000050022C "h2@"
 *   insn=0x000000000050022C string=0x0000000000500230 "I"
 *   insn=0x0000000000500234 string=0x0000000000500238 "j"
 *   insn=0x0000000000500238 string=0x0000000000500244 "`"
 *   insn=0x000000000050023C string=0x0000000000500240 ""
 *   insn=0x000000000050024C string=0x000000000059B096 "code size overflow"
 *   insn=0x0000000000500264 string=0x0000000000500268 "h2@"
 *   insn=0x0000000000500270 string=0x0000000000500274 "h2@"
 *   insn=0x0000000000500274 string=0x0000000000500278 "ILE"
 *   insn=0x000000000050027C string=0x0000000000500280 "j"
 *   insn=0x0000000000500280 string=0x000000000050028C "`"
 *   insn=0x0000000000500284 string=0x0000000000500288 ""
 *   insn=0x00000000005002A4 string=0x00000000005002A8 "r"
 *   insn=0x00000000005002AC string=0x00000000005002B0 "h2@"
 *   insn=0x00000000005002B4 string=0x00000000005002B8 "`2@"
 *   insn=0x00000000005002B8 string=0x00000000005002BC ""
 *   insn=0x00000000005002BC string=0x00000000005002C0 "h2"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5001E8(__int64 a1, int a2, int a3)
{
  __int64 v5; // x22
  int v7; // w8
  __int64 v8; // x0
  int v9; // w8
  __int64 v10; // x0
  __int64 result; // x0

  v5 = *(_QWORD *)a1;
  sub_4FDEDC(a1, *(_DWORD *)(a1 + 56), *(_DWORD *)(a1 + 48), 255, *(_DWORD *)(a1 + 48));
  *(_DWORD *)(a1 + 56) = -1;
  v7 = *(_DWORD *)(a1 + 48);
  if ( v7 >= *(_DWORD *)(v5 + 80) )
  {
    v8 = sub_4EEC70(*(_QWORD *)(a1 + 32), *(_QWORD *)(v5 + 24), (int *)(v5 + 80), 4u, 2147483645, "code size overflow");
    *(_QWORD *)(v5 + 24) = v8;
    v7 = *(_DWORD *)(a1 + 48);
  }
  else
  {
    v8 = *(_QWORD *)(v5 + 24);
  }
  *(_DWORD *)(v8 + 4LL * v7) = a2;
  v9 = *(_DWORD *)(a1 + 48);
  if ( v9 >= *(_DWORD *)(v5 + 84) )
  {
    v10 = sub_4EEC70(*(_QWORD *)(a1 + 32), *(_QWORD *)(v5 + 40), (int *)(v5 + 84), 4u, 2147483645, "code size overflow");
    *(_QWORD *)(v5 + 40) = v10;
    v9 = *(_DWORD *)(a1 + 48);
  }
  else
  {
    v10 = *(_QWORD *)(v5 + 40);
  }
  *(_DWORD *)(v10 + 4LL * v9) = a3;
  result = *(unsigned int *)(a1 + 48);
  *(_DWORD *)(a1 + 48) = result + 1;
  return result;
}

