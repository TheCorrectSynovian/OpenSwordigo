/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000255CB4
 * Mangled: _ZN5Caver24BreakableObjectComponent10FlashModelERKNS_5ColorEf
 * Demangled: Caver::BreakableObjectComponent::FlashModel(Caver::Color const&,float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000215678  Caver::ModelComponent::Interface(void)
 *
 * Referenced strings: 10
 *   insn=0x0000000000255CCC string=0x0000000000255CD0 "h"
 *   insn=0x0000000000255CD0 string=0x0000000000255CD4 ""
 *   insn=0x0000000000255CE0 string=0x0000000000255CE4 "@"
 *   insn=0x0000000000255CF8 string=0x0000000000255CFC ""
 *   insn=0x0000000000255CFC string=0x0000000000255D00 "Q@"
 *   insn=0x0000000000255D10 string=0x0000000000255D14 "\n"
 *   insn=0x0000000000255D14 string=0x0000000000255D18 "I"
 *   insn=0x0000000000255D24 string=0x0000000000255D28 "a"
 *   insn=0x0000000000255D2C string=0x0000000000255D30 "h"
 *   insn=0x0000000000255D30 string=0x0000000000255D34 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::BreakableObjectComponent::FlashModel(__int64 result, _DWORD *a2, float a3)
{
  __int64 v3; // x19
  __int64 v4; // x8
  _QWORD *v7; // x22
  _QWORD *i; // x23
  __int64 v9; // x8

  v3 = result;
  v4 = *(_QWORD *)(result + 40);
  v7 = *(_QWORD **)(v4 + 192);
  for ( i = *(_QWORD **)(v4 + 200); i != v7; ++v7 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *(__fastcall *)(Caver::ModelComponent *))(Caver::ModelComponent *__hidden)))(*(_QWORD *)*v7 + 160LL))(
               *v7,
               Caver::ModelComponent::Interface);
    if ( (result & 1) != 0 )
    {
      v9 = *v7;
      *(_DWORD *)(*v7 + 310LL) = *a2;
      *(_BYTE *)(v9 + 309) = 1;
    }
  }
  *(_BYTE *)(v3 + 168) = 1;
  *(float *)(v3 + 172) = a3;
  return result;
}

