/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051E27C
 * Mangled: __cxa_guard_acquire
 * Demangled: __cxa_guard_acquire
 *
 * Callers: 1
 *   0x00000000001FD6E0  .__cxa_guard_acquire
 *
 * Callees: 10
 *   0x00000000001F4220  .__google_potentially_blocking_region_begin
 *   0x00000000001F6FE0  .__google_potentially_blocking_region_end
 *   0x00000000001F9460  .__cxa_allocate_exception
 *   0x00000000001FB4A0  .__cxa_throw
 *   0x00000000002025A0  .syscall
 *   0x000000000051E4E8  __gnu_cxx::recursive_init_error::~recursive_init_error()
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *   0x00000000006FED00  __google_potentially_blocking_region_begin
 *   0x00000000006FED08  __google_potentially_blocking_region_end
 *
 * Referenced strings: 43
 *   insn=0x000000000051E288 string=0x000000000051E28C " "
 *   insn=0x000000000051E298 string=0x000000000051E29C "@"
 *   insn=0x000000000051E29C string=0x000000000051E2A4 "`"
 *   insn=0x000000000051E2A0 string=0x00000000001F4220 "P'"
 *   insn=0x000000000051E2A8 string=0x000000000051E2AC " "
 *   insn=0x000000000051E2B0 string=0x000000000051E2B4 " "
 *   insn=0x000000000051E2B4 string=0x000000000051E2B8 "6"
 *   insn=0x000000000051E2B4 string=0x000000000051E2F8 "`"
 *   insn=0x000000000051E2D4 string=0x000000000051E2D8 "`"
 *   insn=0x000000000051E2DC string=0x000000000051E2E0 "a"
 *   insn=0x000000000051E2E0 string=0x000000000051E2E4 "t"
 *   insn=0x000000000051E2E0 string=0x000000000051E2EC "!"
 *   insn=0x000000000051E2EC string=0x000000000051E2F0 " "
 *   insn=0x000000000051E2F4 string=0x000000000051E304 "!"
 *   insn=0x000000000051E2FC string=0x000000000051E394 "`"
 *   insn=0x000000000051E304 string=0x000000000051E308 "!$B"
 *   insn=0x000000000051E310 string=0x000000000051E314 "3c"
 *   insn=0x000000000051E314 string=0x00000000001F6FE0 "P'"
 *   insn=0x000000000051E338 string=0x000000000051E33C " "
 *   insn=0x000000000051E344 string=0x000000000051E348 "@"
 *   insn=0x000000000051E344 string=0x000000000051E360 "a"
 *   insn=0x000000000051E360 string=0x000000000051E364 "?"
 *   insn=0x000000000051E364 string=0x000000000051E368 "a"
 *   insn=0x000000000051E368 string=0x000000000051E36C "v"
 *   insn=0x000000000051E378 string=0x000000000051E37C "?"
 *   insn=0x000000000051E398 string=0x000000000051E39C "!"
 *   insn=0x000000000051E39C string=0x000000000051E3A0 " "
 *   insn=0x000000000051E3A0 string=0x000000000051E3A4 "a"
 *   insn=0x000000000051E3AC string=0x000000000051E3B0 "!$B"
 *   insn=0x000000000051E3B4 string=0x000000000051E3C4 "@"
 *   insn=0x000000000051E3B8 string=0x000000000051E3BC "\tc"
 *   insn=0x000000000051E3C8 string=0x000000000051E3CC "%l"
 *   insn=0x000000000051E3CC string=0x000000000051E3D0 "A"
 *   insn=0x000000000051E3CC string=0x00000000001F9460 "0'"
 *   insn=0x000000000051E3D0 string=0x000000000051E3D4 """
 *   insn=0x000000000051E3D4 string=0x000000000051E3D8 "!"
 *   insn=0x000000000051E3D8 string=0x000000000051E3DC "!@"
 *   insn=0x000000000051E3E0 string=0x000000000051E3E4 "!"
 *   insn=0x000000000051E3E4 string=0x000000000051E3E8 "B"
 *   insn=0x000000000051E3E8 string=0x000000000051E3EC "!LD"
 *   insn=0x000000000051E3E8 string=0x000000000051E4E8 "A"
 *   insn=0x000000000051E3EC string=0x000000000051E3F0 ",t"
 *   insn=0x000000000051E3F0 string=0x00000000001FB4A0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int _cxa_guard_acquire(__guard *a1)
{
  unsigned int v2; // w0
  int result; // w0
  unsigned int v4; // w1
  _QWORD *exception; // x0
  int v6; // [xsp+48h] [xbp+48h]

  if ( &_google_potentially_blocking_region_begin )
    __google_potentially_blocking_region_begin();
  if ( *(_BYTE *)a1 )
    goto LABEL_10;
  if ( !&pthread_create )
  {
    if ( !*(_BYTE *)a1 )
    {
      if ( *((_BYTE *)a1 + 1) )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = off_6D9920;
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'__gnu_cxx::recursive_init_error,
          (void (*)(void *))__gnu_cxx::recursive_init_error::~recursive_init_error);
      }
      result = 1;
      *((_BYTE *)a1 + 1) = 1;
      goto LABEL_11;
    }
LABEL_10:
    result = 0;
    goto LABEL_11;
  }
  while ( 1 )
  {
    do
      v2 = __ldaxr((unsigned int *)a1);
    while ( !v2 && __stlxr(0x100u, (unsigned int *)a1) );
    if ( !v2 )
      break;
    if ( v2 == 1 )
      goto LABEL_10;
    if ( v2 == 256 )
    {
      do
        v4 = __ldaxr((unsigned int *)a1);
      while ( v4 == v2 && __stlxr(0x10100u, (unsigned int *)a1) );
      if ( v4 != v2 )
      {
        if ( v4 == 1 )
          goto LABEL_10;
        if ( !v4 )
          continue;
      }
    }
    syscall(98, a1, 0);
  }
  result = 1;
LABEL_11:
  if ( &_google_potentially_blocking_region_end )
  {
    v6 = result;
    __google_potentially_blocking_region_end();
    return v6;
  }
  return result;
}

