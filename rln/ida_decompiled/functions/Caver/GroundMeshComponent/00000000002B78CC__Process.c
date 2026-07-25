/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B78CC
 * Mangled: _ZN5Caver19GroundMeshComponent7ProcessEPSt6vectorIN5boost13intrusive_ptrINS_9ComponentEEESaIS5_EE
 * Demangled: Caver::GroundMeshComponent::Process(std::vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>> *)
 *
 * Callers: 1
 *   0x00000000002B6F2C  Caver::GroundMeshComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callees: 17
 *   0x00000000001F44E0  Caver::MeshBuilder::GenerateMesh(void)
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001F88E0  Caver::MeshBuilder::InitWithMeshBuilderFaceSubset(Caver::MeshBuilder const&,int *,int)
 *   0x00000000001F9100  Caver::GroundMeshComponent::AddSurfaceMesh(boost::shared_ptr<Caver::Mesh> const&)
 *   0x00000000001FA3C0  Caver::GroundMeshComponent::RemoveAllMeshes(void)
 *   0x00000000001FA520  Caver::GroundMeshComponent::AddFrontMesh(boost::shared_ptr<Caver::Mesh> const&)
 *   0x00000000002026E0  boost::scoped_ptr<Caver::MeshBuilder>::~scoped_ptr()
 *   0x0000000000202C80  Caver::MeshBuilder::InitWithMesh(Caver::Mesh const&,bool)
 *   0x0000000000203610  Caver::MeshBuilder::MeshBuilder(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000002B7FC0  Caver::GroundMeshComponent::RemoveAllMeshes(void)
 *   0x0000000000565294  sub_565294
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 126
 *   insn=0x00000000002B78E8 string=0x00000000002B78EC "V"
 *   insn=0x00000000002B7904 string=0x00000000002B7908 " "
 *   insn=0x00000000002B7910 string=0x00000000002B7914 "h"
 *   insn=0x00000000002B7910 string=0x00000000002B7924 "\n"
 *   insn=0x00000000002B7918 string=0x00000000002B791C "1"
 *   insn=0x00000000002B7918 string=0x00000000002B7DA8 ";"
 *   insn=0x00000000002B791C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002B7924 string=0x00000000002B7928 "?"
 *   insn=0x00000000002B7934 string=0x00000000002B7938 "*A"
 *   insn=0x00000000002B7940 string=0x00000000002B7944 ""
 *   insn=0x00000000002B7948 string=0x00000000002B794C ""
 *   insn=0x00000000002B7954 string=0x00000000002B7964 "A"
 *   insn=0x00000000002B7970 string=0x00000000002B7974 "H"
 *   insn=0x00000000002B7974 string=0x00000000002B7978 ""
 *   insn=0x00000000002B7978 string=0x00000000002B797C ""
 *   insn=0x00000000002B7990 string=0x00000000002B7994 " "
 *   insn=0x00000000002B79A0 string=0x00000000002B79A4 "H "
 *   insn=0x00000000002B79A4 string=0x00000000002B7DAC ":"
 *   insn=0x00000000002B79B4 string=0x00000000002B79BC "j"
 *   insn=0x00000000002B79BC string=0x00000000002B79C0 "?"
 *   insn=0x00000000002B79CC string=0x00000000002B79D0 "*A"
 *   insn=0x00000000002B79D8 string=0x00000000002B79DC ""
 *   insn=0x00000000002B79E0 string=0x00000000002B79E4 ""
 *   insn=0x00000000002B79EC string=0x00000000002B79FC "A"
 *   insn=0x00000000002B7A08 string=0x00000000002B7A0C "H"
 *   insn=0x00000000002B7A0C string=0x00000000002B7A10 ""
 *   insn=0x00000000002B7A10 string=0x00000000002B7A14 "h"
 *   insn=0x00000000002B7A24 string=0x00000000002B7A28 "f\n"
 *   insn=0x00000000002B7A28 string=0x00000000001FA3C0 "0'"
 *   insn=0x00000000002B7A34 string=0x00000000002B7A38 " \t"
 *   insn=0x00000000002B7A78 string=0x00000000002B7A7C "\t}"
 *   insn=0x00000000002B7A7C string=0x00000000002B7A80 ""
 *   insn=0x00000000002B7A8C string=0x00000000001F8570 "0'"
 *   insn=0x00000000002B7A98 string=0x00000000002B7A9C ""
 *   insn=0x00000000002B7AA8 string=0x00000000002B7AAC ""
 *   insn=0x00000000002B7AB4 string=0x00000000002B7AB8 "?"
 *   insn=0x00000000002B7AB8 string=0x00000000002B7ABC ""
 *   insn=0x00000000002B7AE4 string=0x00000000002B7AE8 "(P@"
 *   insn=0x00000000002B7AE8 string=0x00000000002B7AEC "("
 *   insn=0x00000000002B7AFC string=0x00000000002B7B00 "x"
 *   insn=0x00000000002B7B00 string=0x00000000001F88E0 "0'"
 *   insn=0x00000000002B7B04 string=0x00000000002B7B08 "v"
 *   insn=0x00000000002B7B08 string=0x00000000001F44E0 "P'"
 *   insn=0x00000000002B7B10 string=0x00000000002B7B14 "{"
 *   insn=0x00000000002B7B14 string=0x00000000001F9100 "0'"
 *   insn=0x00000000002B7B20 string=0x00000000002B7B24 "ZS"
 *   insn=0x00000000002B7B28 string=0x00000000002B7B2C "9S"
 *   insn=0x00000000002B7B2C string=0x00000000002B7B30 "Q"
 *   insn=0x00000000002B7B30 string=0x00000000002B7B34 "_"
 *   insn=0x00000000002B7B3C string=0x00000000002B7B40 ""
 *   insn=0x00000000002B7B40 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000002B7B54 string=0x00000000002B7B58 "a"
 *   insn=0x00000000002B7B64 string=0x00000000002B7CF8 "s"
 *   insn=0x00000000002B7B90 string=0x00000000002B7B94 ";,"
 *   insn=0x00000000002B7B9C string=0x00000000002B7BA0 "S"
 *   insn=0x00000000002B7BA0 string=0x00000000002B7BA4 "\t}"
 *   insn=0x00000000002B7BA4 string=0x00000000002B7BA8 ""
 *   insn=0x00000000002B7BB0 string=0x00000000002B7BB4 "o"
 *   insn=0x00000000002B7BB8 string=0x00000000002B7BBC "S@"
 *   insn=0x00000000002B7BC0 string=0x00000000002B7BC4 "+"
 *   insn=0x00000000002B7BCC string=0x00000000002B7BD0 "\tS"
 *   insn=0x00000000002B7BD0 string=0x00000000002B7BD4 ""
 *   insn=0x00000000002B7BDC string=0x00000000002B7BE0 "?"
 *   insn=0x00000000002B7BE0 string=0x00000000002B7BE4 "+"
 *   insn=0x00000000002B7BF4 string=0x00000000002B7BF8 "z"
 *   insn=0x00000000002B7C10 string=0x00000000002B7C14 "(P@"
 *   insn=0x00000000002B7C28 string=0x00000000002B7C2C "-"
 *   insn=0x00000000002B7C30 string=0x00000000002B7C34 "+"
 *   insn=0x00000000002B7C3C string=0x00000000002B7C40 "8\n"
 *   insn=0x00000000002B7C40 string=0x00000000001FA520 "0'"
 *   insn=0x00000000002B7C4C string=0x00000000002B7C50 "ZS"
 *   insn=0x00000000002B7C58 string=0x00000000002B7C5C "Q"
 *   insn=0x00000000002B7C5C string=0x00000000002B7C60 "_"
 *   insn=0x00000000002B7C7C string=0x00000000002B7C80 "a"
 *   insn=0x00000000002B7C84 string=0x00000000002B7C88 "`"
 *   insn=0x00000000002B7C94 string=0x00000000002B7C98 "4"
 *   insn=0x00000000002B7C9C string=0x00000000002B7CA0 ""
 *   insn=0x00000000002B7CAC string=0x00000000002B7CB0 "\t@"
 *   insn=0x00000000002B7CBC string=0x00000000002B7CC0 ""
 *   insn=0x00000000002B7CCC string=0x00000000002B7CD0 "@"
 *   insn=0x00000000002B7CFC string=0x00000000002B7D00 "l"
 *   insn=0x00000000002B7D00 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002B7D08 string=0x00000000002B7D64 "w"
 *   insn=0x00000000002B7D10 string=0x00000000002B7D14 "3"
 *   insn=0x00000000002B7D14 string=0x00000000002B7D18 "h"
 *   insn=0x00000000002B7D18 string=0x00000000002B7D1C ""
 *   insn=0x00000000002B7D1C string=0x00000000002B7D20 "h"
 *   insn=0x00000000002B7D24 string=0x00000000002B7D28 "h"
 *   insn=0x00000000002B7D28 string=0x00000000002B7D2C "\t@"
 *   insn=0x00000000002B7D34 string=0x00000000002B7D38 "h\n@"
 *   insn=0x00000000002B7D38 string=0x00000000002B7D3C ""
 *   insn=0x00000000002B7D3C string=0x00000000002B7D40 "h\n"
 *   insn=0x00000000002B7D44 string=0x00000000002B7D48 "h"
 *   insn=0x00000000002B7D48 string=0x00000000002B7D4C "@"
 *   insn=0x00000000002B7D68 string=0x00000000002B7D6C "Q"
 *   insn=0x00000000002B7D70 string=0x00000000002B7D74 ""
 *   insn=0x00000000002B7D80 string=0x00000000002B7DB0 "H"
 *   insn=0x00000000002B7DB0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002B7DB4 string=0x00000000002B7DB8 "U"
 *   insn=0x00000000002B7DC0 string=0x00000000002B7DC4 "V\n"
 *   insn=0x00000000002B7DC8 string=0x00000000002B7DCC "O"
 *   insn=0x00000000002B7DD4 string=0x00000000002B7DD8 "$"
 *   insn=0x00000000002B7DE0 string=0x00000000002B7DE4 "3"
 *   insn=0x00000000002B7DE4 string=0x00000000002B7DE8 ","
 *   insn=0x00000000002B7DEC string=0x00000000002B7DF0 "w"
 *   insn=0x00000000002B7DF4 string=0x00000000002B7DF8 "."
 *   insn=0x00000000002B7E0C string=0x00000000002B7E10 "("
 *   insn=0x00000000002B7E28 string=0x00000000002B7E2C "!"
 *   insn=0x00000000002B7E34 string=0x00000000002B7E38 "\n"
 *   insn=0x00000000002B7E58 string=0x00000000002B7E5C "!*"
 *   insn=0x00000000002B7E60 string=0x00000000002B7E64 "?"
 *   insn=0x00000000002B7E6C string=0x00000000002B7E70 "\n"
 *   insn=0x00000000002B7E88 string=0x00000000002B7E8C "5"
 *   insn=0x00000000002B7EA0 string=0x00000000002B7F00 "s"
 *   insn=0x00000000002B7EA8 string=0x00000000002B7EAC "6"
 *   insn=0x00000000002B7EB0 string=0x00000000002B7EB4 ""
 *   insn=0x00000000002B7EC0 string=0x00000000002B7EC4 "\t@"
 *   insn=0x00000000002B7ED0 string=0x00000000002B7ED4 ""
 *   insn=0x00000000002B7EE0 string=0x00000000002B7EE4 "@"
 *   insn=0x00000000002B7F14 string=0x00000000002B7F70 "s"
 *   insn=0x00000000002B7F1C string=0x00000000002B7F20 "5"
 *   insn=0x00000000002B7F24 string=0x00000000002B7F28 ""
 *   insn=0x00000000002B7F34 string=0x00000000002B7F38 "\t@"
 *   insn=0x00000000002B7F44 string=0x00000000002B7F48 ""
 *   insn=0x00000000002B7F54 string=0x00000000002B7F58 "@"
 *   insn=0x00000000002B7FA0 string=0x00000000002B7FA4 "s"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GroundMeshComponent::Process(Caver::GroundMeshComponent *a1)
{
  __int64 v2; // x8
  _QWORD *v3; // x9
  unsigned __int64 v4; // x0
  __int64 v5; // x11
  _QWORD *v6; // x12
  __int64 v7; // x13
  __int64 v8; // x8
  _QWORD *v9; // x9
  const Caver::Mesh ***v10; // x19
  __int64 v11; // x11
  const Caver::Mesh ***v12; // x12
  __int64 v13; // x13
  const Caver::Mesh ***v14; // x23
  const Caver::Mesh ***v15; // x21
  int *v16; // x22
  int *v17; // x23
  unsigned __int64 v18; // x8
  __int64 v19; // x9
  __int64 v20; // x8
  unsigned __int64 v21; // x0
  __int64 v22; // x0
  void *v23; // x22
  __int64 v24; // x8
  __int64 v25; // x9
  int v26; // w25
  __int64 v27; // x26
  int *v28; // x23
  Caver::MeshBuilder *v29; // x24
  int v30; // w3
  const Caver::Mesh ***v31; // x21
  int *v32; // x23
  int *v33; // x24
  unsigned __int64 v34; // x8
  __int64 v35; // x9
  __int64 v36; // x8
  unsigned __int64 v37; // x0
  __int64 v38; // x0
  void *v39; // x23
  __int64 v40; // x8
  __int64 v41; // x9
  int v42; // w28
  __int64 v43; // x26
  int *v44; // x24
  Caver::MeshBuilder *v45; // x25
  int v46; // w3
  const Caver::Mesh ***v47; // x21
  const Caver::Mesh **v48; // x20
  __int64 v49; // x8
  __int64 v50; // x8
  const Caver::Mesh ***v51; // x20
  const Caver::Mesh **v52; // x19
  __int64 v53; // x8
  __int64 v54; // x8
  Caver::MeshBuilder *v56; // [xsp+20h] [xbp-90h]
  Caver::MeshBuilder *v57; // [xsp+20h] [xbp-90h]
  const Caver::Mesh ***v58; // [xsp+28h] [xbp-88h]
  const Caver::Mesh ***v59; // [xsp+40h] [xbp-70h]
  const Caver::Mesh ***v60; // [xsp+48h] [xbp-68h]

  _ReadStatusReg(TPIDR_EL0);
  v2 = *((_QWORD *)a1 + 14);
  v3 = (_QWORD *)*((_QWORD *)a1 + 15);
  v4 = (unsigned __int64)v3 - v2;
  if ( v3 != (_QWORD *)v2 )
  {
    if ( (unsigned __int64)(((__int64)v3 - v2) >> 4) >> 60 )
      sub_565294();
    v4 = operator new(v4);
    v2 = *((_QWORD *)a1 + 14);
    v3 = (_QWORD *)*((_QWORD *)a1 + 15);
  }
  v59 = (const Caver::Mesh ***)v4;
  if ( v3 != (_QWORD *)v2 )
  {
    v5 = -v2;
    v6 = (_QWORD *)v4;
    do
    {
      *v6 = *(_QWORD *)v2;
      v7 = *(_QWORD *)(v2 + 8);
      v6[1] = v7;
      if ( v7 )
        ++*(_QWORD *)(v7 + 8);
      v2 += 16;
      v6 += 2;
    }
    while ( (_QWORD *)v2 != v3 );
    v4 += (((unsigned __int64)v3 + v5 - 16) & 0xFFFFFFFFFFFFFFF0LL) + 16;
  }
  v60 = (const Caver::Mesh ***)v4;
  v8 = *((_QWORD *)a1 + 17);
  v9 = (_QWORD *)*((_QWORD *)a1 + 18);
  if ( v9 == (_QWORD *)v8 )
  {
    v10 = 0;
  }
  else
  {
    if ( (unsigned __int64)(((__int64)v9 - v8) >> 4) >> 60 )
      sub_565294();
    v10 = (const Caver::Mesh ***)operator new((unsigned __int64)v9 - v8);
    v8 = *((_QWORD *)a1 + 17);
    v9 = (_QWORD *)*((_QWORD *)a1 + 18);
  }
  v58 = v10;
  if ( v9 != (_QWORD *)v8 )
  {
    v11 = -v8;
    v12 = v10;
    do
    {
      *v12 = *(const Caver::Mesh ***)v8;
      v13 = *(_QWORD *)(v8 + 8);
      v12[1] = (const Caver::Mesh **)v13;
      if ( v13 )
        ++*(_QWORD *)(v13 + 8);
      v8 += 16;
      v12 += 2;
    }
    while ( (_QWORD *)v8 != v9 );
    v10 = (const Caver::Mesh ***)((char *)v10 + (((unsigned __int64)v9 + v11 - 16) & 0xFFFFFFFFFFFFFFF0LL) + 16);
  }
  Caver::GroundMeshComponent::RemoveAllMeshes(a1);
  v14 = v59;
  if ( v59 != v60 )
  {
    v15 = v59;
    do
    {
      v16 = (int *)operator new(0x58u);
      Caver::MeshBuilder::MeshBuilder((Caver::MeshBuilder *)v16);
      v56 = (Caver::MeshBuilder *)v16;
      Caver::MeshBuilder::InitWithMesh((Caver::MeshBuilder *)v16, **v15, 1);
      v17 = v16;
      v18 = v16[20];
      v19 = (v18 * (unsigned __int128)4uLL) >> 64;
      v20 = 4 * v18;
      if ( v19 )
        v21 = -1;
      else
        v21 = v20;
      v22 = operator new[](v21);
      v23 = (void *)v22;
      if ( v17[20] >= 1 )
      {
        v24 = 0;
        do
        {
          *(_DWORD *)(v22 + 4 * v24) = v24;
          v25 = v17[20];
          ++v24;
        }
        while ( v24 < v25 );
        if ( (int)v25 >= 1 )
        {
          v26 = 0;
          v27 = 0;
          v28 = (int *)v22;
          do
          {
            v29 = (Caver::MeshBuilder *)operator new(0x58u);
            Caver::MeshBuilder::MeshBuilder(v29);
            if ( v26 + *((_DWORD *)v56 + 20) >= 20 )
              v30 = 20;
            else
              v30 = v26 + *((_DWORD *)v56 + 20);
            Caver::MeshBuilder::InitWithMeshBuilderFaceSubset(v29, v56, v28, v30);
            Caver::MeshBuilder::GenerateMesh(v29);
            Caver::GroundMeshComponent::AddSurfaceMesh();
            boost::scoped_ptr<Caver::MeshBuilder>::~scoped_ptr();
            v27 += 20;
            v28 += 20;
            v26 -= 20;
          }
          while ( v27 < *((int *)v56 + 20) );
        }
      }
      operator delete[](v23);
      boost::scoped_ptr<Caver::MeshBuilder>::~scoped_ptr();
      v14 = v59;
      v15 += 2;
    }
    while ( v15 != v60 );
  }
  if ( v58 == v10 )
  {
LABEL_60:
    if ( !v10 )
      goto LABEL_62;
    goto LABEL_61;
  }
  v31 = v58;
  do
  {
    v32 = (int *)operator new(0x58u);
    Caver::MeshBuilder::MeshBuilder((Caver::MeshBuilder *)v32);
    v57 = (Caver::MeshBuilder *)v32;
    Caver::MeshBuilder::InitWithMesh((Caver::MeshBuilder *)v32, **v31, 1);
    v33 = v32;
    v34 = v32[20];
    v35 = (v34 * (unsigned __int128)4uLL) >> 64;
    v36 = 4 * v34;
    if ( v35 )
      v37 = -1;
    else
      v37 = v36;
    v38 = operator new[](v37);
    v39 = (void *)v38;
    if ( v33[20] >= 1 )
    {
      v40 = 0;
      do
      {
        *(_DWORD *)(v38 + 4 * v40) = v40;
        v41 = v33[20];
        ++v40;
      }
      while ( v40 < v41 );
      if ( (int)v41 >= 1 )
      {
        v42 = 0;
        v43 = 0;
        v44 = (int *)v38;
        do
        {
          v45 = (Caver::MeshBuilder *)operator new(0x58u);
          Caver::MeshBuilder::MeshBuilder(v45);
          if ( v42 + *((_DWORD *)v57 + 20) >= 20 )
            v46 = 20;
          else
            v46 = v42 + *((_DWORD *)v57 + 20);
          Caver::MeshBuilder::InitWithMeshBuilderFaceSubset(v45, v57, v44, v46);
          Caver::MeshBuilder::GenerateMesh(v45);
          Caver::GroundMeshComponent::AddFrontMesh();
          boost::scoped_ptr<Caver::MeshBuilder>::~scoped_ptr();
          v43 += 20;
          v44 += 20;
          v42 -= 20;
        }
        while ( v43 < *((int *)v57 + 20) );
      }
    }
    operator delete[](v39);
    boost::scoped_ptr<Caver::MeshBuilder>::~scoped_ptr();
    v31 += 2;
  }
  while ( v31 != v10 );
  if ( v58 == v10 )
  {
    v14 = v59;
    goto LABEL_60;
  }
  v14 = v59;
  v47 = v58;
  do
  {
    v48 = v47[1];
    if ( v48 )
    {
      v49 = (__int64)v48[1] - 1;
      v48[1] = (const Caver::Mesh *)v49;
      if ( !v49 )
      {
        (*((void (__fastcall **)(const Caver::Mesh **))*v48 + 2))(v48);
        v50 = (__int64)v48[2] - 1;
        v48[2] = (const Caver::Mesh *)v50;
        if ( !v50 )
          (*((void (__fastcall **)(const Caver::Mesh **))*v48 + 3))(v48);
      }
    }
    v47 += 2;
  }
  while ( v10 != v47 );
  v10 = v58;
  if ( v58 )
LABEL_61:
    operator delete(v10);
LABEL_62:
  if ( v14 != v60 )
  {
    v51 = v14;
    do
    {
      v52 = v51[1];
      if ( v52 )
      {
        v53 = (__int64)v52[1] - 1;
        v52[1] = (const Caver::Mesh *)v53;
        if ( !v53 )
        {
          (*((void (__fastcall **)(const Caver::Mesh **))*v52 + 2))(v52);
          v54 = (__int64)v52[2] - 1;
          v52[2] = (const Caver::Mesh *)v54;
          if ( !v54 )
            (*((void (__fastcall **)(const Caver::Mesh **))*v52 + 3))(v52);
        }
      }
      v51 += 2;
    }
    while ( v60 != v51 );
  }
  if ( v14 )
    operator delete(v14);
  return 1;
}

