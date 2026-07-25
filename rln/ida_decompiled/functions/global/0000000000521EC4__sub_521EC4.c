/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000521EC4
 * Mangled: sub_521EC4
 * Demangled: sub_521EC4
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 5
 *   insn=0x0000000000521ED0 string=0x0000000000521ED4 "!"
 *   insn=0x0000000000521ED0 string=0x0000000000521EF0 " 4M"
 *   insn=0x0000000000521ED4 string=0x0000000000521ED8 " "
 *   insn=0x0000000000521EDC string=0x0000000000521EE0 """
 *   insn=0x0000000000521EF8 string=0x0000000000521EFC ""4"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_521EC4()
{
  unsigned int v0; // w0
  __int64 result; // x0

  if ( &pthread_create )
  {
    do
      v0 = __ldaxr((unsigned int *)&dword_6FBD34);
    while ( __stlxr(v0 + 1, (unsigned int *)&dword_6FBD34) );
    return v0 + 4;
  }
  else
  {
    result = (unsigned int)(dword_6FBD34 + 4);
    ++dword_6FBD34;
  }
  return result;
}

