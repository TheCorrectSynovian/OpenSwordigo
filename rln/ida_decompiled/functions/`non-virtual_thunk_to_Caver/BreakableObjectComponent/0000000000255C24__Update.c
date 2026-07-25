/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000255C24
 * Mangled: _ZThn24_N5Caver24BreakableObjectComponent6UpdateEf
 * Demangled: `non-virtual thunk to'Caver::BreakableObjectComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000215678  Caver::ModelComponent::Interface(void)
 *
 * Referenced strings: 12
 *   insn=0x0000000000255C34 string=0x0000000000255C38 "hBB9H"
 *   insn=0x0000000000255C38 string=0x0000000000255C3C "H"
 *   insn=0x0000000000255C3C string=0x0000000000255C40 "a"
 *   insn=0x0000000000255C40 string=0x0000000000255C44 "h"
 *   insn=0x0000000000255C44 string=0x0000000000583734 "o"
 *   insn=0x0000000000255C48 string=0x0000000000255C4C " 8 "
 *   insn=0x0000000000255C4C string=0x0000000000255C50 "`"
 *   insn=0x0000000000255C54 string=0x0000000000255C58 "e"
 *   insn=0x0000000000255C58 string=0x0000000000255C5C "h\n@"
 *   insn=0x0000000000255C78 string=0x0000000000255C7C ""
 *   insn=0x0000000000255C7C string=0x0000000000255C80 "Q@"
 *   insn=0x0000000000255C84 string=0x0000000000255C88 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::BreakableObjectComponent::Update(__int64 this, float a2)
{
  __int64 v2; // x19
  float v3; // s0
  __int64 v4; // x8
  _QWORD *v5; // x21
  _QWORD *i; // x22

  v2 = this;
  if ( *(_BYTE *)(this + 144) )
  {
    v3 = *(float *)(this + 148) - a2;
    *(float *)(this + 148) = v3;
    if ( v3 < 0.001 )
    {
      v4 = *(_QWORD *)(this + 16);
      v5 = *(_QWORD **)(v4 + 192);
      for ( i = *(_QWORD **)(v4 + 200); i != v5; ++v5 )
      {
        this = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *(__fastcall *)(Caver::ModelComponent *))(Caver::ModelComponent *__hidden)))(*(_QWORD *)*v5 + 160LL))(
                 *v5,
                 Caver::ModelComponent::Interface);
        if ( (this & 1) != 0 )
          *(_BYTE *)(*v5 + 309LL) = 0;
      }
      *(_BYTE *)(v2 + 144) = 0;
    }
  }
  return this;
}

