/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053E034
 * Mangled: sub_53E034
 * Demangled: sub_53E034
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F8030  .ungetwc
 *
 * Referenced strings: 6
 *   insn=0x000000000053E034 string=0x000000000053E038 "?"
 *   insn=0x000000000053E048 string=0x000000000053E04C " "
 *   insn=0x000000000053E058 string=0x00000000001F8030 "0'"
 *   insn=0x000000000053E05C string=0x000000000053E060 "aJ"
 *   insn=0x000000000053E07C string=0x000000000053E080 "a"@"
 *   insn=0x000000000053E08C string=0x000000000053E090 "aJ"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_53E034(__int64 a1, wint_t wc)
{
  __int64 result; // x0
  wint_t v4; // w3

  if ( wc != -1 )
  {
    result = ungetwc(wc, *(__FILE **)(a1 + 64));
LABEL_3:
    *(_DWORD *)(a1 + 72) = -1;
    return result;
  }
  v4 = *(_DWORD *)(a1 + 72);
  result = 0xFFFFFFFFLL;
  if ( v4 == -1 )
    goto LABEL_3;
  result = ungetwc(v4, *(__FILE **)(a1 + 64));
  *(_DWORD *)(a1 + 72) = -1;
  return result;
}

