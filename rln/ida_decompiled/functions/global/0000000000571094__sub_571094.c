/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000571094
 * Mangled: sub_571094
 * Demangled: sub_571094
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 10
 *   insn=0x00000000005710A0 string=0x00000000005710A4 "@ha8"
 *   insn=0x00000000005710A0 string=0x00000000005710B0 "c"
 *   insn=0x00000000005710B8 string=0x00000000005710BC "_"
 *   insn=0x00000000005710C0 string=0x00000000005710C4 "bHb8d"
 *   insn=0x00000000005710C4 string=0x00000000005710C8 "d"
 *   insn=0x00000000005710CC string=0x00000000005710D0 "@"
 *   insn=0x00000000005710E8 string=0x00000000005710EC """
 *   insn=0x000000000057110C string=0x0000000000571110 "D"
 *   insn=0x0000000000571114 string=0x0000000000571118 "i"
 *   insn=0x0000000000571118 string=0x0000000000571124 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_571094(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // x2
  __int64 result; // x0
  unsigned __int64 *v4; // x2
  unsigned __int8 v5; // [xsp+1Fh] [xbp+1Fh] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  if ( v2 )
    return *(unsigned __int8 *)(v2 + a2);
  while ( 2 )
  {
    switch ( *(_BYTE *)(a1 + 56) )
    {
      case 0:
        result = *(unsigned __int8 *)(*(_QWORD *)(a1 + 112) + a2);
        break;
      case 1:
        v4 = *(unsigned __int64 **)(a1 + 112);
        if ( *v4 <= a2 )
        {
          a2 -= *v4;
          a1 = *(_QWORD *)(a1 + 120);
        }
        else
        {
          a1 = *(_QWORD *)(a1 + 112);
        }
        continue;
      case 2:
      case 3:
        (*(void (__fastcall **)(_QWORD, unsigned __int64, __int64, unsigned __int8 *))(**(_QWORD **)(a1 + 112) + 16LL))(
          *(_QWORD *)(a1 + 112),
          a2,
          1,
          &v5);
        result = v5;
        break;
      default:
        continue;
    }
    return result;
  }
}

