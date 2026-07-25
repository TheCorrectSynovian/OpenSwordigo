/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054B3BC
 * Mangled: sub_54B3BC
 * Demangled: sub_54B3BC
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 5
 *   insn=0x000000000054B3D4 string=0x000000000054B3D8 "@"
 *   insn=0x000000000054B3D8 string=0x000000000054B3DC " "
 *   insn=0x000000000054B3DC string=0x000000000054B3E0 "@"
 *   insn=0x000000000054B3F0 string=0x000000000054B3F4 "B,@"
 *   insn=0x000000000054B3F4 string=0x000000000054B3F8 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54B3BC(_QWORD *a1)
{
  unsigned __int64 v1; // x2

  v1 = a1[2];
  if ( a1[1] >= v1 )
    return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 88LL))(a1, 0xFFFFFFFFLL);
  a1[2] = v1 - 1;
  return *(unsigned __int8 *)(v1 - 1);
}

