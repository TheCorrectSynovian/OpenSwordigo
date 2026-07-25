/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020DEE0
 * Mangled: sub_20DEE0
 * Demangled: sub_20DEE0
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000203480  .pthread_key_create
 *   0x000000000051D468  sub_51D468
 *   0x000000000051D484  sub_51D484
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 7
 *   insn=0x000000000020DEEC string=0x000000000020DEF0 "t'"
 *   insn=0x000000000020DF08 string=0x000000000020DF0C "!"
 *   insn=0x000000000020DF0C string=0x000000000020DF10 "\"
 *   insn=0x000000000020DF18 string=0x000000000020DF1C "`"
 *   insn=0x000000000020DF34 string=0x000000000020DF38 "B"
 *   insn=0x000000000020DF38 string=0x000000000020DF3C "A"
 *   insn=0x000000000020DF3C string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_20DEE0()
{
  byte_6FBD0C = 0;
  if ( &pthread_create )
    byte_6FBD0C = pthread_key_create((pthread_key_t *)&dword_6FBD08, (void (*)(void *))sub_51D484) == 0;
  return __cxa_atexit((void (*)(void *))sub_51D468, &dword_6FBD08, &off_6E8000);
}

