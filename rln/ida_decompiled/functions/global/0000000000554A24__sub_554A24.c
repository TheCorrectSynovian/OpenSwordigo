/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000554A24
 * Mangled: sub_554A24
 * Demangled: sub_554A24
 *
 * Callers: 9
 *   0x0000000000554914  sub_554914
 *   0x0000000000558854  sub_558854
 *   0x0000000000559B48  sub_559B48
 *   0x000000000055A478  sub_55A478
 *   0x000000000055A870  sub_55A870
 *   0x000000000055B1A0  sub_55B1A0
 *   0x000000000055BABC  sub_55BABC
 *   0x000000000055C444  sub_55C444
 *   0x000000000055CDD8  sub_55CDD8
 *
 * Callees: 9
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000053C340  sub_53C340
 *   0x000000000053C4D0  sub_53C4D0
 *   0x000000000054FE98  sub_54FE98
 *   0x0000000000554B08  sub_554B08
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 10
 *   insn=0x0000000000554A24 string=0x0000000000554A28 "@"
 *   insn=0x0000000000554A6C string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000554A74 string=0x0000000000554A78 "B"
 *   insn=0x0000000000554ABC string=0x0000000000554AC0 " "
 *   insn=0x0000000000554AD8 string=0x0000000000554ADC "%"
 *   insn=0x0000000000554AD8 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000554AE8 string=0x0000000000554AEC "!"
 *   insn=0x0000000000554AEC string=0x0000000000554AF0 " "
 *   insn=0x0000000000554AFC string=0x00000000001FD590 "0'"
 *   insn=0x0000000000554B00 string=0x0000000000554B04 "p"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_554A24(__int64 a1, __int64 *a2)
{
  __int64 v3; // x19
  __int64 v4; // x21
  __int64 result; // x0
  __int64 v6; // x0
  _DWORD *v7; // x22

  v3 = sub_53C4D0(&qword_6FD2A8);
  v4 = *(_QWORD *)(*a2 + 24);
  result = *(_QWORD *)(v4 + 8 * v3);
  if ( !result )
  {
    v6 = operator new(0x150u);
    *(_DWORD *)(v6 + 8) = 0;
    *(_QWORD *)v6 = off_6B7C80;
    v7 = (_DWORD *)v6;
    *(_QWORD *)(v6 + 16) = 0;
    *(_QWORD *)(v6 + 24) = 0;
    *(_BYTE *)(v6 + 32) = 0;
    *(_QWORD *)(v6 + 40) = 0;
    *(_QWORD *)(v6 + 48) = 0;
    *(_QWORD *)(v6 + 56) = 0;
    *(_QWORD *)(v6 + 64) = 0;
    *(_DWORD *)(v6 + 72) = 0;
    *(_DWORD *)(v6 + 76) = 0;
    *(_BYTE *)(v6 + 328) = 0;
    sub_54FE98(v6, (__int64)a2);
    sub_53C340(*a2, v7, v3);
    return *(_QWORD *)(v4 + 8 * v3);
  }
  return result;
}

