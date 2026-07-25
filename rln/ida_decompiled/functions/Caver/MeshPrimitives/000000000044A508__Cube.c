/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000044A508
 * Mangled: _ZN5Caver14MeshPrimitives4CubeEb
 * Demangled: Caver::MeshPrimitives::Cube(bool)
 *
 * Callers: 1
 *   0x0000000000201CF0  Caver::MeshPrimitives::Cube(bool)
 *
 * Callees: 13
 *   0x00000000001F39E0  Caver::Mesh::Mesh(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FAB90  boost::detail::shared_count::shared_count<Caver::Mesh>(Caver::Mesh *)
 *   0x00000000001FC850  Caver::Mesh::AllocVertexBuffer(int)
 *   0x00000000001FD600  Caver::Mesh::AllocIndexBuffer(int)
 *   0x00000000001FFAF0  Caver::MeshData::valueSize(void)
 *   0x0000000000200EA0  Caver::MeshInstance::InstanceWithMesh(boost::shared_ptr<Caver::Mesh> const&,bool)
 *   0x0000000000201760  .memcpy
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 74
 *   insn=0x000000000044A524 string=0x000000000044A528 "Y"
 *   insn=0x000000000044A528 string=0x000000000044A52C ")"
 *   insn=0x000000000044A544 string=0x000000000044A548 ")"
 *   insn=0x000000000044A548 string=0x000000000044A54C "z"
 *   insn=0x000000000044A548 string=0x000000000044A56C "A\n"
 *   insn=0x000000000044A550 string=0x000000000044A554 "i""
 *   insn=0x000000000044A558 string=0x000000000044A55C "\t"
 *   insn=0x000000000044A558 string=0x000000000044A8E8 "("
 *   insn=0x000000000044A55C string=0x000000000044A560 ")"
 *   insn=0x000000000044A560 string=0x000000000044A564 "\t"
 *   insn=0x000000000044A578 string=0x000000000044A57C "y"
 *   insn=0x000000000044A660 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000044A668 string=0x00000000001F39E0 "P'"
 *   insn=0x000000000044A678 string=0x000000000044A67C "E"
 *   insn=0x000000000044A67C string=0x00000000001FAB90 "0'"
 *   insn=0x000000000044A690 string=0x000000000044A694 "H\n"
 *   insn=0x000000000044A6AC string=0x000000000044A6B0 ""
 *   insn=0x000000000044A6BC string=0x00000000001FD600 "0'"
 *   insn=0x000000000044A6CC string=0x000000000044A6D0 ""
 *   insn=0x000000000044A6D0 string=0x000000000044A6D4 ""
 *   insn=0x000000000044A6D4 string=0x000000000044A6D8 "u"
 *   insn=0x000000000044A6D8 string=0x000000000044A6DC "A\n"
 *   insn=0x000000000044A6E0 string=0x000000000044A6E4 "!"
 *   insn=0x000000000044A6F4 string=0x000000000044A6F8 " "
 *   insn=0x000000000044A700 string=0x000000000044A704 "\t"
 *   insn=0x000000000044A724 string=0x000000000044A728 "|@"
 *   insn=0x000000000044A740 string=0x000000000044A744 "C"
 *   insn=0x000000000044A744 string=0x00000000001FC850 "0'"
 *   insn=0x000000000044A760 string=0x000000000044A764 "T\n"
 *   insn=0x000000000044A774 string=0x000000000044A778 "%@"
 *   insn=0x000000000044A780 string=0x000000000044A784 "}"
 *   insn=0x000000000044A798 string=0x000000000044A79C "\t)@"
 *   insn=0x000000000044A79C string=0x000000000044A7A0 "=@"
 *   insn=0x000000000044A7A4 string=0x000000000044A7A8 "}"
 *   insn=0x000000000044A7B4 string=0x000000000044A7B8 "{"
 *   insn=0x000000000044A7BC string=0x000000000044A7C0 "\tA@"
 *   insn=0x000000000044A7E8 string=0x000000000044A7EC "\n"
 *   insn=0x000000000044A7EC string=0x000000000044A7F0 "J"
 *   insn=0x000000000044A7F0 string=0x000000000044A7F4 "\n"
 *   insn=0x000000000044A7FC string=0x000000000044A800 "5"
 *   insn=0x000000000044A804 string=0x000000000044A808 ""
 *   insn=0x000000000044A814 string=0x000000000044A818 "\t@"
 *   insn=0x000000000044A824 string=0x000000000044A828 ""
 *   insn=0x000000000044A834 string=0x000000000044A838 "@"
 *   insn=0x000000000044A844 string=0x000000000044A848 "5"
 *   insn=0x000000000044A84C string=0x000000000044A850 ""
 *   insn=0x000000000044A85C string=0x000000000044A860 "\t@"
 *   insn=0x000000000044A86C string=0x000000000044A870 ""
 *   insn=0x000000000044A87C string=0x000000000044A880 "@"
 *   insn=0x000000000044A894 string=0x000000000044A898 ""
 *   insn=0x000000000044A89C string=0x000000000044A8A0 "a"
 *   insn=0x000000000044A8A8 string=0x000000000044A8AC "\t@"
 *   insn=0x000000000044A8B4 string=0x000000000044A8B8 ""
 *   insn=0x000000000044A8BC string=0x000000000044A8C0 "a"
 *   insn=0x000000000044A8C8 string=0x000000000044A8CC "@"
 *   insn=0x000000000044A8E0 string=0x000000000044A8E4 "o"
 *   insn=0x000000000044A8F0 string=0x000000000044A8F4 "!"
 *   insn=0x000000000044A8F4 string=0x000000000044A918 "n"
 *   insn=0x000000000044A918 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000044A928 string=0x000000000044A92C ""
 *   insn=0x000000000044A930 string=0x000000000044A934 "a"
 *   insn=0x000000000044A938 string=0x000000000044A93C "\t@"
 *   insn=0x000000000044A948 string=0x000000000044A94C ""
 *   insn=0x000000000044A950 string=0x000000000044A954 "a"
 *   insn=0x000000000044A958 string=0x000000000044A95C "@"
 *   insn=0x000000000044A97C string=0x000000000044A980 "L"
 *   insn=0x000000000044A980 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000044A9A0 string=0x000000000044A9A4 "4"
 *   insn=0x000000000044A9A8 string=0x000000000044A9AC ""
 *   insn=0x000000000044A9B8 string=0x000000000044A9BC "\t@"
 *   insn=0x000000000044A9C8 string=0x000000000044A9CC ""
 *   insn=0x000000000044A9D8 string=0x000000000044A9DC "@"
 *   insn=0x000000000044A9EC string=0x000000000044A9F0 "W"
 *   insn=0x000000000044AA10 string=0x000000000044AA14 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::MeshPrimitives::Cube(Caver::MeshPrimitives *this@<X0>, _QWORD *a2@<X8>)
{
  char v2; // w26
  __int64 v4; // x8
  float32x4_t v5; // q1
  __int64 v6; // x21
  int v12; // w0
  void *v13; // x21
  int v14; // w0
  __int64 v15; // x20
  int v16; // w22
  size_t v17; // x21
  Caver::Mesh *v18; // x8
  int v19; // w27
  char *v20; // x23
  char *v21; // x24
  _QWORD *v22; // x21
  __int64 v23; // x8
  __int64 v24; // x8
  __int64 v25; // x8
  __int64 v26; // x8
  __int64 v27; // x8
  __int64 v28; // x8
  __int64 v29; // [xsp+10h] [xbp-1A0h]
  _QWORD *v30; // [xsp+18h] [xbp-198h]
  Caver::Mesh *v31; // [xsp+20h] [xbp-190h]
  _QWORD *v32; // [xsp+28h] [xbp-188h]
  float32x4_t v33; // [xsp+30h] [xbp-180h] BYREF
  float32x4_t v34; // [xsp+40h] [xbp-170h]
  float32x4_t v35; // [xsp+50h] [xbp-160h]
  float32x4_t v36; // [xsp+60h] [xbp-150h]
  float32x4_t v37; // [xsp+70h] [xbp-140h]
  float32x4_t v38; // [xsp+80h] [xbp-130h]
  float32x4_t v39; // [xsp+90h] [xbp-120h]
  float32x4_t v40; // [xsp+A0h] [xbp-110h]
  float32x4_t v41; // [xsp+B0h] [xbp-100h]
  float32x4_t v42; // [xsp+C0h] [xbp-F0h]
  float32x4_t v43; // [xsp+D0h] [xbp-E0h]
  float32x4_t v44; // [xsp+E0h] [xbp-D0h]
  float32x4_t v45; // [xsp+F0h] [xbp-C0h]
  float32x4_t v46; // [xsp+100h] [xbp-B0h]
  float32x4_t v47; // [xsp+110h] [xbp-A0h]
  float32x4_t v48; // [xsp+120h] [xbp-90h]
  float32x4_t v49; // [xsp+130h] [xbp-80h]
  float32x4_t v50; // [xsp+140h] [xbp-70h]
  __int64 v51; // [xsp+158h] [xbp-58h]

  v2 = (char)this;
  v51 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( Caver::MeshPrimitives::staticCube_ )
    goto LABEL_2;
  memcpy(&v33, &unk_594FC4, 0x120u);
  v5.n128_u64[0] = 0x3F0000003F000000LL;
  v5.n128_u64[1] = 0x3F0000003F000000LL;
  v33 = vmulq_f32(v33, v5);
  v34 = vmulq_f32(v34, v5);
  v35 = vmulq_f32(v35, v5);
  v36 = vmulq_f32(v36, v5);
  v37 = vmulq_f32(v37, v5);
  v38 = vmulq_f32(v38, v5);
  v39 = vmulq_f32(v39, v5);
  v40 = vmulq_f32(v40, v5);
  v41 = vmulq_f32(v41, v5);
  v42 = vmulq_f32(v42, v5);
  v43 = vmulq_f32(v43, v5);
  v44 = vmulq_f32(v44, v5);
  v45 = vmulq_f32(v45, v5);
  v46 = vmulq_f32(v46, v5);
  v47 = vmulq_f32(v47, v5);
  v48 = vmulq_f32(v48, v5);
  v49 = vmulq_f32(v49, v5);
  v50 = vmulq_f32(v50, v5);
  v6 = operator new(0x160u);
  Caver::Mesh::Mesh((Caver::Mesh *)v6);
  v31 = (Caver::Mesh *)v6;
  boost::detail::shared_count::shared_count<Caver::Mesh>();
  boost::detail::sp_enable_shared_from_this();
  __asm { FMOV            V1.4S, #1.0 }
  *(_OWORD *)(v6 + 160) = _Q1;
  *(_OWORD *)(v6 + 176) = _Q1;
  *(_OWORD *)(v6 + 4) = xmmword_594F90;
  v12 = Caver::MeshData::valueSize((Caver::MeshData *)(v6 + 8));
  Caver::Mesh::AllocIndexBuffer((Caver::Mesh *)v6, 36 * v12);
  v13 = *(void **)(v6 + 288);
  *((_QWORD *)v31 + 3) = v13;
  v14 = Caver::MeshData::valueSize((Caver::Mesh *)((char *)v31 + 8));
  memcpy(v13, &unk_594FA0, 36 * v14);
  *(_DWORD *)v31 = 24;
  *((_QWORD *)v31 + 4) = 0x300001406LL;
  *((_QWORD *)v31 + 7) = 0x300001406LL;
  LODWORD(v13) = Caver::MeshData::valueSize((Caver::Mesh *)((char *)v31 + 32));
  v15 = *((int *)v31 + 15);
  v16 = 3 * (_DWORD)v13;
  v17 = (int)Caver::MeshData::valueSize((Caver::Mesh *)((char *)v31 + 56)) * v15;
  Caver::Mesh::AllocVertexBuffer(v31, 24 * (v17 + v16));
  v18 = v31;
  v19 = 0;
  v20 = (char *)*((_QWORD *)v31 + 34);
  *((_DWORD *)v31 + 10) = v17 + v16;
  *((_DWORD *)v31 + 16) = v17 + v16;
  v21 = &v20[v16];
  *((_QWORD *)v31 + 6) = v20;
  *((_QWORD *)v31 + 9) = v21;
  do
  {
    memcpy(v20, (char *)&v33 + 4 * *((_DWORD *)v18 + 9) * v19, v16);
    v20 += *((unsigned int *)v31 + 10);
    memcpy(v21, (char *)&unk_5950E4 + 4 * *((_DWORD *)v31 + 15) * v19, v17);
    v18 = v31;
    ++v19;
    v21 += *((unsigned int *)v31 + 16);
  }
  while ( v19 != 24 );
  Caver::MeshInstance::InstanceWithMesh();
  if ( v30 )
    ++v30[1];
  v22 = (_QWORD *)qword_6E9A20;
  Caver::MeshPrimitives::staticCube_ = v29;
  qword_6E9A20 = (__int64)v30;
  if ( v22 )
  {
    v23 = v22[1] - 1LL;
    v22[1] = v23;
    if ( !v23 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v22 + 16LL))(v22);
      v24 = v22[2] - 1LL;
      v22[2] = v24;
      if ( !v24 )
        (*(void (__fastcall **)(_QWORD *))(*v22 + 24LL))(v22);
    }
  }
  if ( v30 )
  {
    v25 = v30[1] - 1LL;
    v30[1] = v25;
    if ( !v25 )
    {
      (*(void (__fastcall **)())(*v30 + 16LL))();
      v26 = v30[2] - 1LL;
      v30[2] = v26;
      if ( !v26 )
        (*(void (__fastcall **)())(*v30 + 24LL))();
    }
  }
  if ( !v32
    || (v27 = v32[1] - 1LL, (v32[1] = v27) != 0)
    || ((*(void (__fastcall **)())(*v32 + 16LL))(), v28 = v32[2] - 1LL, (v32[2] = v28) != 0) )
  {
LABEL_2:
    if ( (v2 & 1) == 0 )
    {
LABEL_21:
      Caver::MeshInstance::InstanceWithMesh();
      return;
    }
  }
  else
  {
    (*(void (__fastcall **)())(*v32 + 24LL))();
    if ( (v2 & 1) == 0 )
      goto LABEL_21;
  }
  v4 = qword_6E9A20;
  *a2 = Caver::MeshPrimitives::staticCube_;
  a2[1] = v4;
  if ( v4 )
    ++*(_QWORD *)(v4 + 8);
}

