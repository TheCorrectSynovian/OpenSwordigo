/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000232680
 * Mangled: _ZN5Caver16ProgramComponent7ProcessEPSt6vectorIN5boost13intrusive_ptrINS_9ComponentEEESaIS5_EE
 * Demangled: Caver::ProgramComponent::Process(std::vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>> *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x0000000000232688 string=0x000000000023268C "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProgramComponent::Process(__int64 a1)
{
  __int64 result; // x0

  result = 1;
  *(_BYTE *)(a1 + 112) = 1;
  return result;
}

