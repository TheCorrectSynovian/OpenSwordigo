/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053E1F0
 * Mangled: sub_53E1F0
 * Demangled: sub_53E1F0
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x000000000051FEA0  sub_51FEA0
 *   0x0000000000528E58  sub_528E58
 *   0x00000000005652C8  sub_5652C8
 *
 * Referenced strings: 8
 *   insn=0x000000000053E218 string=0x000000000053E21C "`"
 *   insn=0x000000000053E220 string=0x000000000053E224 "b"
 *   insn=0x000000000053E238 string=0x000000000053E23C "a"
 *   insn=0x000000000053E244 string=0x000000000053E248 "b"
 *   insn=0x000000000053E24C string=0x000000000053E250 "A"
 *   insn=0x000000000053E250 string=0x000000000053E254 "B"
 *   insn=0x000000000053E254 string=0x000000000053E258 "@"
 *   insn=0x000000000053E270 string=0x000000000053E274 "S"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_53E1F0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  char *v8; // x0
  _BYTE *v9; // x19
  char v10; // [xsp+0h] [xbp+0h]

  v8 = (char *)a1 + *(_QWORD *)(*a1 - 24LL);
  v9 = (_BYTE *)*((_QWORD *)v8 + 30);
  if ( v9 )
  {
    if ( !v9[56] )
    {
      sub_51FEA0(v9, a2, a3, a4, a5, a6, a7, a8, v10);
      (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v9 + 48LL))(v9, 10);
    }
    JUMPOUT(0x529BC0);
  }
  sub_5652C8(v8);
}

