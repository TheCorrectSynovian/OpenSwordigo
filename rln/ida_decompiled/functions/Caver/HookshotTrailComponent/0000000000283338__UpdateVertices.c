/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000283338
 * Mangled: _ZN5Caver22HookshotTrailComponent14UpdateVerticesEv
 * Demangled: Caver::HookshotTrailComponent::UpdateVertices(void)
 *
 * Callers: 1
 *   0x00000000001F6600  Caver::HookshotTrailComponent::UpdateVertices(void)
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8E10  Caver::Vector2::Normalize(void)
 *   0x0000000000200F90  Caver::Color::FromFloatColor(Caver::FloatColor const&)
 *
 * Referenced strings: 43
 *   insn=0x000000000028334C string=0x0000000000283350 "T"
 *   insn=0x0000000000283360 string=0x0000000000283364 "`"
 *   insn=0x0000000000283364 string=0x0000000000283368 "aBJ"
 *   insn=0x0000000000283374 string=0x0000000000283378 "h"
 *   insn=0x0000000000283374 string=0x00000000001F8E10 "0'"
 *   insn=0x0000000000283380 string=0x0000000000283384 "`"
 *   insn=0x0000000000283388 string=0x000000000028338C "`"
 *   insn=0x000000000028338C string=0x0000000000283390 "A"
 *   insn=0x0000000000283394 string=0x0000000000283398 "H@!"
 *   insn=0x000000000028339C string=0x00000000002833A0 " "
 *   insn=0x00000000002833A4 string=0x00000000002833A8 "h"
 *   insn=0x00000000002833EC string=0x00000000002833F0 ","
 *   insn=0x000000000028340C string=0x0000000000283410 "L"
 *   insn=0x000000000028342C string=0x0000000000283430 "l"
 *   insn=0x0000000000283438 string=0x000000000028343C "+"
 *   insn=0x000000000028345C string=0x0000000000283460 "k"
 *   insn=0x0000000000283470 string=0x0000000000283474 ""
 *   insn=0x0000000000283474 string=0x0000000000283478 "J"
 *   insn=0x0000000000283478 string=0x000000000028347C ")!"
 *   insn=0x0000000000283480 string=0x0000000000283484 "6"
 *   insn=0x0000000000283484 string=0x0000000000283488 "mF@"
 *   insn=0x0000000000283488 string=0x000000000028348C "wyh"
 *   insn=0x00000000002834B8 string=0x00000000002834BC "9+6"
 *   insn=0x00000000002834F8 string=0x00000000002834FC "1"
 *   insn=0x0000000000283510 string=0x0000000000283514 "?"
 *   insn=0x000000000028351C string=0x0000000000283520 "1"
 *   insn=0x0000000000283520 string=0x0000000000283524 "_"
 *   insn=0x0000000000283528 string=0x000000000028352C "!"
 *   insn=0x000000000028352C string=0x0000000000283530 "R"
 *   insn=0x000000000028353C string=0x0000000000283540 "?"
 *   insn=0x0000000000283540 string=0x0000000000283544 "!"
 *   insn=0x0000000000283544 string=0x0000000000283548 "_"
 *   insn=0x000000000028354C string=0x0000000000283550 "@"
 *   insn=0x0000000000283550 string=0x0000000000283554 "2"
 *   insn=0x0000000000283578 string=0x000000000028357C "mF@"
 *   insn=0x0000000000283584 string=0x0000000000283588 "."
 *   insn=0x0000000000283590 string=0x0000000000283594 "mF@"
 *   insn=0x0000000000283594 string=0x0000000000283598 "_"
 *   insn=0x00000000002835A0 string=0x00000000002835A4 "mF@"
 *   insn=0x00000000002835A8 string=0x00000000002835AC "!"
 *   insn=0x00000000002835AC string=0x0000000000283470 "4@"
 *   insn=0x00000000002835BC string=0x00000000002835D8 ">"
 *   insn=0x00000000002835D8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::HookshotTrailComponent::UpdateVertices(Caver::HookshotTrailComponent *this)
{
  float v2; // w22
  float v8; // s8
  int v9; // w21
  unsigned int v10; // s7
  unsigned int v11; // s4
  unsigned int v12; // s5
  float v13; // s4
  int v14; // w12
  unsigned int v15; // s6
  float v16; // s5
  float v17; // s16
  int v18; // w12
  float v19; // s6
  float v20; // s17
  int v21; // w12
  float v22; // s7
  float v23; // s18
  int v24; // w12
  __int64 v25; // x8
  float v26; // s20
  float *v27; // x9
  __int64 i; // x10
  float v29; // s22
  float v30; // s23
  float v31; // s21
  float v32; // s24
  float v33; // s25
  float v34; // s21
  float v35; // s26
  float v36; // s27
  __int64 v37; // x13
  float v38; // s28
  float v39; // s24
  float v40; // s25
  float v41; // s21
  float v42; // s27
  float v43; // s20
  int v44; // w14
  int v45; // w15
  int v46; // w16
  int v47; // w17
  int v48; // w18
  float v49; // s25
  int v50; // w0
  float v51; // s23
  int v52; // w1
  int v53; // w2
  unsigned __int16 v54; // w18
  __int64 result; // x0
  int v56; // w18
  int v57; // w14
  float v58; // [xsp+4h] [xbp-6Ch]
  char v59; // [xsp+10h] [xbp-60h]
  char v60; // [xsp+11h] [xbp-5Fh]
  char v61; // [xsp+12h] [xbp-5Eh]
  char v62; // [xsp+13h] [xbp-5Dh]
  float32x2_t v63; // [xsp+18h] [xbp-58h] BYREF
  _DWORD v64[2]; // [xsp+20h] [xbp-50h] BYREF
  float32x2_t v65; // [xsp+28h] [xbp-48h]
  unsigned __int64 v66; // [xsp+30h] [xbp-40h]
  __int64 v67; // [xsp+38h] [xbp-38h]

  v67 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v63.n64_u64[0] = vsub_f32(*(float32x2_t *)((char *)this + 172), *(float32x2_t *)((char *)this + 164)).n64_u64[0];
  Caver::Vector2::Normalize((Caver::Vector2 *)&v63);
  v2 = *((float *)this + 42);
  __asm { FMOV            V1.2S, #15.0 }
  v64[0] = *((_DWORD *)this + 41);
  *(float *)&v64[1] = v2;
  v58 = v63.n64_f32[1];
  v8 = -v63.n64_f32[0];
  v65.n64_u64[0] = *(unsigned __int64 *)((char *)this + 172);
  v66 = vadd_f32(vmul_f32(v63, _D1), v65).n64_u64[0];
  v9 = *(_DWORD *)(*((_QWORD *)this + 5) + 120LL);
  Caver::Color::FromFloatColor();
  LOBYTE(v11) = v59;
  LOBYTE(v12) = v60;
  v13 = (float)v11;
  v14 = (int)(float)(v13 + v13);
  LOBYTE(v15) = v61;
  v16 = (float)v12;
  if ( v14 >= 255 )
    LOBYTE(v14) = -1;
  v17 = (float)(unsigned __int8)v14;
  v18 = (int)(float)(v16 + v16);
  LOBYTE(v10) = v62;
  v19 = (float)v15;
  if ( v18 >= 255 )
    LOBYTE(v18) = -1;
  v20 = (float)(unsigned __int8)v18;
  v21 = (int)(float)(v19 + v19);
  v22 = (float)v10;
  if ( v21 >= 255 )
    LOBYTE(v21) = -1;
  v23 = (float)(unsigned __int8)v21;
  v24 = (int)(float)(v22 + v22);
  if ( v24 >= 255 )
    LOBYTE(v24) = -1;
  v25 = 0;
  v26 = v2;
  v27 = (float *)v64;
  for ( i = 60; ; i += 64 )
  {
    v29 = *v27;
    v30 = flt_588AF0[v25];
    v31 = (float)((float)(int)v25 * 0.5) + 4.0;
    v32 = v31 * 0.3;
    v33 = v58 * v31;
    v34 = v31 * v8;
    v35 = *v27 - v33;
    v36 = v26 - v34;
    v37 = *((_QWORD *)this + 17) + i;
    v38 = v58 * v32;
    v39 = v32 * v8;
    v40 = v33 + *v27;
    v41 = v34 + v26;
    *(float *)(v37 - 60) = v35;
    *(float *)(v37 - 56) = v36;
    v42 = v26 - v39;
    v43 = v39 + v26;
    v44 = (int)(float)(v30 * v13);
    *(float *)(v37 - 12) = v40;
    *(float *)(v37 - 8) = v41;
    v45 = (int)(float)(v30 * v16);
    v46 = (int)(float)(v30 * v19);
    if ( v44 >= 255 )
      LOBYTE(v44) = -1;
    v47 = (int)(float)(v30 * v22);
    if ( v45 >= 255 )
      LOBYTE(v45) = -1;
    v48 = (int)(float)(v30 * v17);
    if ( v46 >= 255 )
      LOBYTE(v46) = -1;
    v49 = v30 * v23;
    v50 = (int)(float)(v30 * v20);
    if ( v47 >= 255 )
      LOBYTE(v47) = -1;
    v51 = v30 * (float)(unsigned __int8)v24;
    v52 = (int)v49;
    if ( v48 >= 255 )
      LOBYTE(v48) = -1;
    v53 = (int)v51;
    if ( v50 >= 255 )
      LOBYTE(v50) = -1;
    if ( v52 >= 255 )
      LOBYTE(v52) = -1;
    v54 = (unsigned __int8)v48 | ((unsigned __int8)v50 << 8);
    result = v53 >= 255 ? 255LL : (unsigned int)v53;
    v56 = v54 | ((unsigned __int8)v52 << 16) & 0xFFFFFF | ((unsigned __int8)result << 24);
    *(_DWORD *)(v37 - 36) = v9;
    *(_DWORD *)(v37 - 20) = v9;
    *(_DWORD *)(v37 - 4) = v9;
    *(float *)(v37 - 44) = v29 - v38;
    *(float *)(v37 - 40) = v42;
    *(float *)(v37 - 28) = v38 + v29;
    *(float *)(v37 - 24) = v43;
    *(_DWORD *)(v37 - 52) = v9;
    *(_DWORD *)(v37 - 48) = v56;
    v57 = (unsigned __int8)v44
        | (unsigned __int16)((unsigned __int8)v45 << 8)
        | ((unsigned __int8)v46 << 16) & 0xFFFFFF
        | ((unsigned __int8)v47 << 24);
    *(_DWORD *)(*((_QWORD *)this + 17) + i - 32) = v57;
    *(_DWORD *)(*((_QWORD *)this + 17) + i - 16) = v57;
    *(_DWORD *)(*((_QWORD *)this + 17) + i) = v56;
    if ( i == 188 )
      break;
    v26 = v27[3];
    ++v25;
    v27 += 2;
  }
  return result;
}

