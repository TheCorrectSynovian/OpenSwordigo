/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AAFA4
 * Mangled: _ZN5Caver15GUITexturedRect16CreateVertexDataEv
 * Demangled: Caver::GUITexturedRect::CreateVertexData(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 17
 *   insn=0x00000000004AAFA8 string=0x00000000004AAFAC ""
 *   insn=0x00000000004AAFB0 string=0x00000000004AAFB4 "\t"
 *   insn=0x00000000004AAFB8 string=0x00000000004AAFBC " "
 *   insn=0x00000000004AAFBC string=0x00000000004AAFC0 "H"
 *   insn=0x00000000004AAFC0 string=0x00000000004AAFC4 "d"
 *   insn=0x00000000004AAFC4 string=0x00000000004AAFC8 " @9"
 *   insn=0x00000000004AAFCC string=0x00000000004AAFD0 "C($"
 *   insn=0x00000000004AAFF0 string=0x00000000004AAFF4 "K"
 *   insn=0x00000000004AAFF4 string=0x00000000004AB01C """
 *   insn=0x00000000004AB000 string=0x00000000004AB004 "a"
 *   insn=0x00000000004AB004 string=0x00000000004AB008 "@"
 *   insn=0x00000000004AB014 string=0x00000000004AB018 "\t"
 *   insn=0x00000000004AB01C string=0x00000000004AB020 "!(""
 *   insn=0x00000000004AB020 string=0x00000000004AB024 "B"
 *   insn=0x00000000004AB024 string=0x00000000004AB028 "\t"
 *   insn=0x00000000004AB028 string=0x00000000004AB02C "\nD"
 *   insn=0x00000000004AB034 string=0x00000000004AB038 "\tT"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUITexturedRect::CreateVertexData(__int64 this)
{
  float *v1; // x8
  float v2; // w11
  float v3; // w12
  float v4; // s2
  float v5; // s6
  float v6; // w9
  float v7; // w10
  float v8; // s0
  float v9; // s1
  float v10; // s4
  int v11; // w11
  float v12; // s3
  float v13; // s2
  float v14; // s0
  float v15; // s6
  float v16; // s4
  float v17; // s1
  float v18; // s0

  v1 = *(float **)this;
  if ( *(_QWORD *)this )
  {
    v2 = *(float *)(this + 12);
    v3 = *(float *)(this + 16);
    v4 = *(float *)(this + 20);
    v5 = *(float *)(this + 24);
    v6 = v1[23];
    v7 = v1[24];
    v9 = v1[25];
    v8 = v1[26];
    *(float *)(this + 32) = v2;
    *(float *)(this + 72) = v2;
    v10 = v2;
    v11 = *(unsigned __int8 *)(this + 8);
    v12 = v4 + v10;
    v13 = v5 + v3;
    *(_QWORD *)(this + 36) = LODWORD(v3);
    *(_DWORD *)(this + 80) = 0;
    *(_QWORD *)(this + 56) = LODWORD(v3);
    *(float *)(this + 52) = v12;
    *(float *)(this + 76) = v5 + v3;
    *(float *)(this + 92) = v12;
    *(float *)(this + 96) = v5 + v3;
    *(_DWORD *)(this + 100) = 0;
    if ( v11 )
    {
      v14 = v1[21];
      v15 = v1[22];
      v16 = v10 / v14;
      v17 = v12 / v14;
      v18 = v13 / v15;
      *(float *)(this + 44) = v16;
      *(float *)(this + 48) = v3 / v15;
      *(float *)(this + 64) = v17;
      *(float *)(this + 68) = v3 / v15;
      *(float *)(this + 84) = v16;
    }
    else
    {
      v17 = v9 + v6;
      *(float *)(this + 44) = v6;
      *(float *)(this + 48) = v7;
      *(float *)(this + 68) = v7;
      v18 = v8 + v7;
      *(float *)(this + 64) = v17;
      *(float *)(this + 84) = v6;
    }
    *(float *)(this + 88) = v18;
    *(float *)(this + 104) = v17;
    *(float *)(this + 108) = v18;
  }
  return this;
}

