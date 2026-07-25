/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022B8E4
 * Mangled: _ZN5Caver16OverlayComponentC2Ev
 * Demangled: Caver::OverlayComponent::OverlayComponent(void)
 *
 * Callers: 1
 *   0x0000000000202B50  Caver::OverlayComponent::OverlayComponent(void)
 *
 * Callees: 0
 *
 * Referenced strings: 10
 *   insn=0x000000000022B8F0 string=0x000000000022B8F4 ""
 *   insn=0x000000000022B8F8 string=0x000000000022B8FC "J"
 *   insn=0x000000000022B900 string=0x000000000022B904 "a"
 *   insn=0x000000000022B904 string=0x000000000022B908 ""
 *   insn=0x000000000022B908 string=0x000000000022B90C "H"
 *   insn=0x000000000022B910 string=0x000000000022B914 "H"
 *   insn=0x000000000022B914 string=0x000000000022B918 "KA"
 *   insn=0x000000000022B918 string=0x000000000022B91C "?"
 *   insn=0x000000000022B920 string=0x000000000022B924 ""
 *   insn=0x000000000022B928 string=0x000000000022B92C "\t|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::OverlayComponent::OverlayComponent(__n128 *this)
{
  __n128 result; // q0

  this->n128_u32[2] = 0;
  this[2].n128_u64[0] = 0;
  this[2].n128_u64[1] = 0;
  this[3].n128_u8[0] = 0;
  this[3].n128_u64[1] = (unsigned __int64)&byte_6FD2F8;
  result.n128_u64[0] = (unsigned __int64)&off_6BA8D0;
  this[4].n128_u64[1] = 0;
  result.n128_u64[1] = (unsigned __int64)&off_6BA910;
  this->n128_u64[0] = (unsigned __int64)off_6BA7B0;
  this[5].n128_u64[0] = 0;
  this[5].n128_u64[1] = (unsigned __int64)&this[4].n128_u64[1];
  this[6].n128_u64[0] = (unsigned __int64)&this[4].n128_u64[1];
  this[6].n128_u64[1] = 0;
  this[1] = result;
  return result;
}

