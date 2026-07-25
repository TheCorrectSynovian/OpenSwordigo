/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000521868
 * Mangled: sub_521868
 * Demangled: sub_521868
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000005652C8  sub_5652C8
 *
 * Referenced strings: 5
 *   insn=0x000000000052188C string=0x0000000000521890 "B(@"
 *   insn=0x0000000000521890 string=0x0000000000521894 "@"
 *   insn=0x0000000000521894 string=0x0000000000521898 "`"
 *   insn=0x0000000000521898 string=0x000000000052189C "!"
 *   insn=0x000000000052189C string=0x00000000005218A0 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_521868(__int64 a1)
{
  __int64 v2; // x0
  __int64 result; // x0

  if ( *(_BYTE *)(a1 + 228) )
    return *(unsigned int *)(a1 + 224);
  v2 = *(_QWORD *)(a1 + 240);
  if ( !v2 )
    sub_5652C8(0);
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 80LL))(v2, 32);
  *(_DWORD *)(a1 + 224) = result;
  *(_BYTE *)(a1 + 228) = 1;
  return result;
}

