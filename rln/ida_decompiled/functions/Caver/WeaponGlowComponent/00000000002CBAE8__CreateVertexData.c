/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CBAE8
 * Mangled: _ZN5Caver19WeaponGlowComponent16CreateVertexDataEiiiiPfS1_
 * Demangled: Caver::WeaponGlowComponent::CreateVertexData(int,int,int,int,float *,float *)
 *
 * Callers: 1
 *   0x00000000002005C0  Caver::WeaponGlowComponent::CreateVertexData(int,int,int,int,float *,float *)
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000200F90  Caver::Color::FromFloatColor(Caver::FloatColor const&)
 *
 * Referenced strings: 110
 *   insn=0x00000000002CBB00 string=0x00000000002CBB04 "Z"
 *   insn=0x00000000002CBB04 string=0x00000000002CBB08 "H"
 *   insn=0x00000000002CBB34 string=0x00000000002CBB38 "!"
 *   insn=0x00000000002CBB3C string=0x00000000002CBB40 "!"
 *   insn=0x00000000002CBB58 string=0x00000000002CBB5C ""
 *   insn=0x00000000002CBB64 string=0x00000000002CBD78 "\t"
 *   insn=0x00000000002CBB74 string=0x00000000002CBB78 " "
 *   insn=0x00000000002CBB8C string=0x00000000002CBB90 "\t"
 *   insn=0x00000000002CBB90 string=0x00000000002CBB94 "#"
 *   insn=0x00000000002CBBAC string=0x00000000002CBBB0 "1"
 *   insn=0x00000000002CBBBC string=0x00000000002CBBC0 "2"
 *   insn=0x00000000002CBBCC string=0x00000000002CBBD0 "R"
 *   insn=0x00000000002CBBD4 string=0x00000000002CBBD8 "@~<)F"
 *   insn=0x00000000002CBBD8 string=0x00000000002CBBDC "F"
 *   insn=0x00000000002CBBEC string=0x00000000002CBBF0 "@"
 *   insn=0x00000000002CBBF0 string=0x00000000002CBBF4 "B"
 *   insn=0x00000000002CBC04 string=0x00000000002CBC08 "@"
 *   insn=0x00000000002CBC08 string=0x00000000002CBC0C "B"
 *   insn=0x00000000002CBC14 string=0x00000000002CBC18 "_"
 *   insn=0x00000000002CBC20 string=0x00000000002CBC24 "@~"
 *   insn=0x00000000002CBC24 string=0x00000000002CBC28 "F"
 *   insn=0x00000000002CBC28 string=0x00000000002CBC2C "2"
 *   insn=0x00000000002CBC30 string=0x00000000002CBC34 "R"
 *   insn=0x00000000002CBC34 string=0x00000000002CBC38 "@"
 *   insn=0x00000000002CBC38 string=0x00000000002CBC3C "2"
 *   insn=0x00000000002CBC3C string=0x00000000002CBC40 "R"
 *   insn=0x00000000002CBC40 string=0x00000000002CBC44 "@"
 *   insn=0x00000000002CBC44 string=0x00000000002CBC48 "2"
 *   insn=0x00000000002CBC48 string=0x00000000002CBC4C "R"
 *   insn=0x00000000002CBC4C string=0x00000000002CBC50 "_"
 *   insn=0x00000000002CBC50 string=0x00000000002CBC54 "J"
 *   insn=0x00000000002CBC54 string=0x00000000002CBD5C "k"
 *   insn=0x00000000002CBC58 string=0x00000000002CBC5C "a"
 *   insn=0x00000000002CBC60 string=0x00000000002CBC64 ""|@"
 *   insn=0x00000000002CBC64 string=0x00000000002CBC68 "@j"8"
 *   insn=0x00000000002CBC74 string=0x00000000002CBC78 "%"
 *   insn=0x00000000002CBC78 string=0x00000000002CBC7C "R"
 *   insn=0x00000000002CBC7C string=0x00000000002CBC80 "C"
 *   insn=0x00000000002CBC84 string=0x00000000002CBC88 "s"
 *   insn=0x00000000002CBC88 string=0x00000000002CBC8C "R"
 *   insn=0x00000000002CBC8C string=0x00000000002CBC90 "D\n"
 *   insn=0x00000000002CBC94 string=0x00000000002CBC98 """
 *   insn=0x00000000002CBC98 string=0x00000000002CBC9C "D"
 *   insn=0x00000000002CBCA0 string=0x00000000002CBCA4 """
 *   insn=0x00000000002CBCA4 string=0x00000000002CBCA8 "C"
 *   insn=0x00000000002CBCB0 string=0x00000000002CBCB4 "D"
 *   insn=0x00000000002CBCB4 string=0x00000000002CBCB8 "D"
 *   insn=0x00000000002CBCBC string=0x00000000002CBCC0 "%"
 *   insn=0x00000000002CBCC0 string=0x00000000002CBCC4 "C"
 *   insn=0x00000000002CBCCC string=0x00000000002CBCD0 "%"
 *   insn=0x00000000002CBCD4 string=0x00000000002CBCD8 "C"
 *   insn=0x00000000002CBCDC string=0x00000000002CBCE0 "% "
 *   insn=0x00000000002CBCE0 string=0x00000000002CBCE4 "D"
 *   insn=0x00000000002CBCE8 string=0x00000000002CBCEC "%$"
 *   insn=0x00000000002CBCEC string=0x00000000002CBCF0 "D"
 *   insn=0x00000000002CBCF4 string=0x00000000002CBCF8 "$("
 *   insn=0x00000000002CBCF8 string=0x00000000002CBCFC "%,"
 *   insn=0x00000000002CBCFC string=0x00000000002CBD00 "C"
 *   insn=0x00000000002CBD04 string=0x00000000002CBD08 "D"
 *   insn=0x00000000002CBD08 string=0x00000000002CBD0C "D"
 *   insn=0x00000000002CBD10 string=0x00000000002CBD14 "%0"
 *   insn=0x00000000002CBD14 string=0x00000000002CBD18 "C"
 *   insn=0x00000000002CBD1C string=0x00000000002CBD20 "#4"
 *   insn=0x00000000002CBD20 string=0x00000000002CBD24 "@"
 *   insn=0x00000000002CBD28 string=0x00000000002CBD2C "#8"
 *   insn=0x00000000002CBD2C string=0x00000000002CBD30 "D"
 *   insn=0x00000000002CBD34 string=0x00000000002CBD38 "#<"
 *   insn=0x00000000002CBD38 string=0x00000000002CBD3C "D"
 *   insn=0x00000000002CBD40 string=0x00000000002CBD44 "#@"
 *   insn=0x00000000002CBD44 string=0x00000000002CBD48 "!D"
 *   insn=0x00000000002CBD48 string=0x00000000002CBD4C "@"
 *   insn=0x00000000002CBD50 string=0x00000000002CBD54 "@"
 *   insn=0x00000000002CBD54 string=0x00000000002CBD58 "@"
 *   insn=0x00000000002CBD5C string=0x00000000002CBD60 "J"
 *   insn=0x00000000002CBD64 string=0x00000000002CBD68 "1"
 *   insn=0x00000000002CBD74 string=0x00000000002CBD80 ")"
 *   insn=0x00000000002CBD78 string=0x00000000002CBD7C "#"
 *   insn=0x00000000002CBD84 string=0x00000000002CBD88 "k"
 *   insn=0x00000000002CBD88 string=0x00000000002CBD8C "l}@"
 *   insn=0x00000000002CBD8C string=0x00000000002CBD90 ")"
 *   insn=0x00000000002CBD90 string=0x00000000002CBD94 "*}"
 *   insn=0x00000000002CBD94 string=0x00000000002CBD98 "?"
 *   insn=0x00000000002CBD98 string=0x00000000002CBD9C "\t"
 *   insn=0x00000000002CBDA0 string=0x00000000002CBDA4 "*i,8\t"
 *   insn=0x00000000002CBDA4 string=0x00000000002CBDA8 "\t"
 *   insn=0x00000000002CBDAC string=0x00000000002CBDB0 ")"
 *   insn=0x00000000002CBDB0 string=0x00000000002CBDB4 "*"
 *   insn=0x00000000002CBDB4 string=0x00000000002CBDB8 "\t"
 *   insn=0x00000000002CBDB8 string=0x00000000002CBDBC ")"
 *   insn=0x00000000002CBDBC string=0x00000000002CBDC0 "7\t"
 *   insn=0x00000000002CBDC0 string=0x00000000002CBDC4 "\t"
 *   insn=0x00000000002CBDC4 string=0x00000000002CBDC8 "l"
 *   insn=0x00000000002CBDC8 string=0x00000000002CBDCC "*"
 *   insn=0x00000000002CBDCC string=0x00000000002CBDD0 "\t"
 *   insn=0x00000000002CBDD4 string=0x00000000002CBDD8 "l"
 *   insn=0x00000000002CBDD8 string=0x00000000002CBDDC "*"
 *   insn=0x00000000002CBDDC string=0x00000000002CBDE0 "\t"
 *   insn=0x00000000002CBDE0 string=0x00000000002CBDE4 "l"
 *   insn=0x00000000002CBDE4 string=0x00000000002CBDE8 "7"
 *   insn=0x00000000002CBDE8 string=0x00000000002CBDEC "\t"
 *   insn=0x00000000002CBDEC string=0x00000000002CBDF0 "l"
 *   insn=0x00000000002CBDF0 string=0x00000000002CBDF4 "*"
 *   insn=0x00000000002CBDF4 string=0x00000000002CBDF8 "\t"
 *   insn=0x00000000002CBDFC string=0x00000000002CBE00 "l"
 *   insn=0x00000000002CBE00 string=0x00000000002CBE04 "*"
 *   insn=0x00000000002CBE04 string=0x00000000002CBE08 ""
 *   insn=0x00000000002CBE08 string=0x00000000002CBE0C "i!"
 *   insn=0x00000000002CBE10 string=0x00000000002CBE14 "H"
 *   insn=0x00000000002CBE20 string=0x00000000002CBE40 "$"
 *   insn=0x00000000002CBE40 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::WeaponGlowComponent::CreateVertexData(
        Caver::WeaponGlowComponent *this,
        int a2,
        int a3,
        int a4,
        int a5,
        float *a6,
        float *a7)
{
  float v14; // s0
  unsigned __int64 v15; // x10
  __int64 v16; // x11
  _QWORD *v17; // x9
  _QWORD *v18; // x8
  float v19; // s2
  __int64 v20; // x17
  __int64 v21; // x18
  float v22; // s6
  float v23; // s6
  float v24; // s6
  float v25; // s6
  float v26; // w0
  int v27; // w1
  __int64 v28; // x2
  char v29; // w3
  char v30; // w4
  int v31; // w5
  char v32; // w4
  char v33; // w3
  char v34; // w0
  int v35; // w11
  __int64 v36; // x9
  int v37; // [xsp+14h] [xbp-4Ch]

  _ReadStatusReg(TPIDR_EL0);
  Caver::Color::FromFloatColor();
  if ( a5 <= 0 )
  {
    v17 = (_QWORD *)((char *)this + 184);
    v18 = (_QWORD *)((char *)this + 200);
  }
  else
  {
    v14 = (float)a2;
    v15 = 0;
    v16 = 0;
    v17 = (_QWORD *)((char *)this + 184);
    v18 = (_QWORD *)((char *)this + 200);
    v19 = (float)a2 * 0.0;
    v20 = 16LL * a3 + 32;
    do
    {
      v21 = *v17 + v20;
      v22 = (float)(a7[v15 / 4] * -0.5) * v14;
      *(float *)(v21 - 32) = a6[v15 / 4];
      *(_DWORD *)(v21 - 28) = 0;
      *(float *)(v21 - 24) = v22;
      v23 = (float)(a7[v15 / 4] * -0.2) * v14;
      *(float *)(v21 - 16) = a6[v15 / 4];
      *(float *)(v21 - 12) = v19;
      *(float *)(v21 - 8) = v23;
      v24 = (float)(a7[v15 / 4] * 0.2) * v14;
      *(float *)v21 = a6[v15 / 4];
      *(float *)(v21 + 4) = v19;
      *(float *)(v21 + 8) = v24;
      v25 = a7[v15 / 4];
      v26 = a6[v15 / 4];
      *(_DWORD *)(v21 - 20) = 0;
      *(float *)(v21 + 16) = v26;
      *(_DWORD *)(v21 + 20) = 0;
      *(float *)(v21 + 24) = (float)(v25 * 0.5) * v14;
      *(_DWORD *)(*v17 + v20 - 4) = v37;
      *(_DWORD *)(*v17 + v20 + 12) = v37;
      *(_DWORD *)(*v17 + v20 + 28) = 0;
      if ( v16 < a5 - 1 )
      {
        v27 = 3 * a4;
        v28 = 3 * a4;
        *(_BYTE *)(*v18 + v28) = a3 + v15;
        v29 = a3 + v15 + 1;
        v30 = a3 + v15 + 4;
        v31 = 3 * a4 + 5;
        *(_BYTE *)(*v18 + v28 + 1) = v29;
        a4 += 6;
        *(_BYTE *)(*v18 + v28 + 2) = v30;
        *(_BYTE *)(*v18 + v27 + 3) = v30;
        *(_BYTE *)(*v18 + v27 + 4) = v29;
        v32 = a3 + v15 + 5;
        *(_BYTE *)(*v18 + v31) = v32;
        *(_BYTE *)(*v18 + v27 + 6) = v29;
        v33 = a3 + v15 + 2;
        v34 = a3 + v15 + 3;
        *(_BYTE *)(*v18 + v27 + 7) = v33;
        *(_BYTE *)(*v18 + v27 + 8) = v32;
        *(_BYTE *)(*v18 + v27 + 9) = v32;
        *(_BYTE *)(*v18 + v27 + 10) = v33;
        *(_BYTE *)(*v18 + v27 + 11) = a3 + v15 + 6;
        *(_BYTE *)(*v18 + v27 + 12) = v33;
        *(_BYTE *)(*v18 + v27 + 13) = v34;
        *(_BYTE *)(*v18 + v27 + 14) = a3 + v15 + 6;
        *(_BYTE *)(*v18 + v27 + 15) = a3 + v15 + 6;
        *(_BYTE *)(*v18 + v27 + 16) = v34;
        *(_BYTE *)(*v18 + v27 + 17) = a3 + v15 + 7;
      }
      ++v16;
      v15 += 4LL;
      v20 += 64;
    }
    while ( a5 != v16 );
    a3 += 4 * (a5 - 1) + 4;
  }
  v35 = 3 * a4;
  v36 = *v17 + 16LL * a3;
  *(float *)v36 = a6[a5];
  *(_DWORD *)(v36 + 4) = 0;
  *(_QWORD *)(v36 + 8) = 0;
  *(_BYTE *)(*v18 + v35) = a3 - 4;
  *(_BYTE *)(*v18 + v35 + 1LL) = a3 - 3;
  *(_BYTE *)(*v18 + v35 + 2LL) = a3;
  *(_BYTE *)(*v18 + v35 + 3) = a3 - 3;
  *(_BYTE *)(*v18 + v35 + 4) = a3 - 2;
  *(_BYTE *)(*v18 + v35 + 5) = a3;
  *(_BYTE *)(*v18 + v35 + 6) = a3 - 2;
  *(_BYTE *)(*v18 + v35 + 7) = a3 - 1;
  *(_BYTE *)(*v18 + v35 + 8) = a3;
}

