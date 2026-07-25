/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000562468
 * Mangled: sub_562468
 * Demangled: sub_562468
 *
 * Callers: 3
 *   0x00000000005625D4  sub_5625D4
 *   0x0000000000562BC4  sub_562BC4
 *   0x0000000000562F10  sub_562F10
 *
 * Callees: 2
 *   0x000000000051F798  sub_51F798
 *   0x00000000005652C8  sub_5652C8
 *
 * Referenced strings: 20
 *   insn=0x0000000000562488 string=0x000000000056248C "_"
 *   insn=0x0000000000562490 string=0x0000000000562494 "4"
 *   insn=0x0000000000562498 string=0x000000000056249C "@"
 *   insn=0x00000000005624A0 string=0x00000000005624A4 "@g@"
 *   insn=0x00000000005624A4 string=0x00000000005624A8 "@\t"
 *   insn=0x00000000005624A8 string=0x00000000005625D0 ">"
 *   insn=0x00000000005624AC string=0x00000000005624B0 "!"
 *   insn=0x00000000005624B0 string=0x00000000005624B4 " "
 *   insn=0x00000000005624BC string=0x00000000005624C0 "W"
 *   insn=0x00000000005624CC string=0x00000000005624D0 "Y"
 *   insn=0x00000000005624D4 string=0x00000000005624EC "Eg@"
 *   insn=0x00000000005624E4 string=0x00000000005624E8 "T"
 *   insn=0x0000000000562524 string=0x0000000000562528 "{"
 *   insn=0x000000000056252C string=0x0000000000562530 ","
 *   insn=0x0000000000562534 string=0x0000000000562538 "B"
 *   insn=0x0000000000562540 string=0x0000000000562544 "B4@"
 *   insn=0x0000000000562544 string=0x0000000000562548 "@"
 *   insn=0x0000000000562588 string=0x000000000056258C "`"
 *   insn=0x00000000005625B8 string=0x00000000005625BC "B4@"
 *   insn=0x00000000005625BC string=0x00000000005625C0 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_562468(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  unsigned int v10; // w20
  __int64 v11; // x0
  signed __int64 v12; // x24
  unsigned int v13; // w0
  unsigned int v14; // w19
  __int64 v15; // x27
  __int64 v17; // [xsp+68h] [xbp+68h] BYREF
  char v18[128]; // [xsp+70h] [xbp+70h] BYREF

  v10 = 1;
  if ( *(_QWORD *)(a1 + 32) < *(_QWORD *)(a1 + 40) )
    v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 104LL))(a1, 0xFFFFFFFFLL) != -1;
  if ( *(_BYTE *)(a1 + 170) )
  {
    v11 = *(_QWORD *)(a1 + 200);
    if ( !v11 )
      sub_5652C8(0);
    if ( v10 > (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v11 + 48LL))(v11) )
    {
      v12 = 0;
      while ( 1 )
      {
        v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *, char *, __int64 *))(**(_QWORD **)(a1 + 200) + 24LL))(
                *(_QWORD *)(a1 + 200),
                a1 + 132,
                v18,
                &a9,
                &v17);
        v14 = v13;
        if ( v13 == 2 )
          return 0;
        if ( v13 <= 1 )
        {
          v15 = v17 - (_QWORD)v18;
          if ( v17 - (__int64)v18 <= 0 )
            break;
          v12 = sub_51F798((FILE **)(a1 + 104), v18, v17 - (_QWORD)v18);
          if ( v15 != v12 )
            return 0;
        }
        if ( v12 <= 0 || v14 != 1 )
          break;
        if ( !v10 )
          return 0;
      }
      if ( v10 )
        return (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 104LL))(a1, 0xFFFFFFFFLL) != -1;
    }
  }
  return v10;
}

