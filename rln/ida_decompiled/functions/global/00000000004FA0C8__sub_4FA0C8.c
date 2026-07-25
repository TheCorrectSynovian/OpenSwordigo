/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FA0C8
 * Mangled: sub_4FA0C8
 * Demangled: sub_4FA0C8
 *
 * Callers: 1
 *   0x00000000004FA084  luaL_newstate(void)
 *
 * Callees: 2
 *   0x00000000001F89E0  .free
 *   0x00000000002008E0  .realloc
 *
 * Referenced strings: 2
 *   insn=0x00000000004FA0E0 string=0x00000000004FA0E4 "?"
 *   insn=0x00000000004FA0E4 string=0x00000000001F89E0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall sub_4FA0C8(int a1, void *p, int a3, size_t byte_count)
{
  if ( byte_count )
    return realloc(p, byte_count);
  free(p);
  return 0;
}

