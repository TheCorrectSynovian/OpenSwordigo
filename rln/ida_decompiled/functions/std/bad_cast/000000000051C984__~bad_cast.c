/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051C984
 * Mangled: _ZNSt8bad_castD2Ev
 * Demangled: std::bad_cast::~bad_cast()
 *
 * Callers: 4
 *   0x00000000001F4CF0  std::bad_cast::~bad_cast()
 *   0x00000000001FB720  std::bad_cast::~bad_cast()
 *   0x00000000005652C8  sub_5652C8
 *   0x000000000056FC2C  __cxa_bad_cast
 *
 * Callees: 1
 *   0x0000000000200070  std::exception::~exception()
 *
 * Referenced strings: 2
 *   insn=0x000000000051C984 string=0x000000000051C988 "!8G"
 *   insn=0x000000000051C988 string=0x000000000051C98C "!@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::bad_cast::~bad_cast(std::bad_cast *this)
{
  *(_QWORD *)this = off_6D8E80;
  std::exception::~exception(this);
}

