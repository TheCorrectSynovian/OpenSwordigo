/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051D15C
 * Mangled: __cxa_free_dependent_exception
 * Demangled: __cxa_free_dependent_exception
 *
 * Callers: 1
 *   0x00000000002021F0  .__cxa_free_dependent_exception
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
 * Referenced strings: 27
 *   insn=0x000000000051D15C string=0x000000000051D160 "a"
 *   insn=0x000000000051D164 string=0x000000000051D168 "!@"
 *   insn=0x000000000051D174 string=0x000000000051D178 """
 *   insn=0x000000000051D178 string=0x000000000051D17C "B"
 *   insn=0x000000000051D180 string=0x000000000051D184 "b"
 *   insn=0x000000000051D188 string=0x000000000051D18C "!"
 *   insn=0x000000000051D194 string=0x000000000051D198 "3I"
 *   insn=0x000000000051D19C string=0x000000000051D1A0 "!<G"
 *   insn=0x000000000051D1A0 string=0x000000000051D1A4 "S"
 *   insn=0x000000000051D1AC string=0x000000000051D1B0 "t"
 *   insn=0x000000000051D1AC string=0x000000000051D1FC "`"
 *   insn=0x000000000051D1B4 string=0x000000000051D1B8 "."
 *   insn=0x000000000051D1BC string=0x000000000051D1C0 "b"
 *   insn=0x000000000051D1BC string=0x000000000051D230 ""
 *   insn=0x000000000051D1C0 string=0x000000000051D1C4 "!"
 *   insn=0x000000000051D1C4 string=0x000000000051D1C8 "3 "
 *   insn=0x000000000051D1CC string=0x000000000051D1D0 "Ad@"
 *   insn=0x000000000051D1D0 string=0x000000000051D1D4 "3"
 *   insn=0x000000000051D1D4 string=0x000000000051D1D8 "Sd"
 *   insn=0x000000000051D1D8 string=0x000000000051D1DC "]z"
 *   insn=0x000000000051D1DC string=0x00000000001FBB50 "0'"
 *   insn=0x000000000051D1F8 string=0x00000000001F89E0 "0'"
 *   insn=0x000000000051D1FC string=0x000000000051D200 "!"
 *   insn=0x000000000051D200 string=0x000000000051D204 "3 "
 *   insn=0x000000000051D208 string=0x000000000051D20C "3"
 *   insn=0x000000000051D234 string=0x000000000051D224 "?"
 *   insn=0x000000000051D238 string=0x00000000001F8280 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall _cxa_free_dependent_exception(__int64 *a1)
{
  unsigned int v1; // w19

  if ( a1 < qword_6EA0D0 || a1 >= &qword_6EBCD0 )
  {
    free(a1);
  }
  else
  {
    v1 = ((unsigned int)a1 - (unsigned int)qword_6EA0D0) / 0x70;
    if ( &pthread_create )
    {
      if ( pthread_mutex_lock((pthread_mutex_t *)&qword_6EBCD0) )
        sub_51CE50();
      qword_6EA0C8 &= ~(1LL << v1);
      if ( pthread_mutex_unlock((pthread_mutex_t *)&qword_6EBCD0) )
        sub_51CE80();
    }
    else
    {
      qword_6EA0C8 &= ~(1LL << v1);
    }
  }
}

