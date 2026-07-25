/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F9780
 * Mangled: _Z15luaL_addlstringP11luaL_BufferPKcm
 * Demangled: luaL_addlstring(luaL_Buffer *,char const*,ulong)
 *
 * Callers: 1
 *   0x0000000000203790  luaL_addlstring(luaL_Buffer *,char const*,ulong)
 *
 * Callees: 1
 *   0x0000000000201A10  luaL_prepbuffer(luaL_Buffer *)
 *
 * Referenced strings: 3
 *   insn=0x00000000004F97A4 string=0x00000000004F97A8 "s"
 *   insn=0x00000000004F97C0 string=0x00000000004F97C4 "\n"
 *   insn=0x00000000004F97C8 string=0x00000000004F97CC "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall luaL_addlstring(__int64 result, char *a2, __int64 a3)
{
  __int64 v3; // x19
  _BYTE **v5; // x21
  unsigned __int64 v6; // x22
  _BYTE *v7; // x8
  char v8; // t1

  v3 = a3;
  v5 = (_BYTE **)result;
  if ( a3 )
  {
    v6 = result + 1048;
    do
    {
      v7 = *v5;
      --v3;
      if ( (unsigned __int64)*v5 >= v6 )
      {
        result = luaL_prepbuffer();
        v7 = *v5;
      }
      v8 = *a2++;
      *v5 = v7 + 1;
      *v7 = v8;
    }
    while ( v3 );
  }
  return result;
}

