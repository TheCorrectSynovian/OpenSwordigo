/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000238F7C
 * Mangled: _ZN5Caver14ShapeComponent9DrawShapeEPNS_16RenderingContextERKNS_5ShapeERKNS_7Matrix4E
 * Demangled: Caver::ShapeComponent::DrawShape(Caver::RenderingContext *,Caver::Shape const&,Caver::Matrix4 const&)
 *
 * Callers: 1
 *   0x00000000001FE640  Caver::ShapeComponent::DrawShape(Caver::RenderingContext *,Caver::Shape const&,Caver::Matrix4 const&)
 *
 * Callees: 10
 *   0x00000000001F3B30  Caver::RenderingContext::DrawArrays(int,int,int)
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F5730  Caver::Vector2::FromAngle(float)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001F8E10  Caver::Vector2::Normalize(void)
 *   0x00000000001FE920  Caver::RenderingContext::SetVertexAttribPointer(uint,int,Caver::DataType,int,void const*)
 *   0x00000000001FEBA0  Caver::RenderingContext::SetMatrix(Caver::Matrix4 const&)
 *   0x000000000023948C  Caver::ShapeComponent::~ShapeComponent()
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 97
 *   insn=0x0000000000238F98 string=0x0000000000238F9C "W"
 *   insn=0x0000000000238FC0 string=0x0000000000238FC4 "@\t"
 *   insn=0x0000000000238FC8 string=0x0000000000238FCC " "
 *   insn=0x0000000000238FD0 string=0x0000000000238FD4 "A!"
 *   insn=0x0000000000238FDC string=0x0000000000238FE0 "("
 *   insn=0x0000000000238FE0 string=0x0000000000238FE4 ")"
 *   insn=0x0000000000238FE4 string=0x0000000000238FE8 "("
 *   insn=0x0000000000238FF4 string=0x0000000000238FF8 "\t"
 *   insn=0x0000000000238FF8 string=0x0000000000238FFC "}"
 *   insn=0x0000000000238FFC string=0x0000000000239000 ")"
 *   insn=0x0000000000239004 string=0x0000000000239008 " "
 *   insn=0x0000000000239008 string=0x000000000023900C "Y"
 *   insn=0x000000000023900C string=0x0000000000239010 "("
 *   insn=0x000000000023900C string=0x00000000001F8570 "0'"
 *   insn=0x0000000000239010 string=0x0000000000239014 ")"
 *   insn=0x0000000000239018 string=0x000000000023901C ""
 *   insn=0x000000000023901C string=0x0000000000239020 ""
 *   insn=0x0000000000239028 string=0x000000000023902C "*@"
 *   insn=0x0000000000239034 string=0x0000000000239038 "K"
 *   insn=0x0000000000239040 string=0x0000000000239044 "K"
 *   insn=0x0000000000239044 string=0x0000000000239048 ")"
 *   insn=0x0000000000239048 string=0x000000000023904C "J!"
 *   insn=0x000000000023904C string=0x0000000000239050 "?"
 *   insn=0x0000000000239058 string=0x000000000023905C ""
 *   insn=0x0000000000239060 string=0x0000000000239064 "k\t"
 *   insn=0x0000000000239068 string=0x000000000023906C "6"
 *   insn=0x0000000000239074 string=0x0000000000239078 ">"
 *   insn=0x0000000000239078 string=0x000000000023907C "H"
 *   insn=0x000000000023907C string=0x0000000000239080 ""
 *   insn=0x000000000023908C string=0x0000000000239090 "\tpf"
 *   insn=0x0000000000239090 string=0x0000000000239094 "("
 *   insn=0x00000000002390B0 string=0x00000000001F5730 "P'"
 *   insn=0x00000000002390BC string=0x00000000002390C0 "9"
 *   insn=0x00000000002390C4 string=0x00000000002390C8 " "
 *   insn=0x00000000002390CC string=0x00000000002390D0 "?O"
 *   insn=0x0000000000239114 string=0x0000000000239118 """
 *   insn=0x0000000000239130 string=0x0000000000239134 "!(""
 *   insn=0x0000000000239170 string=0x0000000000239174 "o"
 *   insn=0x0000000000239174 string=0x00000000001F3B30 "P'"
 *   insn=0x0000000000239188 string=0x000000000023918C "i"
 *   insn=0x0000000000239198 string=0x0000000000239408 "t"
 *   insn=0x00000000002391A4 string=0x00000000002391A8 "\n"
 *   insn=0x00000000002391A8 string=0x00000000002391AC "J"
 *   insn=0x00000000002391AC string=0x00000000002391B0 ""
 *   insn=0x00000000002391B0 string=0x00000000002391B4 "I}"
 *   insn=0x00000000002391B4 string=0x00000000002391B8 ""
 *   insn=0x00000000002391C8 string=0x00000000002391CC "t"
 *   insn=0x00000000002391D0 string=0x00000000002391D4 "c"
 *   insn=0x00000000002391D4 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000002391F0 string=0x00000000002391F4 "k"
 *   insn=0x00000000002391F8 string=0x00000000002391FC "b"
 *   insn=0x00000000002391FC string=0x0000000000239200 ")"
 *   insn=0x0000000000239200 string=0x0000000000239204 "_A"
 *   insn=0x0000000000239204 string=0x0000000000239208 "_"
 *   insn=0x0000000000239208 string=0x000000000023920C "D( "
 *   insn=0x000000000023920C string=0x0000000000239210 "e( "
 *   insn=0x0000000000239210 string=0x0000000000239214 "B(!"
 *   insn=0x0000000000239214 string=0x0000000000239218 "c(!"
 *   insn=0x0000000000239218 string=0x000000000023921C "_"
 *   insn=0x000000000023921C string=0x0000000000239220 "_\t"
 *   insn=0x0000000000239220 string=0x0000000000239224 "_"
 *   insn=0x0000000000239224 string=0x0000000000239228 "_!"
 *   insn=0x0000000000239228 string=0x000000000023922C "k!"
 *   insn=0x000000000023922C string=0x0000000000239230 "?"
 *   insn=0x0000000000239230 string=0x0000000000239234 "D"
 *   insn=0x0000000000239234 string=0x0000000000239238 "B"
 *   insn=0x0000000000239238 string=0x000000000023923C "D"
 *   insn=0x000000000023923C string=0x0000000000239240 "B"
 *   insn=0x0000000000239240 string=0x0000000000239244 "B"
 *   insn=0x0000000000239244 string=0x0000000000239248 "D"
 *   insn=0x0000000000239248 string=0x000000000023924C "J!"
 *   insn=0x000000000023924C string=0x0000000000239250 "k"
 *   insn=0x0000000000239270 string=0x0000000000239274 ""
 *   insn=0x0000000000239284 string=0x0000000000239288 "*"
 *   insn=0x00000000002392A4 string=0x00000000002392A8 "."
 *   insn=0x00000000002392B4 string=0x00000000002392B8 "a8!"
 *   insn=0x00000000002392B8 string=0x00000000002392BC "@8 "
 *   insn=0x00000000002392BC string=0x00000000002392C0 "!@!"
 *   insn=0x00000000002392CC string=0x00000000001F8E10 "0'"
 *   insn=0x00000000002392D4 string=0x00000000002392D8 ""
 *   insn=0x00000000002392F4 string=0x00000000002392F8 "a8!"
 *   insn=0x00000000002392F8 string=0x00000000002392FC "@8 "
 *   insn=0x00000000002392FC string=0x0000000000239300 "!@!"
 *   insn=0x000000000023931C string=0x0000000000239320 " "
 *   insn=0x0000000000239334 string=0x0000000000239338 ""
 *   insn=0x0000000000239340 string=0x0000000000239344 "a8!"
 *   insn=0x0000000000239344 string=0x0000000000239348 "@8 "
 *   insn=0x0000000000239348 string=0x000000000023934C "!@!"
 *   insn=0x000000000023935C string=0x0000000000239360 ""
 *   insn=0x0000000000239390 string=0x0000000000239394 "a8!"
 *   insn=0x0000000000239394 string=0x0000000000239398 "@8 "
 *   insn=0x0000000000239398 string=0x000000000023939C "!@!"
 *   insn=0x00000000002393BC string=0x00000000002393C0 " "
 *   insn=0x00000000002393DC string=0x00000000002393E0 "P"
 *   insn=0x000000000023941C string=0x0000000000239420 "!"
 *   insn=0x0000000000239444 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000239460 string=0x0000000000239464 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ShapeComponent::DrawShape(
        Caver::ShapeComponent *this,
        Caver::RenderingContext *a2,
        const Caver::Shape *a3,
        const Caver::Matrix4 *a4)
{
  int v6; // w8
  int *v7; // x25
  int v8; // w24
  int v9; // w22
  unsigned __int64 v10; // x0
  __int64 v11; // x0
  float32x2_t *v12; // x20
  signed __int64 v13; // x8
  int *v14; // x10
  signed __int64 v15; // x9
  __int64 v16; // x12
  unsigned int *v17; // x10
  int v18; // w11
  unsigned int v19; // w13
  int v20; // w24
  __int64 v21; // x22
  Caver::Vector2 *v22; // x0
  float32x2_t *v23; // x24
  unsigned __int64 v24; // x25
  float v25; // s0
  float v26; // s0
  float32x2_t v27; // d1
  float32x2_t v28; // d2
  float *v29; // x22
  __int64 v30; // x0
  float v31; // w8
  float v32; // w9
  float v33; // s0
  float v34; // s0
  float v35; // s1
  float v36; // s1
  int *v37; // x22
  __int64 v38; // x8
  unsigned __int64 v39; // x10
  __int64 v40; // x8
  unsigned __int64 v41; // x0
  float32x2_t *v42; // x21
  __int64 v43; // x8
  __int64 v44; // x9
  char *v45; // x10
  float *v46; // x11
  float v47; // s2
  float v48; // s3
  float v49; // s4
  float v50; // s5
  float v51; // s2
  float v52; // s3
  float *v53; // x21
  float v54; // s0
  float32x2_t v55; // d0
  float32x2_t v56; // d1
  float *v62; // x21
  float32x2_t v63; // d0
  float32x2_t v64; // d1
  __int64 v65; // x21
  __int64 v66; // x24
  __int64 v67; // x8
  float32x2_t v68; // d0
  float32x2_t v69; // d1
  __int64 v70; // x21
  __int64 v71; // x8
  __int64 v72; // x22
  __int64 v73; // x8
  float32x2_t v74; // d0
  float32x2_t v75; // d1
  unsigned __int64 v76; // [xsp+0h] [xbp-80h] BYREF
  unsigned __int64 v77; // [xsp+8h] [xbp-78h] BYREF
  unsigned __int64 v78; // [xsp+10h] [xbp-70h] BYREF
  unsigned __int64 v79; // [xsp+18h] [xbp-68h] BYREF
  __int64 v80[2]; // [xsp+20h] [xbp-60h] BYREF

  v80[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::RenderingContext::SetMatrix(a2, a4);
  v6 = *(_DWORD *)a3;
  if ( *(_DWORD *)a3 == 1 )
  {
    v29 = (float *)*((_QWORD *)a3 + 1);
    v30 = operator new[](0x3Cu);
    v31 = *v29;
    v32 = v29[1];
    v12 = (float32x2_t *)v30;
    v20 = 1;
    *(_QWORD *)(v30 + 4) = LODWORD(v32);
    *(float *)v30 = v31;
    v33 = v29[2];
    *(_QWORD *)(v30 + 16) = LODWORD(v32);
    v34 = v33 + v31;
    *(float *)(v30 + 12) = v34;
    v35 = v29[3];
    v9 = 5;
    *(_QWORD *)(v30 + 52) = LODWORD(v32);
    *(_DWORD *)(v30 + 32) = 0;
    *(float *)(v30 + 36) = v31;
    v36 = v35 + v32;
    *(_DWORD *)(v30 + 44) = 0;
    *(float *)(v30 + 48) = v31;
    *(float *)(v30 + 24) = v34;
    *(float *)(v30 + 28) = v36;
    *(float *)(v30 + 40) = v36;
LABEL_16:
    Caver::RenderingContext::SetVertexAttribPointer();
    if ( v20 )
      Caver::RenderingContext::DrawArrays(a2, 3, 0, v9);
    else
      Caver::RenderingContext::DrawArrays(a2, 1, 0, v9);
    goto LABEL_19;
  }
  if ( v6 == 2 )
  {
    v21 = *((_QWORD *)a3 + 1);
    v22 = (Caver::Vector2 *)operator new[](0xF0u);
    v12 = (float32x2_t *)v22;
    v23 = (float32x2_t *)((char *)v22 + 8);
    v24 = -1;
    do
    {
      v25 = (float)((int)v24 + 1) * 6.28318531 / 19.0;
      v22 = (Caver::Vector2 *)Caver::Vector2::FromAngle(v80, v22, v25);
      v26 = *(float *)(v21 + 8);
      v27.n64_u64[0] = v80[0];
      v28.n64_u64[0] = *(unsigned __int64 *)v21;
      ++v24;
      v23->n64_u32[0] = 0;
      v23[-1].n64_u64[0] = vadd_f32(vmul_n_f32(v27, v26), v28).n64_u64[0];
      v23 = (float32x2_t *)((char *)v23 + 12);
    }
    while ( v24 < 0x13 );
    v20 = 1;
    v9 = 20;
    goto LABEL_16;
  }
  if ( v6 != 3 )
  {
    v12 = 0;
LABEL_31:
    if ( !v12 )
      return;
    goto LABEL_32;
  }
  v7 = (int *)*((_QWORD *)a3 + 1);
  v8 = *v7 + *((unsigned __int8 *)v7 + 33) - 1;
  v9 = 2 * v8;
  if ( is_mul_ok(2 * v8, 0xCu) )
    v10 = 12LL * v9;
  else
    v10 = -1;
  v11 = operator new[](v10);
  v12 = (float32x2_t *)v11;
  v13 = *v7 + (unsigned __int64)*((unsigned __int8 *)v7 + 33) - 1;
  if ( (int)v13 >= 1 )
  {
    v14 = (int *)*((_QWORD *)v7 + 1);
    v15 = 0;
    v16 = v11 + 12;
    v18 = *v14;
    v19 = v14[1];
    v17 = (unsigned int *)(v14 + 3);
    do
    {
      *(_DWORD *)(v16 - 12) = v18;
      *(_DWORD *)(v16 - 8) = v19;
      *(_DWORD *)(v16 - 4) = 0;
      v18 = *(v17 - 1);
      v19 = *v17;
      ++v15;
      v17 += 2;
      *(_QWORD *)(v16 + 4) = v19;
      *(_DWORD *)v16 = v18;
      v16 += 24;
    }
    while ( v15 < v13 );
  }
  if ( v8 >= 1 )
  {
    v20 = 0;
    goto LABEL_16;
  }
LABEL_19:
  if ( *(_DWORD *)a3 != 3 )
    goto LABEL_31;
  v37 = (int *)*((_QWORD *)a3 + 1);
  v38 = *v37;
  v39 = 6 * v38;
  v40 = 72 * v38;
  if ( is_mul_ok(v39, 0xCu) )
    v41 = v40;
  else
    v41 = -1;
  v42 = (float32x2_t *)operator new[](v41);
  if ( v12 )
    operator delete[](v12);
  v43 = *v37;
  if ( (int)v43 >= 1 )
  {
    v44 = 0;
    v45 = (char *)&v42[4] + 4;
    v46 = (float *)(*((_QWORD *)v37 + 1) + 4LL);
    do
    {
      v47 = *(v46 - 1);
      v48 = *v46;
      ++v44;
      *((_DWORD *)v45 - 7) = 0;
      *((_DWORD *)v45 - 4) = 0;
      v49 = v47 + -1.0;
      v50 = v48 + -1.0;
      v51 = v47 + 1.0;
      v52 = v48 + 1.0;
      *((_DWORD *)v45 - 1) = 0;
      *((_DWORD *)v45 + 2) = 0;
      *((_DWORD *)v45 + 5) = 0;
      *((_DWORD *)v45 + 8) = 0;
      v46 += 2;
      *((float *)v45 - 9) = v49;
      *((float *)v45 - 8) = v50;
      *((float *)v45 - 6) = v51;
      *((float *)v45 - 5) = v50;
      *((float *)v45 - 3) = v49;
      *((float *)v45 - 2) = v52;
      *(float *)v45 = v51;
      *((float *)v45 + 1) = v50;
      *((float *)v45 + 3) = v51;
      *((float *)v45 + 4) = v52;
      *((float *)v45 + 6) = v49;
      *((float *)v45 + 7) = v52;
      v45 += 72;
    }
    while ( v44 < v43 );
  }
  Caver::RenderingContext::SetVertexAttribPointer();
  Caver::RenderingContext::DrawArrays(a2, 4, 0, 6 * *v37);
  v12 = v42;
  if ( !*((_BYTE *)v37 + 33) )
  {
    v12 = (float32x2_t *)operator new[](0x30u);
    operator delete[](v42);
    v53 = (float *)*((_QWORD *)v37 + 1);
    v54 = v53[2] - *v53;
    *(float *)&v79 = -(float)(v53[3] - v53[1]);
    *((float *)&v79 + 1) = v54;
    Caver::Vector2::Normalize((Caver::Vector2 *)&v79);
    v55.n64_u64[0] = v79;
    v56.n64_u64[0] = *(unsigned __int64 *)v53;
    __asm { FMOV            V8.2S, #6.0 }
    v12[1].n64_u32[0] = 0;
    v12->n64_u64[0] = vadd_f32(vmul_f32(v55, _D8), v56).n64_u64[0];
    v62 = (float *)*((_QWORD *)v37 + 1);
    v55.n64_f32[0] = v62[2] - *v62;
    *(float *)&v78 = -(float)(v62[3] - v62[1]);
    HIDWORD(v78) = v55.n64_u32[0];
    Caver::Vector2::Normalize((Caver::Vector2 *)&v78);
    v63.n64_u64[0] = v78;
    v64.n64_u64[0] = *(unsigned __int64 *)v62;
    v12[2].n64_u32[1] = 0;
    *(float32x2_t *)((char *)v12 + 12) = vsub_f32(v64, vmul_f32(v63, _D8));
    v65 = *v37;
    v66 = *((_QWORD *)v37 + 1);
    v67 = v66 + 8 * (v65 + *((unsigned __int8 *)v37 + 33));
    v63.n64_f32[0] = *(float *)(v67 - 8) - *(float *)(v67 - 16);
    *(float *)&v77 = -(float)(*(float *)(v67 - 4) - *(float *)(v67 - 12));
    HIDWORD(v77) = v63.n64_u32[0];
    Caver::Vector2::Normalize((Caver::Vector2 *)&v77);
    v68.n64_u64[0] = v77;
    v69.n64_u64[0] = *(unsigned __int64 *)(v66 + 8 * v65 - 8);
    v12[4].n64_u32[0] = 0;
    v12[3].n64_u64[0] = vadd_f32(vmul_f32(v68, _D8), v69).n64_u64[0];
    v70 = *v37;
    v71 = *((unsigned __int8 *)v37 + 33);
    v72 = *((_QWORD *)v37 + 1);
    v73 = v72 + 8 * (v70 + v71);
    v68.n64_f32[0] = *(float *)(v73 - 8) - *(float *)(v73 - 16);
    *(float *)&v76 = -(float)(*(float *)(v73 - 4) - *(float *)(v73 - 12));
    HIDWORD(v76) = v68.n64_u32[0];
    Caver::Vector2::Normalize((Caver::Vector2 *)&v76);
    v74.n64_u64[0] = v76;
    v75.n64_u64[0] = *(unsigned __int64 *)(v72 + 8 * v70 - 8);
    v12[5].n64_u32[1] = 0;
    *(float32x2_t *)((char *)v12 + 36) = vsub_f32(v75, vmul_f32(v74, _D8));
    Caver::RenderingContext::SetVertexAttribPointer();
    Caver::RenderingContext::DrawArrays(a2, 1, 0, 4);
  }
LABEL_32:
  operator delete[](v12);
}

