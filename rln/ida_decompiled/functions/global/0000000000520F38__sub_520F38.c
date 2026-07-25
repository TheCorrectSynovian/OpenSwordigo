/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000520F38
 * Mangled: sub_520F38
 * Demangled: sub_520F38
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x000000000051FEA0  sub_51FEA0
 *   0x00000000005652C8  sub_5652C8
 *
 * Referenced strings: 10
 *   insn=0x0000000000520F4C string=0x0000000000520F50 "5"
 *   insn=0x0000000000520F54 string=0x0000000000520F58 "tz@"
 *   insn=0x0000000000520F54 string=0x0000000000520F88 "`"
 *   insn=0x0000000000520F58 string=0x0000000000520F5C "T"
 *   insn=0x0000000000520F68 string=0x0000000000520F6C "u"
 *   insn=0x0000000000520F6C string=0x0000000000520F70 "!"
 *   insn=0x0000000000520F70 string=0x0000000000520F74 "a"
 *   insn=0x0000000000520F88 string=0x0000000000520F8C "u"
 *   insn=0x0000000000520FB0 string=0x0000000000520FB4 "B"
 *   insn=0x0000000000520FB4 string=0x0000000000520FB8 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_520F38(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // x0
  char v10; // w21
  _BYTE *v11; // x20
  __int64 result; // x0
  char v13; // [xsp+0h] [xbp+0h]

  v9 = *(unsigned __int8 *)(a1 + 225);
  v10 = a2;
  if ( (_DWORD)v9 )
  {
    result = *(unsigned __int8 *)(a1 + 224);
    *(_BYTE *)(a1 + 224) = a2;
  }
  else
  {
    v11 = *(_BYTE **)(a1 + 240);
    if ( !v11 )
      sub_5652C8(v9);
    if ( v11[56] )
    {
      result = (unsigned __int8)v11[89];
    }
    else
    {
      sub_51FEA0(*(_BYTE **)(a1 + 240), a2, a3, a4, a5, a6, a7, a8, v13);
      result = (*(unsigned __int8 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v11 + 48LL))(v11, 32);
    }
    *(_BYTE *)(a1 + 224) = v10;
    *(_BYTE *)(a1 + 225) = 1;
  }
  return result;
}

