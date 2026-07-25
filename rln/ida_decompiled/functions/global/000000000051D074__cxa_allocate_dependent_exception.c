/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051D074
 * Mangled: __cxa_allocate_dependent_exception
 * Demangled: __cxa_allocate_dependent_exception
 *
 * Callers: 1
 *   0x00000000001F3460  .__cxa_allocate_dependent_exception
 *
 * Callees: 9
 *   0x00000000001F5E70  .malloc
 *   0x00000000001F8280  .__cxa_call_unexpected
 *   0x00000000001FBB50  .pthread_mutex_unlock
 *   0x00000000001FFA70  .pthread_mutex_lock
 *   0x0000000000203770  std::terminate(void)
 *   0x000000000051CE50  sub_51CE50
 *   0x000000000051CE80  sub_51CE80
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 24
 *   insn=0x000000000051D080 string=0x000000000051D084 "{c"
 *   insn=0x000000000051D084 string=0x00000000001F5E70 "P'"
 *   insn=0x000000000051D08C string=0x000000000051D0BC "4"
 *   insn=0x000000000051D0C4 string=0x000000000051D0C8 "`"
 *   insn=0x000000000051D0C4 string=0x000000000051D0D8 "c"
 *   insn=0x000000000051D0C8 string=0x000000000051D0D0 "h"
 *   insn=0x000000000051D0D4 string=0x000000000051D144 "C"
 *   insn=0x000000000051D0DC string=0x000000000051D0E0 "sd@"
 *   insn=0x000000000051D0E8 string=0x000000000051D100 """
 *   insn=0x000000000051D0EC string=0x000000000051D0F0 "!"
 *   insn=0x000000000051D104 string=0x000000000051D108 "@ "
 *   insn=0x000000000051D110 string=0x000000000051D114 " "
 *   insn=0x000000000051D114 string=0x000000000051D118 "sd"
 *   insn=0x000000000051D118 string=0x000000000051D11C "s"
 *   insn=0x000000000051D120 string=0x000000000051D124 "sB"
 *   insn=0x000000000051D124 string=0x000000000051D128 "s"
 *   insn=0x000000000051D128 string=0x000000000051D12C "4"
 *   insn=0x000000000051D12C string=0x000000000051D130 "`"
 *   insn=0x000000000051D138 string=0x00000000001FBB50 "0'"
 *   insn=0x000000000051D13C string=0x000000000051D140 "P"
 *   insn=0x000000000051D148 string=0x000000000051D14C "`"
 *   insn=0x000000000051D14C string=0x000000000051D158 "Jl"
 *   insn=0x000000000051D154 string=0x000000000051D148 "?"
 *   insn=0x000000000051D158 string=0x00000000001F8280 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *_cxa_allocate_dependent_exception()
{
  _QWORD *v0; // x19
  unsigned int v2; // w0
  unsigned __int64 i; // x1

  v0 = malloc(0x70u);
  if ( !v0 )
  {
    if ( &pthread_create && pthread_mutex_lock((pthread_mutex_t *)&qword_6EBCD0) )
      sub_51CE50();
    v2 = 0;
    for ( i = qword_6EA0C8; (i & 1) != 0; i >>= 1 )
    {
      if ( ++v2 == 64 )
        std::terminate();
    }
    qword_6EA0C8 |= 1LL << v2;
    v0 = (_QWORD *)((char *)&qword_6EA0D0 + 112 * v2);
    if ( &pthread_create && pthread_mutex_unlock((pthread_mutex_t *)&qword_6EBCD0) )
      sub_51CE80();
  }
  *v0 = 0;
  v0[1] = 0;
  v0[2] = 0;
  v0[3] = 0;
  v0[4] = 0;
  v0[5] = 0;
  v0[6] = 0;
  v0[7] = 0;
  v0[8] = 0;
  v0[9] = 0;
  v0[10] = 0;
  v0[11] = 0;
  v0[12] = 0;
  v0[13] = 0;
  return v0;
}

