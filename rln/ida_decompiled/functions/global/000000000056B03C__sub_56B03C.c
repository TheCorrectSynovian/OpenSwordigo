/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056B03C
 * Mangled: sub_56B03C
 * Demangled: sub_56B03C
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 5
 *   insn=0x000000000056B048 string=0x000000000056B04C "c"
 *   insn=0x000000000056B04C string=0x000000000056B050 "`"
 *   insn=0x000000000056B058 string=0x000000000056B05C "D"
 *   insn=0x000000000056B064 string=0x000000000056B074 "A"
 *   insn=0x000000000056B078 string=0x000000000056B07C "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_56B03C(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // w0
  __int64 v4; // x1

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  return *(_QWORD *)(a3 + 8) == v4 && *(_DWORD *)a3 == v3;
}

