/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000520EBC
 * Mangled: sub_520EBC
 * Demangled: sub_520EBC
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x000000000051FEA0  sub_51FEA0
 *   0x00000000005652C8  sub_5652C8
 *
 * Referenced strings: 5
 *   insn=0x0000000000520EE4 string=0x0000000000520EE8 "`"
 *   insn=0x0000000000520EE8 string=0x0000000000520EEC "!"
 *   insn=0x0000000000520EEC string=0x0000000000520EF0 "a"
 *   insn=0x0000000000520F20 string=0x0000000000520F24 "B"
 *   insn=0x0000000000520F24 string=0x0000000000520F28 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_520EBC(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  _BYTE *v8; // x20
  __int64 result; // x0
  char vars0; // [xsp+0h] [xbp+0h]

  if ( *(_BYTE *)(a1 + 225) )
    return *(unsigned __int8 *)(a1 + 224);
  v8 = *(_BYTE **)(a1 + 240);
  if ( !v8 )
    sub_5652C8(a1);
  if ( v8[56] )
  {
    result = (unsigned __int8)v8[89];
  }
  else
  {
    sub_51FEA0(v8, *(unsigned __int8 *)(a1 + 225), a3, a4, a5, a6, a7, a8, vars0);
    result = (*(unsigned __int8 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v8 + 48LL))(v8, 32);
  }
  *(_BYTE *)(a1 + 224) = result;
  *(_BYTE *)(a1 + 225) = 1;
  return result;
}

