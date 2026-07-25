/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D12C0
 * Mangled: _ZN5Caver13AudioListenerC2Ev
 * Demangled: Caver::AudioListener::AudioListener(void)
 *
 * Callers: 1
 *   0x00000000001F8120  Caver::AudioListener::AudioListener(void)
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x00000000004D12C0 string=0x00000000004D12C4 " "
 *   insn=0x00000000004D12C8 string=0x00000000004D12CC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::AudioListener::AudioListener(Caver::AudioListener *this)
{
  long double result; // q0

  result = *(long double *)&xmmword_598060;
  *(_DWORD *)this = 1065353216;
  *(_QWORD *)((char *)this + 12) = 0;
  *(_QWORD *)((char *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *(_OWORD *)((char *)this + 24) = xmmword_598060;
  return result;
}

