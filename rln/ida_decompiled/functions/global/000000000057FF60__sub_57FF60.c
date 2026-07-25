/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000057FF60
 * Mangled: sub_57FF60
 * Demangled: sub_57FF60
 *
 * Callers: 4
 *   0x0000000000581658  sub_581658
 *   0x00000000005817D0  sub_5817D0
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000005819C0  sub_5819C0
 *
 * Callees: 4
 *   0x00000000001FE620  .abort
 *   0x0000000000201760  .memcpy
 *   0x000000000057FECC  sub_57FECC
 *   0x000000000057FF08  sub_57FF08
 *
 * Referenced strings: 19
 *   insn=0x000000000057FF6C string=0x000000000057FF70 " "
 *   insn=0x000000000057FF78 string=0x000000000057FF7C "`"
 *   insn=0x000000000057FF7C string=0x000000000057FF80 " "
 *   insn=0x000000000057FF7C string=0x000000000057FF88 "`~@"
 *   insn=0x000000000057FF8C string=0x000000000057FF90 "a"
 *   insn=0x000000000057FFAC string=0x000000000057FFB0 "azt"
 *   insn=0x000000000057FFB0 string=0x000000000057FFB4 "B`M9B"
 *   insn=0x000000000057FFB4 string=0x000000000057FFB8 "B"
 *   insn=0x000000000057FFB8 string=0x000000000057FFC0 "c"
 *   insn=0x000000000057FFC8 string=0x000000000057FFCC "c`M9"
 *   insn=0x000000000057FFD0 string=0x000000000057FFF0 "?"
 *   insn=0x000000000057FFDC string=0x000000000057FFE0 "_ "
 *   insn=0x000000000057FFE8 string=0x000000000057FFEC "\n"
 *   insn=0x000000000057FFF4 string=0x000000000057FFF8 "_"
 *   insn=0x000000000057FFFC string=0x0000000000580000 "?"
 *   insn=0x0000000000580008 string=0x000000000058000C "Bht8"
 *   insn=0x0000000000580018 string=0x000000000058001C "a"
 *   insn=0x000000000058002C string=0x0000000000580030 "a"
 *   insn=0x000000000058004C string=0x0000000000580050 "u"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_57FF60(__int64 a1, __int64 a2)
{
  __int64 i; // x20
  _QWORD *v5; // x0
  _QWORD *v6; // x1
  __int64 result; // x0
  __int64 v8; // [xsp+38h] [xbp+38h] BYREF

  if ( ((*(_QWORD *)(a2 + 832) & 0x4000000000000000LL) == 0 || !*(_BYTE *)(a2 + 887)) && !*(_QWORD *)(a2 + 248) )
    sub_57FECC(a2, *(_QWORD *)(a2 + 784), &v8);
  for ( i = 0; i != 97; ++i )
  {
    v5 = *(_QWORD **)(a1 + 8 * i);
    v6 = *(_QWORD **)(a2 + 8 * i);
    if ( *(_BYTE *)(a1 + i + 856) )
LABEL_7:
      abort();
    if ( *(_BYTE *)(a2 + i + 856) && v5 )
    {
      if ( byte_6FE360[i] != 8 )
        goto LABEL_7;
      *v5 = v6;
    }
    else if ( v5 != 0 && v6 != 0 && v6 != v5 )
    {
      memcpy(v5, v6, (unsigned __int8)byte_6FE360[i]);
    }
  }
  if ( (*(_QWORD *)(a1 + 832) & 0x4000000000000000LL) == 0 || (result = 0, !*(_BYTE *)(a1 + 887)) )
  {
    result = 0;
    if ( !*(_QWORD *)(a1 + 248) )
      return sub_57FF08(a2, 31) - *(_QWORD *)(a1 + 784) + *(_QWORD *)(a2 + 848);
  }
  return result;
}

