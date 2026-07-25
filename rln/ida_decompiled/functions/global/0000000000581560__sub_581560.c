/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000581560
 * Mangled: sub_581560
 * Demangled: sub_581560
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FBC40  .memset
 *   0x00000000005806A8  sub_5806A8
 *
 * Referenced strings: 17
 *   insn=0x0000000000581590 string=0x00000000001FBC40 "0'"
 *   insn=0x00000000005815A8 string=0x00000000005815AC "?"
 *   insn=0x00000000005815B0 string=0x00000000005815B4 "@"
 *   insn=0x00000000005815C4 string=0x00000000005815C8 "b"
 *   insn=0x00000000005815C8 string=0x00000000005815CC "a"
 *   insn=0x00000000005815D4 string=0x00000000005815D8 "C"
 *   insn=0x00000000005815DC string=0x00000000005815E0 "`"
 *   insn=0x00000000005815E8 string=0x00000000005815F8 "?"
 *   insn=0x00000000005815EC string=0x00000000005815F0 "#"
 *   insn=0x00000000005815FC string=0x0000000000581600 "B"
 *   insn=0x0000000000581604 string=0x0000000000581608 "! "
 *   insn=0x0000000000581608 string=0x000000000058160C "A"
 *   insn=0x0000000000581614 string=0x0000000000581618 "`\n"
 *   insn=0x000000000058161C string=0x0000000000581620 "`b"
 *   insn=0x0000000000581624 string=0x0000000000581628 "`f"
 *   insn=0x000000000058162C string=0x0000000000581630 "`"
 *   insn=0x0000000000581634 string=0x0000000000581638 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_581560(__int64 a1, __int64 a2)
{
  int v4; // w0
  __int64 v5; // x1
  __int64 *v6; // x0
  _BYTE *v7; // x2
  _QWORD *v8; // x1
  int v9; // w3
  _QWORD v11[120]; // [xsp+30h] [xbp+30h] BYREF
  char v12[8]; // [xsp+3F0h] [xbp+3F0h] BYREF
  __int64 v13; // [xsp+3F8h] [xbp+3F8h] BYREF
  __int64 v14; // [xsp+A18h] [xbp+A18h] BYREF
  __int64 v15; // [xsp+A20h] [xbp+A20h]
  int v16; // [xsp+A30h] [xbp+A30h]
  __int64 v17; // [xsp+A58h] [xbp+A58h]
  __int64 v18; // [xsp+A68h] [xbp+A68h]

  memset(v11, 0, sizeof(v11));
  v11[99] = a1 + 1;
  v11[104] = 0x4000000000000000LL;
  v4 = sub_5806A8(v11, v12);
  v5 = 0;
  if ( !v4 && v16 != 2 )
  {
    v6 = &v13;
    v7 = (_BYTE *)(a2 + 820);
    v8 = (_QWORD *)(a2 + 32);
    do
    {
      v9 = *(unsigned __int8 *)v6;
      *v7 = v9;
      if ( v9 == 1 || v9 == 2 )
        *v8 = *(v6 - 1);
      else
        *v8 = 0;
      v6 += 2;
      ++v7;
      ++v8;
    }
    while ( v6 != &v14 );
    v5 = a2;
    *(_QWORD *)(a2 + 16) = v14;
    *(_WORD *)(a2 + 816) = v15;
    *(_WORD *)(a2 + 818) = v17;
    *(_QWORD *)(a2 + 24) = v11[106];
    *(_QWORD *)(a2 + 8) = v18;
  }
  return v5;
}

