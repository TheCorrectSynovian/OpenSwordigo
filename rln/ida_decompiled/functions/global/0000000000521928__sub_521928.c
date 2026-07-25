/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000521928
 * Mangled: sub_521928
 * Demangled: sub_521928
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000005652C8  sub_5652C8
 *
 * Referenced strings: 4
 *   insn=0x0000000000521928 string=0x000000000052192C "B"
 *   insn=0x0000000000521938 string=0x0000000000521950 "^"
 *   insn=0x000000000052193C string=0x0000000000521940 "c0@"
 *   insn=0x0000000000521940 string=0x0000000000521944 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_521928(__int64 a1)
{
  __int64 v1; // x0

  v1 = *(_QWORD *)(a1 + 240);
  if ( !v1 )
    sub_5652C8(0);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 96LL))(v1);
}

