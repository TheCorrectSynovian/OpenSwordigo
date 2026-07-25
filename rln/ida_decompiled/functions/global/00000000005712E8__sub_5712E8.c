/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005712E8
 * Mangled: sub_5712E8
 * Demangled: sub_5712E8
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 10
 *   insn=0x00000000005712F4 string=0x00000000005712F8 "@xa"
 *   insn=0x00000000005712F4 string=0x0000000000571304 "c"
 *   insn=0x000000000057130C string=0x0000000000571310 "_"
 *   insn=0x0000000000571314 string=0x0000000000571318 "bHb8d"
 *   insn=0x0000000000571318 string=0x000000000057131C "d"
 *   insn=0x0000000000571320 string=0x0000000000571324 "@"
 *   insn=0x000000000057133C string=0x0000000000571340 """
 *   insn=0x0000000000571360 string=0x0000000000571364 "D"
 *   insn=0x0000000000571368 string=0x000000000057136C "i"
 *   insn=0x000000000057136C string=0x0000000000571378 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5712E8(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // x2
  __int64 result; // x0
  unsigned __int64 *v4; // x2
  unsigned int v5; // [xsp+1Ch] [xbp+1Ch] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  if ( v2 )
    return *(unsigned int *)(v2 + 4 * a2);
  while ( 2 )
  {
    switch ( *(_BYTE *)(a1 + 56) )
    {
      case 0:
        result = *(unsigned int *)(*(_QWORD *)(a1 + 112) + 4 * a2);
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
        (*(void (__fastcall **)(_QWORD, unsigned __int64, __int64, unsigned int *))(**(_QWORD **)(a1 + 112) + 16LL))(
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

