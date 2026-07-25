/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056ECAC
 * Mangled: sub_56ECAC
 * Demangled: sub_56ECAC
 *
 * Callers: 4
 *   0x000000000056ED64  sub_56ED64
 *   0x000000000056EDF4  sub_56EDF4
 *   0x000000000056EEE4  sub_56EEE4
 *   0x000000000056EFD4  sub_56EFD4
 *
 * Callees: 2
 *   0x0000000000203AC0  .wmemcpy
 *   0x000000000056C5B8  sub_56C5B8
 *
 * Referenced strings: 13
 *   insn=0x000000000056ECC4 string=0x000000000056ECC8 "@"
 *   insn=0x000000000056ECCC string=0x000000000056ECD0 "a"
 *   insn=0x000000000056ECD0 string=0x000000000056ECD4 "9"
 *   insn=0x000000000056ECD8 string=0x000000000056ECDC "b"
 *   insn=0x000000000056ECE0 string=0x000000000056ECE4 """
 *   insn=0x000000000056ECE4 string=0x000000000056ECE8 "_"
 *   insn=0x000000000056ECE4 string=0x000000000056ED08 "s"
 *   insn=0x000000000056ECF0 string=0x000000000056ED28 "a"
 *   insn=0x000000000056ECF4 string=0x000000000056ECF8 "ab"
 *   insn=0x000000000056ECF8 string=0x000000000056ECFC "qS"
 *   insn=0x000000000056ECFC string=0x000000000056ED00 "b"
 *   insn=0x000000000056ED28 string=0x000000000056ED2C "s"
 *   insn=0x000000000056ED50 string=0x000000000056ED54 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_56ECAC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // x20
  size_t v5; // x2
  __int64 result; // x0

  v4 = sub_56C5B8(a3 + *(_QWORD *)a1, *(_QWORD *)(a1 + 8));
  v5 = *(_QWORD *)a1;
  result = v4 + 24;
  if ( !*(_QWORD *)a1 )
  {
LABEL_4:
    if ( (__int64 *)v4 == &qword_6FD300 )
      return result;
LABEL_7:
    *(_DWORD *)(v4 + 16) = 0;
    *(_QWORD *)v4 = v5;
    *(_DWORD *)(v4 + 4 * v5 + 24) = 0;
    return result;
  }
  if ( v5 != 1 )
  {
    wmemcpy((wchar_t *)(v4 + 24), (const wchar_t *)(a1 + 24), v5);
    v5 = *(_QWORD *)a1;
    result = v4 + 24;
    goto LABEL_4;
  }
  *(_DWORD *)(v4 + 24) = *(_DWORD *)(a1 + 24);
  result = v4 + 24;
  if ( (__int64 *)v4 != &qword_6FD300 )
    goto LABEL_7;
  return result;
}

