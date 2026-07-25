/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051CFA8
 * Mangled: __cxa_free_exception
 * Demangled: __cxa_free_exception
 *
 * Callers: 1
 *   0x00000000001F41F0  .__cxa_free_exception
 *
 * Callees: 8
 *   0x00000000001F8280  .__cxa_call_unexpected
 *   0x00000000001F89E0  .free
 *   0x00000000001FBB50  .pthread_mutex_unlock
 *   0x00000000001FFA70  .pthread_mutex_lock
 *   0x000000000051CE50  sub_51CE50
 *   0x000000000051CE80  sub_51CE80
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 21
 *   insn=0x000000000051CFA8 string=0x000000000051CFAC "a"
 *   insn=0x000000000051CFB0 string=0x000000000051CFB4 "!"
 *   insn=0x000000000051CFBC string=0x000000000051CFC0 "#"
 *   insn=0x000000000051CFC0 string=0x000000000051CFC4 ""@@"
 *   insn=0x000000000051CFD4 string=0x000000000051CFD8 "@"
 *   insn=0x000000000051CFE0 string=0x000000000051CFE4 "t"
 *   insn=0x000000000051CFF0 string=0x000000000051D068 "z"
 *   insn=0x000000000051CFF4 string=0x000000000051CFF8 "!"
 *   insn=0x000000000051CFF8 string=0x000000000051CFFC "3 "
 *   insn=0x000000000051D000 string=0x000000000051D004 "A"
 *   insn=0x000000000051D004 string=0x000000000051D008 "3"
 *   insn=0x000000000051D008 string=0x000000000051D00C "S"
 *   insn=0x000000000051D010 string=0x000000000051D014 " "
 *   insn=0x000000000051D010 string=0x00000000001FBB50 "0'"
 *   insn=0x000000000051D02C string=0x000000000051D030 "ln"
 *   insn=0x000000000051D030 string=0x00000000001F89E0 "0'"
 *   insn=0x000000000051D034 string=0x000000000051D038 "!"
 *   insn=0x000000000051D038 string=0x000000000051D03C "3 "
 *   insn=0x000000000051D040 string=0x000000000051D044 "3"
 *   insn=0x000000000051D06C string=0x000000000051D05C "?"
 *   insn=0x000000000051D070 string=0x00000000001F8280 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void _cxa_free_exception(void *a1)
{
  unsigned int v1; // w19

  if ( a1 < &unk_6EBD00 || a1 >= &qword_6FBD00 )
  {
    free((char *)a1 - 128);
  }
  else
  {
    v1 = ((unsigned int)a1 - (unsigned int)&unk_6EBD00) >> 10;
    if ( &pthread_create )
    {
      if ( pthread_mutex_lock((pthread_mutex_t *)&qword_6EBCD0) )
        sub_51CE50();
      qword_6FBD00 &= ~(1LL << v1);
      if ( pthread_mutex_unlock((pthread_mutex_t *)&qword_6EBCD0) )
        sub_51CE80();
    }
    else
    {
      qword_6FBD00 &= ~(1LL << v1);
    }
  }
}

