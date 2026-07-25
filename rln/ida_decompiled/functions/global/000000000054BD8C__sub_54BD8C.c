/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054BD8C
 * Mangled: sub_54BD8C
 * Demangled: sub_54BD8C
 *
 * Callers: 1
 *   0x000000000052EE7C  sub_52EE7C
 *
 * Callees: 6
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001FB3F0  .strftime
 *   0x00000000001FBCA0  .setlocale
 *   0x0000000000201760  .memcpy
 *   0x0000000000203230  .strlen
 *
 * Referenced strings: 10
 *   insn=0x000000000054BDC0 string=0x00000000001FBCA0 "0'"
 *   insn=0x000000000054BDD8 string=0x00000000001F8570 "0'"
 *   insn=0x000000000054BDE4 string=0x000000000054BDE8 "^"
 *   insn=0x000000000054BDE8 string=0x000000000054BDEC "A"
 *   insn=0x000000000054BE04 string=0x000000000054BE08 "z"
 *   insn=0x000000000054BE08 string=0x00000000001FB3F0 "0'"
 *   insn=0x000000000054BE18 string=0x000000000054BE1C "s"
 *   insn=0x000000000054BE1C string=0x000000000054BE28 "T"
 *   insn=0x000000000054BE20 string=0x000000000054BE24 "O"
 *   insn=0x000000000054BE24 string=0x00000000001F4F60 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_54BD8C(__int64 a1, char *a2, size_t a3, const char *a4, const struct tm *a5)
{
  char *v10; // x0
  char *v11; // x20
  unsigned __int64 v12; // x22
  void *v13; // x19
  size_t v14; // x20

  v10 = setlocale(6, 0);
  v11 = v10;
  if ( v10 )
  {
    v12 = strlen(v10) + 1;
    v13 = (void *)operator new[](v12);
    memcpy(v13, v11, v12);
    setlocale(6, *(const char **)(a1 + 32));
  }
  else
  {
    v13 = 0;
  }
  v14 = strftime(a2, a3, a4, a5);
  setlocale(6, (const char *)v13);
  if ( v13 )
    operator delete[](v13);
  if ( !v14 )
    *a2 = 0;
}

