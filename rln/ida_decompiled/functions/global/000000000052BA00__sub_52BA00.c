/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052BA00
 * Mangled: sub_52BA00
 * Demangled: sub_52BA00
 *
 * Callers: 6
 *   0x0000000000530504  sub_530504
 *   0x0000000000530F68  sub_530F68
 *   0x0000000000531318  sub_531318
 *   0x0000000000552738  sub_552738
 *   0x00000000005532C0  sub_5532C0
 *   0x0000000000553630  sub_553630
 *
 * Callees: 7
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001FA120  .strcmp
 *   0x00000000001FBCA0  .setlocale
 *   0x00000000002014D0  .vsprintf
 *   0x0000000000201760  .memcpy
 *   0x0000000000203230  .strlen
 *
 * Referenced strings: 13
 *   insn=0x000000000052BA00 string=0x000000000052BA04 " "
 *   insn=0x000000000052BA50 string=0x000000000052BA54 "G"
 *   insn=0x000000000052BA58 string=0x00000000001FBCA0 "0'"
 *   insn=0x000000000052BA64 string=0x000000000059D1C8 "C"
 *   insn=0x000000000052BA70 string=0x000000000052BA74 " "
 *   insn=0x000000000052BA70 string=0x00000000001FA120 "0'"
 *   insn=0x000000000052BAEC string=0x00000000001F8570 "0'"
 *   insn=0x000000000052BB00 string=0x000000000052BB04 " "
 *   insn=0x000000000052BB04 string=0x000000000052BB08 "f@"
 *   insn=0x000000000052BB48 string=0x000000000052BB4C "aV"
 *   insn=0x000000000052BB54 string=0x000000000052BB58 " "
 *   insn=0x000000000052BB58 string=0x000000000052BB5C "Q@"
 *   insn=0x000000000052BB64 string=0x00000000001F4F60 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_52BA00(__int64 a1, char *a2, __int64 a3, const char *a4, ...)
{
  char *v6; // x0
  const char *v7; // x20
  void *v9; // x23
  unsigned int v10; // w19
  size_t v11; // [xsp+48h] [xbp+48h]
  gcc_va_list arg; // [xsp+50h] [xbp+50h] BYREF
  gcc_va_list va1; // [xsp+70h] [xbp+70h] BYREF

  v6 = setlocale(1, 0);
  v7 = v6;
  if ( v6 && strcmp(v6, "C") )
  {
    v11 = strlen(v7) + 1;
    v9 = (void *)operator new[](v11);
    memcpy(v9, v7, v11);
    setlocale(1, "C");
    va_start(va1, a4);
    va_start(arg, a4);
    v10 = vsprintf(a2, a4, arg);
    setlocale(1, (const char *)v9);
    operator delete[](v9);
    return v10;
  }
  else
  {
    va_start(va1, a4);
    va_start(arg, a4);
    return (unsigned int)vsprintf(a2, a4, arg);
  }
}

