/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004541D0
 * Mangled: _ZN5Caver14ParticleSystem9SetVertexEiRKNS_7Vector3ERKNS_7Vector2ERKNS_5ColorE
 * Demangled: Caver::ParticleSystem::SetVertex(int,Caver::Vector3 const&,Caver::Vector2 const&,Caver::Color const&)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 24
 *   insn=0x00000000004541D0 string=0x00000000004541D4 "\t0"
 *   insn=0x00000000004541D4 string=0x00000000004541D8 "J"
 *   insn=0x00000000004541D8 string=0x00000000004541DC "+|@"
 *   insn=0x00000000004541DC string=0x00000000004541E0 "(!"
 *   insn=0x00000000004541E0 string=0x00000000004541E4 "\n"
 *   insn=0x00000000004541E4 string=0x00000000004541E8 "I@"
 *   insn=0x00000000004541E8 string=0x00000000004541EC "\t\t"
 *   insn=0x00000000004541EC string=0x00000000004541F0 "i"
 *   insn=0x00000000004541F0 string=0x00000000004541F4 "\t"
 *   insn=0x00000000004541F4 string=0x00000000004541F8 "\t"
 *   insn=0x00000000004541F8 string=0x00000000004541FC "\t"
 *   insn=0x0000000000454210 string=0x0000000000454214 "!"
 *   insn=0x0000000000454218 string=0x000000000045421C "@ "
 *   insn=0x000000000045421C string=0x0000000000454220 "a!"
 *   insn=0x0000000000454228 string=0x000000000045422C "\t"
 *   insn=0x000000000045422C string=0x0000000000454230 "*"
 *   insn=0x0000000000454230 string=0x0000000000454234 "B$"
 *   insn=0x0000000000454238 string=0x000000000045423C "c$"
 *   insn=0x000000000045423C string=0x0000000000454240 "K"
 *   insn=0x0000000000454240 string=0x0000000000454244 "I"
 *   insn=0x0000000000454244 string=0x0000000000454248 "l"
 *   insn=0x0000000000454248 string=0x000000000045424C "i"
 *   insn=0x0000000000454250 string=0x0000000000454254 "\t"
 *   insn=0x000000000045425C string=0x0000000000454260 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ParticleSystem::SetVertex(
        __int64 result,
        int a2,
        __int64 a3,
        _QWORD *a4,
        _BYTE *a5,
        float a6,
        float a7,
        double a8,
        double a9,
        float a10,
        float a11)
{
  __int64 v11; // x8
  int v12; // w9

  v11 = *(_QWORD *)(result + 64) + *(int *)(result + 48) * (__int64)a2;
  *(_QWORD *)v11 = *(_QWORD *)a3;
  *(_DWORD *)(v11 + 8) = *(_DWORD *)(a3 + 8);
  *(_QWORD *)(v11 + 12) = *a4;
  if ( *(_BYTE *)(result + 184) )
  {
    LOBYTE(a6) = *a5;
    LOBYTE(a7) = a5[1];
    LOBYTE(a10) = a5[2];
    LOBYTE(a11) = a5[3];
    v12 = (unsigned __int8)(int)(float)(*(float *)(result + 168) * (float)LODWORD(a6))
        | (unsigned __int16)((unsigned __int8)(int)(float)(*(float *)(result + 172) * (float)LODWORD(a7)) << 8)
        | ((unsigned __int8)(int)(float)(*(float *)(result + 176) * (float)LODWORD(a10)) << 16) & 0xFFFFFF
        | ((unsigned __int8)(int)(float)(*(float *)(result + 180) * (float)LODWORD(a11)) << 24);
  }
  else
  {
    v12 = *(_DWORD *)a5;
  }
  *(_DWORD *)(v11 + 20) = v12;
  return result;
}

