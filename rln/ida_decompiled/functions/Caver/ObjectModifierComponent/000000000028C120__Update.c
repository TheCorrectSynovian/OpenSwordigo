/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028C120
 * Mangled: _ZN5Caver23ObjectModifierComponent6UpdateEf
 * Demangled: Caver::ObjectModifierComponent::Update(float)
 *
 * Callers: 1
 *   0x00000000001FCE20  Caver::ObjectModifierComponent::Update(float)
 *
 * Callees: 0
 *
 * Referenced strings: 38
 *   insn=0x000000000028C124 string=0x000000000028C128 ""
 *   insn=0x000000000028C12C string=0x000000000028C130 "?"
 *   insn=0x000000000028C130 string=0x000000000028C134 "\n"
 *   insn=0x000000000028C134 string=0x000000000028C138 "A%@"
 *   insn=0x000000000028C138 string=0x000000000028C13C " ( "
 *   insn=0x000000000028C14C string=0x000000000028C150 "C!"
 *   insn=0x000000000028C160 string=0x000000000028C164 "B8#"
 *   insn=0x000000000028C164 string=0x000000000028C168 "!"
 *   insn=0x000000000028C170 string=0x000000000028C174 "D8#"
 *   insn=0x000000000028C174 string=0x000000000028C178 "$$"
 *   insn=0x000000000028C178 string=0x000000000028C17C "c($"
 *   insn=0x000000000028C17C string=0x000000000028C180 "cX""
 *   insn=0x000000000028C184 string=0x000000000028C188 "@@"
 *   insn=0x000000000028C190 string=0x000000000028C194 "@8!"
 *   insn=0x000000000028C198 string=0x000000000028C19C "!"
 *   insn=0x000000000028C1A0 string=0x000000000028C1A4 "B"
 *   insn=0x000000000028C1A8 string=0x000000000028C1AC "c"
 *   insn=0x000000000028C1B8 string=0x000000000028C1BC ")"
 *   insn=0x000000000028C1C0 string=0x000000000028C1C4 "J"
 *   insn=0x000000000028C1C8 string=0x000000000028C1CC "?"
 *   insn=0x000000000028C1D0 string=0x000000000028C1D4 "l"
 *   insn=0x000000000028C1D4 string=0x000000000028C1D8 ")"
 *   insn=0x000000000028C1D8 string=0x000000000028C1DC "_"
 *   insn=0x000000000028C1DC string=0x000000000028C1E0 ""
 *   insn=0x000000000028C1E0 string=0x000000000028C1E4 "J"
 *   insn=0x000000000028C1F4 string=0x000000000028C1F8 ")"
 *   insn=0x000000000028C1F8 string=0x000000000028C1FC "i"
 *   insn=0x000000000028C200 string=0x000000000028C204 ""
 *   insn=0x000000000028C204 string=0x000000000028C208 "I"
 *   insn=0x000000000028C208 string=0x000000000028C20C "\t"
 *   insn=0x000000000028C20C string=0x000000000028C210 "@@"
 *   insn=0x000000000028C214 string=0x000000000028C218 "\t"
 *   insn=0x000000000028C224 string=0x000000000028C228 "m"
 *   insn=0x000000000028C228 string=0x000000000028C22C "p@"
 *   insn=0x000000000028C234 string=0x000000000028C238 ""
 *   insn=0x000000000028C23C string=0x000000000028C240 "\tA"
 *   insn=0x000000000028C240 string=0x000000000028C244 "@@"
 *   insn=0x000000000028C244 string=0x000000000028C248 "H"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ObjectModifierComponent::Update(__int64 this, float a2)
{
  int v2; // w9
  __int64 v3; // x8
  float v4; // s0
  float v5; // s2
  float v6; // s1
  __int64 v7; // x8
  int v8; // w9
  int v9; // w10
  int v10; // w12
  unsigned __int8 v11; // w11
  __int64 v12; // x8

  v2 = *(_DWORD *)(this + 112);
  if ( v2 )
  {
    v3 = *(_QWORD *)(this + 40);
    v4 = *(float *)(*(_QWORD *)(v3 + 32) + 36LL) + *(float *)(this + 116);
    *(float *)(this + 116) = v4;
    if ( v2 == 1 )
    {
      v5 = *(float *)(this + 120);
      v6 = 0.0;
      if ( v4 > (float)(v5 * 0.5) )
        v6 = (float)(v4 - (float)(v5 * 0.5)) / (float)(v5 - (float)(v5 * 0.5));
      *(float *)(v3 + 64) = fminf(*(float *)(this + 124) + (float)(v6 * (float)(1.0 - *(float *)(this + 124))), 1.0);
      v7 = *(_QWORD *)(this + 128);
      if ( v7 )
      {
        v8 = (int)(float)((float)(1.0 - v6) * 35.0);
        v9 = (int)(float)((float)(1.0 - v6) * 91.0);
        v10 = (int)(float)((float)(1.0 - v6) * 168.0);
        if ( v8 >= 255 )
          LOBYTE(v8) = -1;
        if ( v9 >= 255 )
          LOBYTE(v9) = -1;
        if ( v10 >= 255 )
          LOBYTE(v10) = -1;
        if ( (int)(float)((float)(1.0 - v6) * 178.0) >= 255 )
          v11 = -1;
        else
          v11 = (int)(float)((float)(1.0 - v6) * 178.0);
        *(_DWORD *)(v7 + 310) = (unsigned __int8)v8
                              | (v11 << 24)
                              | ((unsigned __int8)v10 << 16)
                              | ((unsigned __int8)v9 << 8);
        *(_BYTE *)(*(_QWORD *)(this + 128) + 309LL) = 1;
        v4 = *(float *)(this + 116);
      }
    }
    if ( v4 > *(float *)(this + 120) )
    {
      if ( *(_DWORD *)(this + 112) == 1 )
      {
        *(_DWORD *)(*(_QWORD *)(this + 40) + 64LL) = 1065353216;
        v12 = *(_QWORD *)(this + 128);
        if ( v12 )
          *(_BYTE *)(v12 + 309) = 0;
      }
      *(_DWORD *)(this + 112) = 0;
    }
  }
  return this;
}

