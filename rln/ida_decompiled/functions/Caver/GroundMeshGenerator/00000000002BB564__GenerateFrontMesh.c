/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002BB564
 * Mangled: _ZN5Caver19GroundMeshGenerator17GenerateFrontMeshEv
 * Demangled: Caver::GroundMeshGenerator::GenerateFrontMesh(void)
 *
 * Callers: 1
 *   0x00000000001FD800  Caver::GroundMeshGenerator::GenerateFrontMesh(void)
 *
 * Callees: 11
 *   0x00000000001F44E0  Caver::MeshBuilder::GenerateMesh(void)
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F5150  Caver::TriangulatePolygon(Caver::Vector2 const*,int,ushort *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6B80  Caver::MeshBuilder::AddVertex(Caver::MeshBuilder::Vertex const&)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001FF490  Caver::TextureMapping::TexCoordForPosition(Caver::Vector3 const&)
 *   0x0000000000200330  Caver::Vector3::Normalize(void)
 *   0x0000000000202FF0  Caver::GroundMeshGenerator::InitializeMeshBuilder(bool)
 *   0x00000000002BB87C  std::vector<Caver::MeshBuilder::Vertex,std::allocator<Caver::MeshBuilder::Vertex>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::MeshBuilder::Vertex*,std::vector<Caver::MeshBuilder::Vertex,std::allocator<Caver::MeshBuilder::Vertex>>>,Caver::MeshBuilder::Vertex const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 61
 *   insn=0x00000000002BB580 string=0x00000000002BB584 "W"
 *   insn=0x00000000002BB5A0 string=0x00000000002BB5A4 "v"
 *   insn=0x00000000002BB5AC string=0x00000000002BB5B0 ""
 *   insn=0x00000000002BB5B8 string=0x00000000002BB5BC "a"
 *   insn=0x00000000002BB5B8 string=0x00000000001F8570 "0'"
 *   insn=0x00000000002BB5BC string=0x00000000002BB5C0 "h"
 *   insn=0x00000000002BB5D0 string=0x00000000001F5150 "P'"
 *   insn=0x00000000002BB5FC string=0x00000000002BB600 "x"
 *   insn=0x00000000002BB604 string=0x00000000002BB608 "a"
 *   insn=0x00000000002BB608 string=0x00000000002BB60C "7"
 *   insn=0x00000000002BB60C string=0x00000000002BB610 "T"
 *   insn=0x00000000002BB610 string=0x00000000002BB614 "y"
 *   insn=0x00000000002BB61C string=0x00000000002BB620 "\t"
 *   insn=0x00000000002BB620 string=0x00000000002BB624 ""
 *   insn=0x00000000002BB624 string=0x00000000002BB628 ""
 *   insn=0x00000000002BB628 string=0x00000000002BB62C "@yi"
 *   insn=0x00000000002BB62C string=0x00000000002BB630 "\t"
 *   insn=0x00000000002BB630 string=0x00000000002BB634 "l"
 *   insn=0x00000000002BB634 string=0x00000000002BB638 "i"
 *   insn=0x00000000002BB638 string=0x00000000002BB63C ""
 *   insn=0x00000000002BB648 string=0x00000000002BB64C "n"
 *   insn=0x00000000002BB64C string=0x00000000002BB650 "Aym"
 *   insn=0x00000000002BB650 string=0x00000000002BB654 ""
 *   insn=0x00000000002BB654 string=0x00000000002BB658 "#"
 *   insn=0x00000000002BB65C string=0x00000000002BB660 "k"
 *   insn=0x00000000002BB660 string=0x00000000002BB664 ""
 *   insn=0x00000000002BB670 string=0x00000000002BB674 "\t"
 *   insn=0x00000000002BB674 string=0x00000000002BB678 "Fym"
 *   insn=0x00000000002BB678 string=0x00000000002BB67C "e"
 *   insn=0x00000000002BB684 string=0x00000000002BB688 ""
 *   insn=0x00000000002BB688 string=0x00000000002BB68C "'"
 *   insn=0x00000000002BB68C string=0x00000000002BB690 " 8 "
 *   insn=0x00000000002BB69C string=0x00000000002BB6A0 "'#"
 *   insn=0x00000000002BB6A0 string=0x00000000002BB6A4 "c$"
 *   insn=0x00000000002BB6A8 string=0x00000000002BB6AC "!""
 *   insn=0x00000000002BB6BC string=0x00000000002BB6C0 "B$"
 *   insn=0x00000000002BB6C4 string=0x00000000002BB6C8 "B8#"
 *   insn=0x00000000002BB6E8 string=0x00000000002BB6EC "j"
 *   insn=0x00000000002BB718 string=0x00000000002BB71C "?#"
 *   insn=0x00000000002BB71C string=0x00000000002BB720 " "
 *   insn=0x00000000002BB754 string=0x00000000002BB758 ""
 *   insn=0x00000000002BB764 string=0x00000000002BB768 "J"
 *   insn=0x00000000002BB76C string=0x00000000002BB770 "h"
 *   insn=0x00000000002BB780 string=0x00000000002BB784 "C"
 *   insn=0x00000000002BB788 string=0x00000000002BB78C "hC"
 *   insn=0x00000000002BB79C string=0x00000000002BB7A0 "<"
 *   insn=0x00000000002BB7B8 string=0x00000000001F6B80 "0'"
 *   insn=0x00000000002BB7D0 string=0x00000000002BB7D4 "Z"
 *   insn=0x00000000002BB7D4 string=0x00000000002BB7D8 "_"
 *   insn=0x00000000002BB7F0 string=0x00000000002BB7F4 ";"
 *   insn=0x00000000002BB7F4 string=0x00000000002BB7F8 ""
 *   insn=0x00000000002BB7F4 string=0x00000000001F44E0 "P'"
 *   insn=0x00000000002BB7F8 string=0x00000000002BB7FC ""
 *   insn=0x00000000002BB7FC string=0x00000000002BB800 ""
 *   insn=0x00000000002BB800 string=0x00000000002BB804 ""
 *   insn=0x00000000002BB808 string=0x00000000002BB80C "\t"
 *   insn=0x00000000002BB80C string=0x00000000002BB810 ")"
 *   insn=0x00000000002BB810 string=0x00000000002BB814 "\t"
 *   insn=0x00000000002BB81C string=0x00000000001F4F60 "P'"
 *   insn=0x00000000002BB828 string=0x00000000002BB82C "!"
 *   insn=0x00000000002BB850 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::GroundMeshGenerator::GenerateFrontMesh(Caver::TextureMapping **this@<X0>, _QWORD *a2@<X8>)
{
  Caver::TextureMapping *v4; // x19
  __int64 v5; // x22
  int v6; // w20
  unsigned __int64 v7; // x0
  __int64 v8; // x0
  const Caver::Vector2 *v9; // x1
  Caver *v10; // x8
  unsigned __int16 *v11; // x19
  unsigned __int16 *v12; // x3
  __int64 v13; // x26
  Caver::MeshBuilder *v14; // x22
  unsigned __int16 *v15; // x24
  Caver::TextureMapping *v16; // x10
  __int64 v17; // x9
  __int64 v18; // x13
  __int64 v19; // x8
  float v20; // s0
  float *v21; // x11
  float v22; // w12
  _DWORD *v23; // x11
  float v24; // s1
  __int64 v25; // x13
  float v26; // s6
  float v27; // s0
  float v28; // s1
  Caver::TextureMapping *v29; // x0
  _QWORD *Mesh; // x0
  __int64 v31; // x8
  _QWORD *v32; // [xsp+8h] [xbp-198h]
  __int64 v33; // [xsp+30h] [xbp-170h] BYREF
  float v34; // [xsp+38h] [xbp-168h] BYREF
  float v35; // [xsp+3Ch] [xbp-164h]
  float v36; // [xsp+40h] [xbp-160h]
  __int64 v37; // [xsp+48h] [xbp-158h]
  float v38; // [xsp+50h] [xbp-150h]
  int v39; // [xsp+54h] [xbp-14Ch]
  float v40; // [xsp+58h] [xbp-148h]
  float v41; // [xsp+5Ch] [xbp-144h]
  float v42; // [xsp+60h] [xbp-140h]
  int v43; // [xsp+64h] [xbp-13Ch]
  __int128 v44; // [xsp+68h] [xbp-138h]
  __int128 v45; // [xsp+78h] [xbp-128h]
  int v46; // [xsp+88h] [xbp-118h]
  __int64 v47; // [xsp+90h] [xbp-110h]
  float v48; // [xsp+98h] [xbp-108h]
  int v49; // [xsp+9Ch] [xbp-104h]
  float v50; // [xsp+A0h] [xbp-100h]
  float v51; // [xsp+A4h] [xbp-FCh]
  float v52; // [xsp+A8h] [xbp-F8h]
  int v53; // [xsp+ACh] [xbp-F4h]
  __int128 v54; // [xsp+B0h] [xbp-F0h]
  __int128 v55; // [xsp+C0h] [xbp-E0h]
  int v56; // [xsp+D0h] [xbp-D0h]
  unsigned __int64 v57; // [xsp+D8h] [xbp-C8h]
  float v58; // [xsp+E0h] [xbp-C0h]
  int v59; // [xsp+E4h] [xbp-BCh]
  float v60; // [xsp+E8h] [xbp-B8h]
  float v61; // [xsp+ECh] [xbp-B4h]
  __int64 v62; // [xsp+F0h] [xbp-B0h]
  _DWORD v63[9]; // [xsp+F8h] [xbp-A8h] BYREF
  unsigned __int64 v64; // [xsp+120h] [xbp-80h] BYREF
  float v65; // [xsp+128h] [xbp-78h]
  __int64 v66; // [xsp+12Ch] [xbp-74h] BYREF
  float v67; // [xsp+134h] [xbp-6Ch]
  __int64 v68; // [xsp+138h] [xbp-68h] BYREF
  float v69; // [xsp+140h] [xbp-60h]

  _ReadStatusReg(TPIDR_EL0);
  Caver::GroundMeshGenerator::InitializeMeshBuilder((Caver::GroundMeshGenerator *)this);
  v4 = *this;
  v5 = *(int *)*this;
  v6 = v5 - 2;
  if ( __CFADD__(3 * (v5 - 2), 3 * (v5 - 2)) )
    v7 = -1;
  else
    v7 = 6 * (v5 - 2);
  v8 = operator new[](v7);
  v9 = (const Caver::Vector2 *)*(unsigned int *)v4;
  v10 = (Caver *)*((_QWORD *)v4 + 1);
  v11 = (unsigned __int16 *)v8;
  Caver::TriangulatePolygon(v10, v9, v8, v12);
  if ( (int)v5 <= 2 )
  {
    v14 = (Caver::MeshBuilder *)(this + 4);
  }
  else
  {
    v32 = a2;
    v13 = 0;
    v14 = (Caver::MeshBuilder *)(this + 4);
    v15 = v11 + 2;
    do
    {
      v16 = this[1];
      v17 = *(v15 - 2);
      v18 = *(v15 - 1);
      v19 = *((_QWORD *)*this + 1);
      v20 = *((float *)v16 + v17);
      v21 = (float *)(v19 + 8 * v17);
      v22 = *v21;
      *(float *)&v17 = v21[1];
      v23 = (_DWORD *)(v19 + 8 * v18);
      v65 = v20;
      v64 = __PAIR64__(v17, LODWORD(v22));
      v24 = *((float *)v16 + v18);
      v25 = *v15;
      LODWORD(v66) = *v23;
      LODWORD(v23) = v23[1];
      v67 = v24;
      HIDWORD(v66) = (_DWORD)v23;
      v26 = *((float *)v16 + v25);
      v68 = *(_QWORD *)(v19 + 8 * v25);
      v27 = v24 - v20;
      v28 = v26 - v24;
      v69 = v26;
      v34 = (float)(v28 * (float)(*(float *)&v23 - *(float *)&v17))
          - (float)(v27 * (float)(*((float *)&v68 + 1) - *(float *)&v23));
      v35 = (float)(v27 * (float)(*(float *)&v68 - *(float *)&v66)) - (float)(v28 * (float)(*(float *)&v66 - v22));
      v36 = (float)((float)(*(float *)&v66 - v22) * (float)(*((float *)&v68 + 1) - *(float *)&v23))
          - (float)((float)(*(float *)&v23 - *(float *)&v17) * (float)(*(float *)&v68 - *(float *)&v66));
      Caver::Vector3::Normalize((Caver::Vector3 *)&v34);
      memset(v63, 0, sizeof(v63));
      v56 = 0;
      v54 = 0u;
      v55 = 0u;
      v57 = v64;
      v58 = v65;
      v59 = 0;
      v47 = v66;
      v46 = 0;
      v44 = 0u;
      v45 = 0u;
      v48 = v67;
      v49 = 0;
      v37 = v68;
      v38 = v69;
      v39 = 0;
      v60 = v34;
      v61 = v35;
      v50 = v34;
      v51 = v35;
      v62 = LODWORD(v36);
      v52 = v36;
      v53 = 0;
      v40 = v34;
      v41 = v35;
      v42 = v36;
      v43 = 0;
      v29 = this[3];
      if ( v29 && *(_QWORD *)v29 )
      {
        Caver::TextureMapping::TexCoordForPosition(&v33, v29, (const Caver::Vector3 *)&v64);
        *(_QWORD *)&v63[1] = v33;
        *(_QWORD *)&v63[3] = 0;
        Caver::TextureMapping::TexCoordForPosition(&v33, this[3], (const Caver::Vector3 *)&v66);
        *(_QWORD *)((char *)&v54 + 4) = v33;
        HIDWORD(v54) = 0;
        LODWORD(v55) = 0;
        Caver::TextureMapping::TexCoordForPosition(&v33, this[3], (const Caver::Vector3 *)&v68);
        HIDWORD(v44) = 0;
        LODWORD(v45) = 0;
        *(_QWORD *)((char *)&v44 + 4) = v33;
      }
      Caver::MeshBuilder::AddVertex();
      Caver::MeshBuilder::AddVertex();
      Caver::MeshBuilder::AddVertex();
      ++v13;
      v15 += 3;
    }
    while ( v13 < v6 );
    a2 = v32;
  }
  Mesh = (_QWORD *)Caver::MeshBuilder::GenerateMesh(v14);
  *a2 = *Mesh;
  v31 = Mesh[1];
  a2[1] = v31;
  if ( v31 )
    ++*(_QWORD *)(v31 + 8);
  operator delete[](v11);
}

