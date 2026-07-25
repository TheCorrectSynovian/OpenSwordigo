/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052B4BC
 * Mangled: sub_52B4BC
 * Demangled: sub_52B4BC
 *
 * Callers: 2
 *   0x0000000000530D30  sub_530D30
 *   0x0000000000533538  sub_533538
 *
 * Callees: 1
 *   0x000000000051FEA0  sub_51FEA0
 *
 * Referenced strings: 5
 *   insn=0x000000000052B4C8 string=0x000000000052B4CC "4"
 *   insn=0x000000000052B4CC string=0x000000000052B4D0 "t"
 *   insn=0x000000000052B4D8 string=0x000000000052B4DC "b"
 *   insn=0x000000000052B4DC string=0x000000000052B4E0 "B"
 *   insn=0x000000000052B4E0 string=0x000000000052B4E4 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52B4BC(
        _BYTE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v9; // w20
  char vars0; // [xsp+0h] [xbp+0h]

  v9 = (unsigned __int8)a2;
  sub_51FEA0(a1, a2, a3, a4, a5, a6, a7, a8, vars0);
  return (*(__int64 (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)a1 + 48LL))(a1, v9);
}

