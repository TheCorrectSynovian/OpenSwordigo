/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000044E094
 * Mangled: _ZN5Caver9PODLoader11CreateModelEv
 * Demangled: Caver::PODLoader::CreateModel(void)
 *
 * Callers: 2
 *   0x00000000001F68F0  Caver::PODLoader::CreateModel(void)
 *   0x000000000044DF50  Caver::PODLoader::ReadModelFromFile(std::string const&)
 *
 * Callees: 14
 *   0x00000000001F5470  Caver::Mesh::TransformVertices(Caver::Matrix4 const&)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6A90  Caver::Mesh::NormalizeNormals(void)
 *   0x00000000001F9B30  Caver::PODLoader::CreateMesh(int)
 *   0x00000000001FA020  Caver::PODLoader::CreateSkeleton(void)
 *   0x00000000001FDC10  CPVRTModelPOD::GetWorldMatrix(PVRTMATRIXf &,SPODNode const&)
 *   0x00000000001FFE90  C_Matrix4Mul(float const*,float const*,float *)
 *   0x00000000002010D0  .strncmp
 *   0x0000000000202740  std::vector<boost::shared_ptr<Caver::Mesh>,std::allocator<boost::shared_ptr<Caver::Mesh>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::Mesh>*,std::vector<boost::shared_ptr<Caver::Mesh>,std::allocator<boost::shared_ptr<Caver::Mesh>>>>,boost::shared_ptr<Caver::Mesh> const&)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x0000000000203AA0  boost::detail::shared_count::shared_count<Caver::Model>(Caver::Model *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 77
 *   insn=0x000000000044E0AC string=0x000000000044E0B0 "W"
 *   insn=0x000000000044E0C4 string=0x000000000044E0C8 "F"
 *   insn=0x000000000044E0C8 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000044E0CC string=0x000000000044E0D0 ""
 *   insn=0x000000000044E0DC string=0x000000000044E0E0 "a"
 *   insn=0x000000000044E0F0 string=0x000000000044E0F4 "k"
 *   insn=0x000000000044E120 string=0x000000000044E128 "#)"
 *   insn=0x000000000044E120 string=0x000000000058A1D7 "Bone"
 *   insn=0x000000000044E12C string=0x000000000044E130 " "
 *   insn=0x000000000044E140 string=0x000000000044E15C "x"
 *   insn=0x000000000044E144 string=0x000000000044E148 "9"
 *   insn=0x000000000044E148 string=0x000000000044E14C "8"
 *   insn=0x000000000044E150 string=0x000000000044E154 "H"
 *   insn=0x000000000044E168 string=0x00000000001FA020 "0'"
 *   insn=0x000000000044E174 string=0x000000000044E178 ")"
 *   insn=0x000000000044E180 string=0x000000000044E184 "W"
 *   insn=0x000000000044E184 string=0x000000000044E188 "6"
 *   insn=0x000000000044E188 string=0x000000000044E1CC "5"
 *   insn=0x000000000044E18C string=0x000000000044E190 ""
 *   insn=0x000000000044E19C string=0x000000000044E1A0 "\t@"
 *   insn=0x000000000044E1AC string=0x000000000044E1B0 ""
 *   insn=0x000000000044E1BC string=0x000000000044E1C0 "@"
 *   insn=0x000000000044E1D0 string=0x000000000044E1D4 ""
 *   insn=0x000000000044E1E0 string=0x000000000044E1E4 "\t@"
 *   insn=0x000000000044E1F0 string=0x000000000044E1F4 ""
 *   insn=0x000000000044E200 string=0x000000000044E204 "@"
 *   insn=0x000000000044E234 string=0x000000000044E238 ">"
 *   insn=0x000000000044E238 string=0x00000000001F9B30 "0'"
 *   insn=0x000000000044E244 string=0x000000000044E248 "r"
 *   insn=0x000000000044E248 string=0x00000000001FDC10 "0'"
 *   insn=0x000000000044E294 string=0x000000000044E298 "v"
 *   insn=0x000000000044E298 string=0x00000000001F5470 "P'"
 *   insn=0x000000000044E2A0 string=0x000000000044E2A4 "h"
 *   insn=0x000000000044E2A0 string=0x00000000001F6A90 "0'"
 *   insn=0x000000000044E2A8 string=0x000000000044E2AC "?"
 *   insn=0x000000000044E2B4 string=0x000000000044E2B8 ")"
 *   insn=0x000000000044E2BC string=0x000000000044E2C0 ")"
 *   insn=0x000000000044E2C4 string=0x000000000044E2C8 "*"
 *   insn=0x000000000044E2C4 string=0x000000000044E2D4 ")@"
 *   insn=0x000000000044E2C8 string=0x000000000044E2CC "J"
 *   insn=0x000000000044E2CC string=0x000000000044E2D0 "*"
 *   insn=0x000000000044E2D4 string=0x000000000044E2D8 "\t\t"
 *   insn=0x000000000044E2F4 string=0x000000000044E2F8 "6"
 *   insn=0x000000000044E2FC string=0x000000000044E300 ""
 *   insn=0x000000000044E30C string=0x000000000044E310 "\t@"
 *   insn=0x000000000044E31C string=0x000000000044E320 ""
 *   insn=0x000000000044E32C string=0x000000000044E330 "@"
 *   insn=0x000000000044E380 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000044E384 string=0x000000000044E388 "u"
 *   insn=0x000000000044E388 string=0x000000000044E434 "s"
 *   insn=0x000000000044E38C string=0x000000000044E390 ""
 *   insn=0x000000000044E39C string=0x000000000044E3A0 "\t@"
 *   insn=0x000000000044E3AC string=0x000000000044E3B0 ""
 *   insn=0x000000000044E3BC string=0x000000000044E3C0 "@"
 *   insn=0x000000000044E3D8 string=0x000000000044E3DC "s"
 *   insn=0x000000000044E3E0 string=0x000000000044E3E4 "&"
 *   insn=0x000000000044E3E0 string=0x000000000044E43C "h"
 *   insn=0x000000000044E3EC string=0x000000000044E3F0 "5"
 *   insn=0x000000000044E3F4 string=0x000000000044E3F8 ""
 *   insn=0x000000000044E404 string=0x000000000044E408 "\t@"
 *   insn=0x000000000044E414 string=0x000000000044E418 ""
 *   insn=0x000000000044E424 string=0x000000000044E428 "@"
 *   insn=0x000000000044E434 string=0x000000000044E438 "3"
 *   insn=0x000000000044E43C string=0x000000000044E440 ""
 *   insn=0x000000000044E440 string=0x000000000044E444 "h"
 *   insn=0x000000000044E448 string=0x000000000044E44C "h"
 *   insn=0x000000000044E44C string=0x000000000044E450 "\t@"
 *   insn=0x000000000044E458 string=0x000000000044E45C "h\n@"
 *   insn=0x000000000044E45C string=0x000000000044E460 ""
 *   insn=0x000000000044E460 string=0x000000000044E464 "h\n"
 *   insn=0x000000000044E468 string=0x000000000044E46C "h"
 *   insn=0x000000000044E46C string=0x000000000044E470 "@"
 *   insn=0x000000000044E494 string=0x000000000044E498 ""
 *   insn=0x000000000044E498 string=0x000000000044E49C "\tI@"
 *   insn=0x000000000044E49C string=0x000000000044E4A0 "4"
 *   insn=0x000000000044E4A4 string=0x000000000044E4A8 ")@"
 *   insn=0x000000000044E4D8 string=0x000000000044E4DC "4"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::PODLoader::CreateModel(Caver::PODLoader *this@<X0>, __int64 *a2@<X8>)
{
  _QWORD *v4; // x0
  __int64 v5; // x22
  int v6; // w24
  const char **v7; // x25
  __int64 v8; // x24
  __int128 v9; // kr00_16
  _QWORD *v10; // x22
  __int64 v11; // x8
  __int64 v12; // x8
  __int64 v13; // x8
  __int64 v14; // x8
  __int64 v15; // x24
  unsigned __int64 v16; // x21
  float v17; // w8
  __int64 v18; // x8
  Caver::Mesh **v19; // x1
  _QWORD *v20; // x9
  _QWORD *v21; // x22
  __int64 v22; // x8
  __int64 v23; // x8
  Caver::Mesh *v24; // [xsp+30h] [xbp-120h] BYREF
  _QWORD *v25; // [xsp+38h] [xbp-118h]
  float v26; // [xsp+40h] [xbp-110h] BYREF
  __int128 v27; // [xsp+44h] [xbp-10Ch]
  float v28; // [xsp+54h] [xbp-FCh]
  __int128 v29; // [xsp+58h] [xbp-F8h]
  float v30; // [xsp+68h] [xbp-E8h]
  __int128 v31; // [xsp+6Ch] [xbp-E4h]
  int v32; // [xsp+7Ch] [xbp-D4h]
  _OWORD v33[4]; // [xsp+80h] [xbp-D0h] BYREF
  _OWORD v34[4]; // [xsp+C0h] [xbp-90h] BYREF
  __int64 v35; // [xsp+108h] [xbp-48h]

  v35 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = (_QWORD *)operator new(0x30u);
  *a2 = (__int64)v4;
  v4[4] = 0;
  v4[5] = 0;
  v4[2] = 0;
  v4[3] = 0;
  *v4 = &byte_6FD2F8;
  v4[1] = 0;
  boost::detail::shared_count::shared_count<Caver::Model>();
  boost::detail::sp_enable_shared_from_this();
  v5 = *(_QWORD *)this;
  v6 = *(_DWORD *)(*(_QWORD *)this + 72LL) - 1;
  if ( v6 < 0 )
  {
LABEL_5:
    if ( *(_DWORD *)(v5 + 76) )
    {
LABEL_18:
      v15 = 0;
      v16 = 0;
      while ( 1 )
      {
        Caver::PODLoader::CreateMesh((__int64 *)&v24, this, v16);
        CPVRTModelPOD::GetWorldMatrix();
        v17 = *((float *)this + 43);
        v27 = 0u;
        v29 = 0u;
        v26 = v17;
        v28 = v17;
        v30 = v17;
        v31 = 0u;
        v32 = 1065353216;
        C_Matrix4Mul(&v26, (const float *)v34, (float *)v33);
        v34[0] = v33[0];
        v34[1] = v33[1];
        v34[2] = v33[2];
        v34[3] = v33[3];
        Caver::Mesh::TransformVertices(v24, (const Caver::Matrix4 *)v34);
        Caver::Mesh::NormalizeNormals(v24);
        v18 = *a2;
        v19 = *(Caver::Mesh ***)(*a2 + 16);
        if ( v19 != *(Caver::Mesh ***)(*a2 + 24) )
          break;
        std::vector<boost::shared_ptr<Caver::Mesh>>::_M_insert_aux();
        v21 = v25;
        if ( v25 )
          goto LABEL_25;
LABEL_28:
        ++v16;
        v15 += 96;
        if ( v16 >= *(unsigned int *)(*(_QWORD *)this + 76LL) )
          return;
      }
      *v19 = v24;
      v20 = v25;
      v19[1] = (Caver::Mesh *)v25;
      if ( v20 )
        ++v20[1];
      *(_QWORD *)(v18 + 16) = v19 + 2;
      v21 = v25;
      if ( !v25 )
        goto LABEL_28;
LABEL_25:
      v22 = v21[1] - 1LL;
      v21[1] = v22;
      if ( !v22 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v21 + 16LL))(v21);
        v23 = v21[2] - 1LL;
        v21[2] = v23;
        if ( !v23 )
          (*(void (__fastcall **)(_QWORD *))(*v21 + 24LL))(v21);
      }
      goto LABEL_28;
    }
  }
  else
  {
    v7 = (const char **)(*(_QWORD *)(v5 + 80) + 96LL * v6 + 8);
    while ( strncmp(*v7, "Bone", 4u) )
    {
      --v6;
      v7 -= 12;
      if ( v6 < 0 )
        goto LABEL_5;
    }
    v8 = *a2;
    Caver::PODLoader::CreateSkeleton((__int64 *)v34, this);
    v9 = v34[0];
    if ( *((_QWORD *)&v34[0] + 1) )
      ++*(_QWORD *)(*((_QWORD *)&v34[0] + 1) + 8LL);
    v10 = *(_QWORD **)(v8 + 40);
    *(_OWORD *)(v8 + 32) = v9;
    if ( v10 )
    {
      v11 = v10[1] - 1LL;
      v10[1] = v11;
      if ( !v11 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
        v12 = v10[2] - 1LL;
        v10[2] = v12;
        if ( !v12 )
          (*(void (__fastcall **)(_QWORD *))(*v10 + 24LL))(v10);
      }
    }
    if ( *((_QWORD *)&v9 + 1) )
    {
      v13 = *(_QWORD *)(*((_QWORD *)&v9 + 1) + 8LL) - 1LL;
      *(_QWORD *)(*((_QWORD *)&v9 + 1) + 8LL) = v13;
      if ( !v13 )
      {
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v9 + 1) + 16LL))(*((_QWORD *)&v9 + 1));
        v14 = *(_QWORD *)(*((_QWORD *)&v9 + 1) + 16LL) - 1LL;
        *(_QWORD *)(*((_QWORD *)&v9 + 1) + 16LL) = v14;
        if ( !v14 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v9 + 1) + 24LL))(*((_QWORD *)&v9 + 1));
      }
    }
    if ( *(_DWORD *)(*(_QWORD *)this + 76LL) )
      goto LABEL_18;
  }
}

