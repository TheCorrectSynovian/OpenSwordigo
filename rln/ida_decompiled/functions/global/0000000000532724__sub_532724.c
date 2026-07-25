/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000532724
 * Mangled: sub_532724
 * Demangled: sub_532724
 *
 * Callers: 9
 *   0x0000000000532614  sub_532614
 *   0x0000000000536618  sub_536618
 *   0x000000000053797C  sub_53797C
 *   0x000000000053832C  sub_53832C
 *   0x0000000000538714  sub_538714
 *   0x00000000005390F0  sub_5390F0
 *   0x0000000000539A80  sub_539A80
 *   0x000000000053A47C  sub_53A47C
 *   0x000000000053AE2C  sub_53AE2C
 *
 * Callees: 9
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000052DBF0  sub_52DBF0
 *   0x0000000000532808  sub_532808
 *   0x000000000053C340  sub_53C340
 *   0x000000000053C4D0  sub_53C4D0
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 11
 *   insn=0x0000000000532724 string=0x0000000000532728 "@"
 *   insn=0x000000000053273C string=0x0000000000532740 "d'"
 *   insn=0x000000000053276C string=0x0000000000532770 """
 *   insn=0x000000000053276C string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000532774 string=0x0000000000532778 "B"
 *   insn=0x00000000005327D8 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000005327E8 string=0x00000000005327EC "!"
 *   insn=0x00000000005327EC string=0x00000000005327F0 " "
 *   insn=0x00000000005327F8 string=0x00000000005327FC "e+"
 *   insn=0x00000000005327FC string=0x00000000001FD590 "0'"
 *   insn=0x0000000000532800 string=0x0000000000532804 "0<"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_532724(__int64 a1, _QWORD *a2)
{
  __int64 v3; // x19
  __int64 v4; // x21
  __int64 result; // x0
  __int64 v6; // x0
  __int64 v7; // x22

  v3 = sub_53C4D0(&qword_6FBDD0);
  v4 = *(_QWORD *)(*a2 + 24LL);
  result = *(_QWORD *)(v4 + 8 * v3);
  if ( !result )
  {
    v6 = operator new(0x90u);
    *(_DWORD *)(v6 + 8) = 0;
    *(_QWORD *)v6 = off_6B70C0;
    v7 = v6;
    *(_QWORD *)(v6 + 16) = 0;
    *(_QWORD *)(v6 + 24) = 0;
    *(_BYTE *)(v6 + 32) = 0;
    *(_QWORD *)(v6 + 40) = 0;
    *(_QWORD *)(v6 + 48) = 0;
    *(_QWORD *)(v6 + 56) = 0;
    *(_QWORD *)(v6 + 64) = 0;
    *(_BYTE *)(v6 + 72) = 0;
    *(_BYTE *)(v6 + 73) = 0;
    *(_BYTE *)(v6 + 136) = 0;
    sub_52DBF0(v6, (__int64)a2);
    sub_53C340(*a2, v7, v3);
    return *(_QWORD *)(v4 + 8 * v3);
  }
  return result;
}

