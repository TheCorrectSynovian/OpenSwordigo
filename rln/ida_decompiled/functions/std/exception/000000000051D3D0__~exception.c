/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051D3D0
 * Mangled: _ZNSt9exceptionD0Ev
 * Demangled: std::exception::~exception()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FCEC0  std::exception::~exception()
 *
 * Referenced strings: 2
 *   insn=0x000000000051D3E0 string=0x00000000001FCEC0 "0'"
 *   insn=0x000000000051D3F0 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::exception::~exception(std::exception *this)
{
  std::exception::~exception(this);
  operator delete(this);
}

