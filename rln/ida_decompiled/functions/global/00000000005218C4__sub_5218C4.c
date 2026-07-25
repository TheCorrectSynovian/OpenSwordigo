/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005218C4
 * Mangled: sub_5218C4
 * Demangled: sub_5218C4
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000005652C8  sub_5652C8
 *
 * Referenced strings: 9
 *   insn=0x00000000005218DC string=0x00000000005218E0 "`z@"
 *   insn=0x00000000005218DC string=0x0000000000521910 "`"
 *   insn=0x00000000005218E4 string=0x0000000000521924 "i"
 *   insn=0x00000000005218EC string=0x00000000005218F0 "B(@"
 *   insn=0x00000000005218F0 string=0x00000000005218F4 "@"
 *   insn=0x00000000005218F4 string=0x00000000005218F8 "t"
 *   insn=0x00000000005218F8 string=0x00000000005218FC "!"
 *   insn=0x00000000005218FC string=0x0000000000521900 "a"
 *   insn=0x0000000000521910 string=0x0000000000521914 "t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5218C4(__int64 a1, int a2)
{
  __int64 v4; // x0
  __int64 result; // x0

  if ( *(_BYTE *)(a1 + 228) )
  {
    result = *(unsigned int *)(a1 + 224);
    *(_DWORD *)(a1 + 224) = a2;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 240);
    if ( !v4 )
      sub_5652C8(0);
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 80LL))(v4, 32);
    *(_DWORD *)(a1 + 224) = a2;
    *(_BYTE *)(a1 + 228) = 1;
  }
  return result;
}

