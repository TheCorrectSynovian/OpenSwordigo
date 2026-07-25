/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F97E4
 * Mangled: _Z14luaL_addstringP11luaL_BufferPKc
 * Demangled: luaL_addstring(luaL_Buffer *,char const*)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000201A10  luaL_prepbuffer(luaL_Buffer *)
 *   0x0000000000203230  .strlen
 *
 * Referenced strings: 4
 *   insn=0x00000000004F981C string=0x00000000004F982C "i"
 *   insn=0x00000000004F9820 string=0x00000000004F9824 "{ "
 *   insn=0x00000000004F982C string=0x00000000004F9830 "\n"
 *   insn=0x00000000004F9834 string=0x00000000004F9838 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall luaL_addstring(_BYTE **a1, char *a2)
{
  char *v2; // x19
  __int64 result; // x0
  __int64 i; // x21
  _BYTE *v6; // x8
  char v7; // t1

  v2 = a2;
  result = strlen(a2);
  for ( i = result; i; *v6 = v7 )
  {
    v6 = *a1;
    --i;
    if ( *a1 >= (_BYTE *)a1 + 1048 )
    {
      result = luaL_prepbuffer();
      v6 = *a1;
    }
    v7 = *v2++;
    *a1 = v6 + 1;
  }
  return result;
}

