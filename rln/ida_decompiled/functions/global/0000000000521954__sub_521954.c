/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000521954
 * Mangled: sub_521954
 * Demangled: sub_521954
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000005652C8  sub_5652C8
 *
 * Referenced strings: 4
 *   insn=0x0000000000521954 string=0x0000000000521958 "!"
 *   insn=0x0000000000521964 string=0x000000000052197C "S"
 *   insn=0x0000000000521968 string=0x000000000052196C "B(@"
 *   insn=0x000000000052196C string=0x0000000000521970 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_521954(__int64 a1)
{
  __int64 v1; // x0

  v1 = *(_QWORD *)(a1 + 240);
  if ( !v1 )
    sub_5652C8(0);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 80LL))(v1);
}

