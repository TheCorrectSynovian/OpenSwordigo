/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051E520
 * Mangled: _Znwm
 * Demangled: operator new(ulong)
 *
 * Callers: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Callees: 5
 *   0x00000000001F5E70  .malloc
 *   0x00000000001F6BC0  std::get_new_handler(void)
 *   0x00000000001F9460  .__cxa_allocate_exception
 *   0x00000000001FB4A0  .__cxa_throw
 *   0x000000000056FBB0  std::bad_alloc::~bad_alloc()
 *
 * Referenced strings: 14
 *   insn=0x000000000051E534 string=0x000000000051E538 "N^"
 *   insn=0x000000000051E538 string=0x00000000001F5E70 "P'"
 *   insn=0x000000000051E540 string=0x00000000001F6BC0 "0'"
 *   insn=0x000000000051E54C string=0x000000000051E550 "H^"
 *   insn=0x000000000051E550 string=0x000000000051E554 "`"
 *   insn=0x000000000051E568 string=0x000000000051E56C "A"
 *   insn=0x000000000051E568 string=0x00000000001F9460 "0'"
 *   insn=0x000000000051E56C string=0x000000000051E570 "B"
 *   insn=0x000000000051E570 string=0x000000000051E574 "!D@"
 *   insn=0x000000000051E574 string=0x000000000051E578 "!@"
 *   insn=0x000000000051E57C string=0x000000000051E580 "!"
 *   insn=0x000000000051E580 string=0x000000000051E584 "B"
 *   insn=0x000000000051E584 string=0x000000000051E588 "!"
 *   insn=0x000000000051E58C string=0x00000000001FB4A0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall operator new(size_t a1)
{
  size_t v1; // x19
  void *result; // x0
  void (*new_handler)(void); // x0
  _QWORD *exception; // x0

  if ( a1 )
    v1 = a1;
  else
    v1 = 1;
  for ( result = malloc(v1); !result; result = malloc(v1) )
  {
    new_handler = (void (*)(void))std::get_new_handler();
    if ( !new_handler )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = off_6DBAB0;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))std::bad_alloc::~bad_alloc);
    }
    new_handler();
  }
  return result;
}

