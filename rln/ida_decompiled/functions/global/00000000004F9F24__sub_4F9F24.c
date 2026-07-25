/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F9F24
 * Mangled: sub_4F9F24
 * Demangled: sub_4F9F24
 *
 * Callers: 1
 *   0x00000000004F9C98  luaL_loadfile(lua_State *,char const*)
 *
 * Callees: 2
 *   0x00000000001F5B40  .fread
 *   0x0000000000202880  .feof
 *
 * Referenced strings: 7
 *   insn=0x00000000004F9F44 string=0x000000000058FBEA "\n"
 *   insn=0x00000000004F9F48 string=0x00000000004F9F4C "h"
 *   insn=0x00000000004F9F58 string=0x00000000004F9F5C "I""
 *   insn=0x00000000004F9F5C string=0x00000000004F9F60 "`"
 *   insn=0x00000000004F9F64 string=0x00000000004F9F68 "\n"
 *   insn=0x00000000004F9F80 string=0x00000000001F5B40 "P'"
 *   insn=0x00000000004F9F84 string=0x00000000004F9F88 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

char *__fastcall sub_4F9F24(__int64 a1, __int64 a2, size_t *a3)
{
  FILE *v6; // x3
  void *v7; // x20
  size_t v8; // x0

  if ( *(_DWORD *)a2 )
  {
    *(_DWORD *)a2 = 0;
    *a3 = 1;
    return "\n";
  }
  else if ( feof(*(FILE **)(a2 + 8)) )
  {
    return 0;
  }
  else
  {
    v6 = *(FILE **)(a2 + 8);
    v7 = (void *)(a2 + 16);
    v8 = fread(v7, 1u, 0x400u, v6);
    *a3 = v8;
    if ( v8 )
      return (char *)v7;
    else
      return 0;
  }
}

