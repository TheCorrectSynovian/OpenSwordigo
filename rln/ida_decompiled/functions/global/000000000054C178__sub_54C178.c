/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054C178
 * Mangled: sub_54C178
 * Demangled: sub_54C178
 *
 * Callers: 1
 *   0x0000000000551408  sub_551408
 *
 * Callees: 6
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F7ED0  .wcsftime
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001FBCA0  .setlocale
 *   0x0000000000201760  .memcpy
 *   0x0000000000203230  .strlen
 *
 * Referenced strings: 10
 *   insn=0x000000000054C1AC string=0x00000000001FBCA0 "0'"
 *   insn=0x000000000054C1C4 string=0x00000000001F8570 "0'"
 *   insn=0x000000000054C1D0 string=0x000000000054C1D4 "c"
 *   insn=0x000000000054C1D4 string=0x000000000054C1D8 "A"
 *   insn=0x000000000054C1F0 string=0x000000000054C1F4 "7"
 *   insn=0x000000000054C1F4 string=0x00000000001F7ED0 "0'"
 *   insn=0x000000000054C208 string=0x000000000054C20C "U"
 *   insn=0x000000000054C20C string=0x000000000054C210 "S"
 *   insn=0x000000000054C20C string=0x00000000001F4F60 "P'"
 *   insn=0x000000000054C23C string=0x000000000054C240 "$"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_54C178(__int64 a1, wchar_t *a2, size_t a3, const wchar_t *a4, const struct tm *a5)
{
  char *v10; // x0
  char *v11; // x19
  unsigned __int64 v12; // x22
  void *v13; // x21
  size_t v14; // x19

  v10 = setlocale(6, 0);
  v11 = v10;
  if ( v10 )
  {
    v12 = strlen(v10) + 1;
    v13 = (void *)operator new[](v12);
    memcpy(v13, v11, v12);
    setlocale(6, *(const char **)(a1 + 32));
    v14 = wcsftime(a2, a3, a4, a5);
    setlocale(6, (const char *)v13);
    operator delete[](v13);
  }
  else
  {
    v14 = wcsftime(a2, a3, a4, a5);
    setlocale(6, 0);
  }
  if ( !v14 )
    *a2 = 0;
}

