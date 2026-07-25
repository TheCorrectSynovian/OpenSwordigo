/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AB244
 * Mangled: _ZN5Caver15GUITexturedRect16CreateWithBoundsERKNS_9RectangleEb
 * Demangled: Caver::GUITexturedRect::CreateWithBounds(Caver::Rectangle const&,bool)
 *
 * Callers: 1
 *   0x00000000001F95E0  Caver::GUITexturedRect::CreateWithBounds(Caver::Rectangle const&,bool)
 *
 * Callees: 0
 *
 * Referenced strings: 21
 *   insn=0x00000000004AB248 string=0x0000000000583734 "o"
 *   insn=0x00000000004AB24C string=0x00000000004AB250 "H"
 *   insn=0x00000000004AB258 string=0x00000000004AB25C " "
 *   insn=0x00000000004AB260 string=0x00000000004AB264 ""
 *   insn=0x00000000004AB264 string=0x00000000004AB268 ""
 *   insn=0x00000000004AB26C string=0x00000000004AB270 ""
 *   insn=0x00000000004AB274 string=0x00000000004AB278 "\t"
 *   insn=0x00000000004AB27C string=0x00000000004AB280 "d"
 *   insn=0x00000000004AB288 string=0x00000000004AB28C "c(%"
 *   insn=0x00000000004AB294 string=0x00000000004AB298 " "
 *   insn=0x00000000004AB298 string=0x00000000004AB29C "H"
 *   insn=0x00000000004AB2B0 string=0x00000000004AB2B4 "B"
 *   insn=0x00000000004AB2B4 string=0x00000000004AB2DC " "
 *   insn=0x00000000004AB2C4 string=0x00000000004AB2C8 "a"
 *   insn=0x00000000004AB2D4 string=0x00000000004AB2D8 ""
 *   insn=0x00000000004AB2DC string=0x00000000004AB2E0 "@( "
 *   insn=0x00000000004AB2E0 string=0x00000000004AB2E4 "B"
 *   insn=0x00000000004AB2E4 string=0x00000000004AB2E8 "\t"
 *   insn=0x00000000004AB2E8 string=0x00000000004AB2EC "\nD"
 *   insn=0x00000000004AB2EC string=0x00000000004AB2F0 "!(""
 *   insn=0x00000000004AB2F0 string=0x00000000004AB2F4 "\tT"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUITexturedRect::CreateWithBounds(__int64 result, _OWORD *a2, char a3)
{
  float v3; // s0
  float *v4; // x8
  float v5; // w11
  float v6; // w12
  float v7; // w9
  float v8; // w10
  float v9; // s1
  float v10; // s2
  float v11; // s0
  float v12; // s3
  float v13; // s1
  float v14; // s2
  float v15; // s4
  float v16; // s0
  float v17; // s1

  *(_OWORD *)(result + 12) = *a2;
  v3 = *(float *)(result + 20);
  *(_BYTE *)(result + 8) = a3 & 1;
  if ( v3 > 0.001 )
  {
    v4 = *(float **)result;
    if ( *(_QWORD *)result )
    {
      v5 = *(float *)(result + 12);
      v6 = *(float *)(result + 16);
      v7 = v4[23];
      v8 = v4[24];
      v10 = v4[25];
      v9 = v4[26];
      v11 = v3 + v5;
      v12 = *(float *)(result + 24) + v6;
      *(_QWORD *)(result + 36) = LODWORD(v6);
      *(_DWORD *)(result + 80) = 0;
      *(float *)(result + 32) = v5;
      *(float *)(result + 72) = v5;
      *(_QWORD *)(result + 56) = LODWORD(v6);
      *(float *)(result + 52) = v11;
      *(float *)(result + 76) = v12;
      *(float *)(result + 92) = v11;
      *(float *)(result + 96) = v12;
      *(_DWORD *)(result + 100) = 0;
      if ( (a3 & 1) != 0 )
      {
        v13 = v4[21];
        v14 = v4[22];
        v15 = v5 / v13;
        v16 = v11 / v13;
        v17 = v12 / v14;
        *(float *)(result + 44) = v15;
        *(float *)(result + 48) = v6 / v14;
        *(float *)(result + 68) = v6 / v14;
        *(float *)(result + 84) = v15;
      }
      else
      {
        v16 = v10 + v7;
        *(float *)(result + 44) = v7;
        *(float *)(result + 48) = v8;
        *(float *)(result + 68) = v8;
        v17 = v9 + v8;
        *(float *)(result + 84) = v7;
      }
      *(float *)(result + 64) = v16;
      *(float *)(result + 88) = v17;
      *(float *)(result + 104) = v16;
      *(float *)(result + 108) = v17;
    }
  }
  return result;
}

