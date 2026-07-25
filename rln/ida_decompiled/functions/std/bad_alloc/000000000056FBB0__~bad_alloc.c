/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056FBB0
 * Mangled: _ZNSt9bad_allocD2Ev
 * Demangled: std::bad_alloc::~bad_alloc()
 *
 * Callers: 4
 *   0x00000000001F4110  std::bad_alloc::~bad_alloc()
 *   0x0000000000202BD0  std::bad_alloc::~bad_alloc()
 *   0x000000000051E520  operator new(ulong)
 *   0x0000000000565294  sub_565294
 *
 * Callees: 1
 *   0x0000000000200070  std::exception::~exception()
 *
 * Referenced strings: 3
 *   insn=0x000000000056FBB0 string=0x000000000056FBB4 "!D@"
 *   insn=0x000000000056FBB4 string=0x000000000056FBB8 "!@"
 *   insn=0x000000000056FBBC string=0x000000000056FBC0 ",A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::bad_alloc::~bad_alloc(std::bad_alloc *this)
{
  *(_QWORD *)this = off_6DBAB0;
  std::exception::~exception(this);
}

