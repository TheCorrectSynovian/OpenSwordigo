/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCEC0
 * Mangled: ._ZNSt9exceptionD2Ev
 * Demangled: std::exception::~exception()
 *
 * Callers: 1
 *   0x000000000051D3D0  std::exception::~exception()
 *
 * Callees: 1
 *   0x000000000051D3A0  std::exception::~exception()
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCEC8 string=0x00000000001FCECC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall std::exception::~exception(std::exception *this)
{
  _ZNSt9exceptionD2Ev(this);
}

