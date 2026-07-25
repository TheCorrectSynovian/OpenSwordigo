/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000446A58
 * Mangled: _ZN5Caver11MeshBuilder20InitWithMeshInstanceEPNS_12MeshInstanceEb
 * Demangled: Caver::MeshBuilder::InitWithMeshInstance(Caver::MeshInstance *,bool)
 *
 * Callers: 1
 *   0x0000000000203DA0  Caver::MeshBuilder::InitWithMeshInstance(Caver::MeshInstance *,bool)
 *
 * Callees: 5
 *   0x00000000001F57C0  std::vector<int,std::allocator<int>>::_M_fill_insert(__gnu_cxx::__normal_iterator<int *,std::vector<int,std::allocator<int>>>,ulong,int const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FBC40  .memset
 *   0x00000000001FC5E0  std::vector<Caver::MeshBuilder::Vertex,std::allocator<Caver::MeshBuilder::Vertex>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Caver::MeshBuilder::Vertex*,std::vector<Caver::MeshBuilder::Vertex,std::allocator<Caver::MeshBuilder::Vertex>>>,ulong,Caver::MeshBuilder::Vertex const&)
 *   0x0000000000202C80  Caver::MeshBuilder::InitWithMesh(Caver::Mesh const&,bool)
 *
 * Referenced strings: 146
 *   insn=0x0000000000446A70 string=0x0000000000446A74 "W"
 *   insn=0x0000000000446A94 string=0x0000000000446A98 "z"
 *   insn=0x0000000000446A9C string=0x0000000000446AA0 "h"
 *   insn=0x0000000000446AB0 string=0x0000000000446AB4 "x"
 *   insn=0x0000000000446AB8 string=0x0000000000446ABC "a"
 *   insn=0x0000000000446ABC string=0x00000000001FBC40 "0'"
 *   insn=0x0000000000446AD0 string=0x0000000000446AD4 ")"
 *   insn=0x0000000000446AD4 string=0x0000000000446AD8 ")"
 *   insn=0x0000000000446AD8 string=0x0000000000446ADC ")}\n"
 *   insn=0x0000000000446ADC string=0x0000000000446AE0 "?"
 *   insn=0x0000000000446AF4 string=0x00000000001FC5E0 "0'"
 *   insn=0x0000000000446AF8 string=0x0000000000446B0C "h&@"
 *   insn=0x0000000000446B00 string=0x0000000000446B04 "#\t"
 *   insn=0x0000000000446B14 string=0x0000000000446C04 "h>@"
 *   insn=0x0000000000446B24 string=0x0000000000446B28 ")"
 *   insn=0x0000000000446B34 string=0x0000000000446B38 "_"
 *   insn=0x0000000000446B38 string=0x0000000000446B3C "K"
 *   insn=0x0000000000446B3C string=0x0000000000446B40 ",\t@"
 *   insn=0x0000000000446B40 string=0x0000000000446B44 "-"
 *   insn=0x0000000000446B5C string=0x0000000000446B60 "1"
 *   insn=0x0000000000446B5C string=0x0000000000446BEC "1\t@"
 *   insn=0x0000000000446B60 string=0x0000000000446B64 "?"
 *   insn=0x0000000000446B64 string=0x0000000000446B68 "+"
 *   insn=0x0000000000446B68 string=0x0000000000446B6C "?""
 *   insn=0x0000000000446B6C string=0x0000000000446B70 "b"
 *   insn=0x0000000000446B70 string=0x0000000000446B7C " "
 *   insn=0x0000000000446B78 string=0x0000000000446BD4 "@"
 *   insn=0x0000000000446B7C string=0x0000000000446B80 "r!"
 *   insn=0x0000000000446B84 string=0x0000000000446B88 "?"
 *   insn=0x0000000000446B8C string=0x0000000000446B90 "R"
 *   insn=0x0000000000446B8C string=0x0000000000446BA4 "2"
 *   insn=0x0000000000446B94 string=0x0000000000446B98 "b"
 *   insn=0x0000000000446B9C string=0x0000000000446BA0 ""
 *   insn=0x0000000000446BB0 string=0x0000000000446BB4 "@"
 *   insn=0x0000000000446BB8 string=0x0000000000446BBC "! "
 *   insn=0x0000000000446BC0 string=0x0000000000446BC4 "@"
 *   insn=0x0000000000446BC4 string=0x0000000000446BC8 "A"
 *   insn=0x0000000000446BC8 string=0x0000000000446BCC "_"
 *   insn=0x0000000000446BD8 string=0x0000000000446BDC "R"
 *   insn=0x0000000000446BDC string=0x0000000000446BE0 "?"
 *   insn=0x0000000000446BE4 string=0x0000000000446BE8 "a"
 *   insn=0x0000000000446BEC string=0x0000000000446BF0 "k"
 *   insn=0x0000000000446C0C string=0x0000000000446D08 "h^@"
 *   insn=0x0000000000446C1C string=0x0000000000446C20 ")"
 *   insn=0x0000000000446C2C string=0x0000000000446C30 "_"
 *   insn=0x0000000000446C34 string=0x0000000000446C38 "-\t@"
 *   insn=0x0000000000446C38 string=0x0000000000446C3C "."
 *   insn=0x0000000000446C58 string=0x0000000000446C5C "2"
 *   insn=0x0000000000446C58 string=0x0000000000446CEC "2\t@"
 *   insn=0x0000000000446C5C string=0x0000000000446C60 "_"
 *   insn=0x0000000000446C60 string=0x0000000000446C64 "K"
 *   insn=0x0000000000446C64 string=0x0000000000446C68 "_""
 *   insn=0x0000000000446C68 string=0x0000000000446C6C "b"
 *   insn=0x0000000000446C6C string=0x0000000000446C78 "a!"
 *   insn=0x0000000000446C78 string=0x0000000000446C7C "@"
 *   insn=0x0000000000446C7C string=0x0000000000446C80 "!@"
 *   insn=0x0000000000446C84 string=0x0000000000446C88 "_"
 *   insn=0x0000000000446C8C string=0x0000000000446C90 " "
 *   insn=0x0000000000446C8C string=0x0000000000446CA4 "@"
 *   insn=0x0000000000446C94 string=0x0000000000446C98 "b"
 *   insn=0x0000000000446C9C string=0x0000000000446CA0 ""
 *   insn=0x0000000000446CB0 string=0x0000000000446CB4 " "
 *   insn=0x0000000000446CB4 string=0x0000000000446CB8 "!"
 *   insn=0x0000000000446CB8 string=0x0000000000446CBC "B "
 *   insn=0x0000000000446CBC string=0x0000000000446CC0 "`"
 *   insn=0x0000000000446CC0 string=0x0000000000446CC4 "c"
 *   insn=0x0000000000446CC4 string=0x0000000000446CC8 "a"
 *   insn=0x0000000000446CDC string=0x0000000000446CE0 "_"
 *   insn=0x0000000000446CE4 string=0x0000000000446CE8 "a"
 *   insn=0x0000000000446CEC string=0x0000000000446CF0 "k"
 *   insn=0x0000000000446D0C string=0x0000000000446D10 "K"
 *   insn=0x0000000000446D10 string=0x0000000000446D98 "hB"
 *   insn=0x0000000000446D20 string=0x0000000000446D24 "a"
 *   insn=0x0000000000446D30 string=0x0000000000446D34 "?"
 *   insn=0x0000000000446D34 string=0x0000000000446D38 ""
 *   insn=0x0000000000446D38 string=0x0000000000446D3C "\t@"
 *   insn=0x0000000000446D44 string=0x0000000000446D48 "-"
 *   insn=0x0000000000446D50 string=0x0000000000446D54 "a"
 *   insn=0x0000000000446D5C string=0x0000000000446D60 ""
 *   insn=0x0000000000446D64 string=0x0000000000446D68 "oin8"
 *   insn=0x0000000000446D78 string=0x0000000000446D7C "k"
 *   insn=0x0000000000446D80 string=0x0000000000446D84 "J"
 *   insn=0x0000000000446D84 string=0x0000000000446D88 "_"
 *   insn=0x0000000000446D8C string=0x0000000000446D90 "k"
 *   insn=0x0000000000446DA0 string=0x0000000000446ED0 "h"
 *   insn=0x0000000000446DB8 string=0x0000000000446DBC "o"
 *   insn=0x0000000000446DC4 string=0x0000000000446DC8 "l"
 *   insn=0x0000000000446DCC string=0x0000000000446DD0 " B"
 *   insn=0x0000000000446DD4 string=0x0000000000446DD8 "?"
 *   insn=0x0000000000446DD8 string=0x0000000000446DDC "+"
 *   insn=0x0000000000446DDC string=0x0000000000446EC0 ")"
 *   insn=0x0000000000446DE0 string=0x0000000000446DE4 "b"
 *   insn=0x0000000000446DE8 string=0x0000000000446DEC "B"
 *   insn=0x0000000000446DEC string=0x0000000000446DF0 "$"
 *   insn=0x0000000000446E04 string=0x0000000000446E08 "?"
 *   insn=0x0000000000446E0C string=0x0000000000446E10 "f"
 *   insn=0x0000000000446E14 string=0x0000000000446E18 "k"
 *   insn=0x0000000000446E1C string=0x0000000000446E20 "b"
 *   insn=0x0000000000446E20 string=0x0000000000446E2C "V."
 *   insn=0x0000000000446E4C string=0x0000000000446E50 "b"
 *   insn=0x0000000000446E54 string=0x0000000000446E58 ""
 *   insn=0x0000000000446E74 string=0x0000000000446E78 " "
 *   insn=0x0000000000446E78 string=0x0000000000446E7C "9"
 *   insn=0x0000000000446E7C string=0x0000000000446E80 "a"
 *   insn=0x0000000000446E98 string=0x0000000000446E9C "Xh6"
 *   insn=0x0000000000446E9C string=0x0000000000446EA0 "a"
 *   insn=0x0000000000446EA4 string=0x0000000000446EA8 "R"
 *   insn=0x0000000000446EA8 string=0x0000000000446EAC "B"
 *   insn=0x0000000000446EAC string=0x0000000000446EB0 "_"
 *   insn=0x0000000000446EB8 string=0x0000000000446EBC "a"
 *   insn=0x0000000000446EC0 string=0x0000000000446EC4 "?"
 *   insn=0x0000000000446ED4 string=0x0000000000446ED8 "-"
 *   insn=0x0000000000446ED8 string=0x0000000000446EDC "i"
 *   insn=0x0000000000446EDC string=0x0000000000446EE0 "h"
 *   insn=0x0000000000446EE0 string=0x0000000000446EE4 "?"
 *   insn=0x0000000000446EE8 string=0x0000000000446EEC "I"
 *   insn=0x0000000000446EE8 string=0x0000000000446F00 ""
 *   insn=0x0000000000446EEC string=0x0000000000446EF0 ")"
 *   insn=0x0000000000446EF0 string=0x0000000000446EF4 ")y"
 *   insn=0x0000000000446EF4 string=0x0000000000446EF8 "("
 *   insn=0x0000000000446F10 string=0x0000000000446F14 "\n}@"
 *   insn=0x0000000000446F18 string=0x0000000000446F1C "+"
 *   insn=0x0000000000446F1C string=0x0000000000446F20 "k"
 *   insn=0x0000000000446F24 string=0x0000000000446F28 """
 *   insn=0x0000000000446F28 string=0x0000000000446F2C "B"
 *   insn=0x0000000000446F28 string=0x0000000000446F4C "i"
 *   insn=0x0000000000446F34 string=0x0000000000446F38 """
 *   insn=0x0000000000446F38 string=0x00000000001F57C0 "P'"
 *   insn=0x0000000000446F4C string=0x0000000000446F50 ")\t\n"
 *   insn=0x0000000000446F58 string=0x0000000000446F5C ""
 *   insn=0x0000000000446F60 string=0x0000000000446F64 "k"
 *   insn=0x0000000000446F64 string=0x0000000000446F68 "l\n@"
 *   insn=0x0000000000446F6C string=0x0000000000446F70 "m"
 *   insn=0x0000000000446F74 string=0x0000000000446F78 "a"
 *   insn=0x0000000000446F78 string=0x0000000000446F7C "n"
 *   insn=0x0000000000446F78 string=0x0000000000446FA4 "n"
 *   insn=0x0000000000446F80 string=0x0000000000446F84 ""
 *   insn=0x0000000000446F88 string=0x0000000000446F8C "oynxOy."
 *   insn=0x0000000000446F8C string=0x0000000000446F90 "Oy."
 *   insn=0x0000000000446F90 string=0x0000000000446F94 "o"
 *   insn=0x0000000000446F9C string=0x0000000000446FA0 "k"
 *   insn=0x0000000000446FA4 string=0x0000000000446FA8 ")"
 *   insn=0x0000000000446FA8 string=0x0000000000446FAC "?"
 *   insn=0x0000000000446FAC string=0x0000000000446FB0 "J"
 *   insn=0x0000000000446FB0 string=0x0000000000446FB4 "k"
 *   insn=0x0000000000446FE8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall Caver::MeshBuilder::InitWithMeshInstance(
        Caver::MeshBuilder *this,
        const Caver::Mesh **a2,
        char a3)
{
  const Caver::Mesh *v5; // x19
  unsigned __int64 result; // x0
  unsigned __int64 v8; // x24
  __int64 v9; // x8
  __int64 *v10; // x22
  unsigned __int64 v11; // x9
  __int64 v12; // x8
  Caver::MeshInstance *v13; // x9
  int v14; // w10
  unsigned __int64 v15; // x12
  int v16; // w13
  __int64 v17; // x11
  __int64 v18; // x16
  __int64 v19; // x17
  __int64 v20; // x18
  unsigned __int64 v21; // x18
  unsigned __int64 v22; // x1
  __int128 v23; // q0
  __int128 v24; // q1
  _OWORD *v25; // x2
  int v26; // w1
  __int64 v27; // x8
  Caver::MeshInstance *v28; // x9
  int v29; // w10
  unsigned __int64 v30; // x13
  int v31; // w14
  __int64 v32; // x11
  __int64 v33; // x12
  _OWORD *v34; // x15
  __int64 v35; // x18
  unsigned __int64 v36; // x1
  __int128 *v37; // x1
  unsigned __int64 v38; // x2
  _OWORD *v39; // x3
  __int128 v40; // q0
  __int128 v41; // q1
  __int64 v42; // x1
  int v43; // w2
  Caver::MeshInstance *v44; // x8
  int v45; // w9
  __int64 v46; // x11
  int v47; // w10
  __int64 v48; // x12
  __int64 v49; // x14
  __int64 v50; // x8
  __int64 v51; // x11
  int v52; // w12
  __int64 v53; // x9
  __int64 v54; // x15
  int v55; // w17
  __int64 v56; // x18
  __int64 v57; // x2
  __int64 v58; // x4
  int v59; // w1
  int *v60; // x3
  unsigned int *v61; // x4
  _OWORD *v62; // x5
  __int64 v63; // x6
  __int64 v64; // x7
  unsigned __int64 v65; // x22
  __int128 *v66; // x22
  unsigned __int64 v67; // x24
  _OWORD *v68; // x25
  __int128 v69; // q0
  __int128 v70; // q1
  __int64 v71; // x22
  int v72; // w24
  __int64 v73; // x9
  __int64 v74; // x10
  int v75; // w8
  int v76; // w8
  __int64 v77; // x9
  void *v78; // x1
  unsigned __int64 v79; // x11
  __int64 v80; // x10
  __int64 v81; // x11
  int v82; // w12
  int i; // w9
  __int64 v84; // x14
  _BYTE v85[72]; // [xsp+10h] [xbp-90h] BYREF
  __int64 v86; // [xsp+58h] [xbp-48h]

  v86 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = *a2;
  result = Caver::MeshBuilder::InitWithMesh(this, *a2, 0);
  if ( (a3 & 1) != 0 )
  {
    *((_DWORD *)this + 20) = *((_DWORD *)v5 + 1);
    v8 = *(int *)v5;
    *((_DWORD *)this + 4) = v8;
    result = (unsigned __int64)memset(v85, 0, 0x44u);
    v10 = (__int64 *)((char *)this + 24);
    v9 = *((_QWORD *)this + 3);
    v11 = 0xF0F0F0F0F0F0F0F1LL * ((*((_QWORD *)this + 4) - v9) >> 2);
    if ( v11 >= v8 )
    {
      if ( v11 > v8 )
        *((_QWORD *)this + 4) = v9 + 68 * v8;
    }
    else
    {
      result = std::vector<Caver::MeshBuilder::Vertex>::_M_fill_insert();
    }
    if ( *((int *)v5 + 9) >= 1 )
    {
      v12 = *v10;
      v13 = *((_BYTE *)a2 + 16) ? (const Caver::Mesh *)((char *)*a2 + 32) : (Caver::MeshInstance *)(a2 + 3);
      v14 = *((_DWORD *)this + 4);
      if ( v14 >= 1 )
      {
        v15 = *((_QWORD *)v13 + 2);
        v16 = *(_DWORD *)v13;
        v17 = 0;
        v18 = *v10;
        do
        {
          if ( v16 != 5126 )
            goto LABEL_23;
          v19 = *((int *)v13 + 1);
          if ( (int)v19 < 1 )
            goto LABEL_23;
          if ( (unsigned int)v19 >= 8 )
          {
            v21 = v12 + 68 * v17;
            if ( v15 + 4 * v19 <= v21 || v15 >= v21 + 4 * v19 )
            {
              v20 = v19 & 0x7FFFFFF8;
              result = 0;
              v22 = v19 & 0xFFFFFFFFFFFFFFF8LL;
              do
              {
                v23 = *(_OWORD *)(v15 + result);
                v24 = *(_OWORD *)(v15 + result + 16);
                v25 = (_OWORD *)(v18 + result);
                v22 -= 8LL;
                result += 32LL;
                *v25 = v23;
                v25[1] = v24;
              }
              while ( v22 );
              if ( v20 == v19 )
                goto LABEL_23;
            }
            else
            {
              v20 = 0;
            }
          }
          else
          {
            v20 = 0;
          }
          do
          {
            result = 4 * v20;
            v26 = *(_DWORD *)(v15 + 4 * v20++);
            *(_DWORD *)(v18 + result) = v26;
          }
          while ( v19 != v20 );
LABEL_23:
          ++v17;
          v18 += 68;
          v15 += *((unsigned int *)v13 + 2);
        }
        while ( (_DWORD)v17 != v14 );
      }
    }
    if ( *((int *)v5 + 15) >= 1 )
    {
      v27 = *v10;
      v28 = *((_BYTE *)a2 + 16) ? (const Caver::Mesh *)((char *)*a2 + 56) : (Caver::MeshInstance *)(a2 + 6);
      v29 = *((_DWORD *)this + 4);
      if ( v29 >= 1 )
      {
        v30 = *((_QWORD *)v28 + 2);
        v31 = *(_DWORD *)v28;
        v32 = 0;
        v33 = v27 + 16;
        v34 = (_OWORD *)(v27 + 32);
        do
        {
          if ( v31 != 5126 )
            goto LABEL_41;
          v35 = *((int *)v28 + 1);
          if ( (int)v35 < 1 )
            goto LABEL_41;
          if ( (unsigned int)v35 >= 8 )
          {
            v36 = v27 + 68 * v32 + 16;
            if ( v30 + 4 * v35 <= v36 || v30 >= v36 + 4 * v35 )
            {
              result = v35 & 0x7FFFFFF8;
              v37 = (__int128 *)(v30 + 16);
              v38 = v35 & 0xFFFFFFFFFFFFFFF8LL;
              v39 = v34;
              do
              {
                v40 = *(v37 - 1);
                v41 = *v37;
                v37 += 2;
                v38 -= 8LL;
                *(v39 - 1) = v40;
                *v39 = v41;
                v39 += 2;
              }
              while ( v38 );
              if ( result == v35 )
                goto LABEL_41;
            }
            else
            {
              result = 0;
            }
          }
          else
          {
            result = 0;
          }
          do
          {
            v42 = 4 * result;
            v43 = *(_DWORD *)(v30 + 4 * result++);
            *(_DWORD *)(v33 + v42) = v43;
          }
          while ( v35 != result );
LABEL_41:
          ++v32;
          v33 += 68;
          v30 += *((unsigned int *)v28 + 2);
          v34 = (_OWORD *)((char *)v34 + 68);
        }
        while ( (_DWORD)v32 != v29 );
      }
    }
    if ( *((int *)v5 + 23) >= 1 )
    {
      v44 = *((_BYTE *)a2 + 16) ? (const Caver::Mesh *)((char *)*a2 + 88) : (Caver::MeshInstance *)(a2 + 10);
      v45 = *((_DWORD *)this + 4);
      if ( v45 >= 1 )
      {
        v46 = *((_QWORD *)v44 + 2);
        v47 = 0;
        v48 = *v10 + 32;
        do
        {
          if ( *(_DWORD *)v44 == 5121 && *((int *)v44 + 1) >= 1 )
          {
            v49 = 0;
            do
            {
              *(_BYTE *)(v48 + v49) = *(_BYTE *)(v46 + v49);
              ++v49;
            }
            while ( v49 < *((int *)v44 + 1) );
          }
          ++v47;
          v48 += 68;
          v46 += *((unsigned int *)v44 + 2);
        }
        while ( v47 != v45 );
      }
    }
    v50 = *((int *)v5 + 80);
    if ( (int)v50 >= 1 )
    {
      v51 = *v10;
      v52 = *((unsigned __int8 *)a2 + 16);
      v53 = 0;
      v54 = *v10 + 52;
      while ( 1 )
      {
        result = (unsigned __int64)(a2 + 9);
        if ( v52 )
          result = (unsigned __int64)*a2 + 80;
        v55 = *((_DWORD *)this + 4);
        if ( v55 >= 1 )
          break;
LABEL_71:
        ++v53;
        v54 += 16;
        if ( v53 >= v50 )
          goto LABEL_72;
      }
      v56 = 0;
      v57 = v51 + 16 * v53 + 36;
      v58 = *(_QWORD *)result + 24 * v53;
      result = *(_QWORD *)(v58 + 16);
      v59 = *(_DWORD *)v58;
      v60 = (int *)(v58 + 4);
      v61 = (unsigned int *)(v58 + 8);
      v62 = (_OWORD *)v54;
      while ( 1 )
      {
        if ( v59 != 5126 )
          goto LABEL_70;
        v63 = *v60;
        if ( (int)v63 < 1 )
          goto LABEL_70;
        if ( (unsigned int)v63 >= 8 )
        {
          v65 = v51 + 68 * v56 + 16 * v53 + 36;
          if ( result + 4 * v63 <= v65 || result >= v65 + 4 * v63 )
          {
            v64 = v63 & 0x7FFFFFF8;
            v66 = (__int128 *)(result + 16);
            v67 = v63 & 0xFFFFFFFFFFFFFFF8LL;
            v68 = v62;
            do
            {
              v69 = *(v66 - 1);
              v70 = *v66;
              v66 += 2;
              v67 -= 8LL;
              *(v68 - 1) = v69;
              *v68 = v70;
              v68 += 2;
            }
            while ( v67 );
            if ( v64 == v63 )
              goto LABEL_70;
          }
          else
          {
            v64 = 0;
          }
        }
        else
        {
          v64 = 0;
        }
        do
        {
          v71 = 4 * v64;
          v72 = *(_DWORD *)(result + 4 * v64++);
          *(_DWORD *)(v57 + v71) = v72;
        }
        while ( v63 != v64 );
LABEL_70:
        ++v56;
        v57 += 68;
        result += *v61;
        v62 = (_OWORD *)((char *)v62 + 68);
        if ( (_DWORD)v56 == v55 )
          goto LABEL_71;
      }
    }
LABEL_72:
    if ( *((int *)v5 + 3) > 0 )
    {
      v73 = *((_QWORD *)v5 + 37);
      v74 = *((_QWORD *)v5 + 38);
      v75 = *((_DWORD *)v5 + 1);
      if ( v73 == v74 )
        v76 = 3 * v75;
      else
        v76 = (((unsigned __int64)(v74 - v73) >> 1) & 0xFFFFFFFE) + v75;
      *((_DWORD *)this + 12) = v76;
      v77 = *((_QWORD *)this + 7);
      v78 = (void *)*((_QWORD *)this + 8);
      v79 = ((__int64)v78 - v77) >> 2;
      if ( v79 < v76 )
      {
        result = std::vector<int>::_M_fill_insert((int)this + 56, v78);
        v76 = *((_DWORD *)this + 12);
        if ( v76 < 1 )
          return result;
        goto LABEL_82;
      }
      if ( v79 > v76 )
        *((_QWORD *)this + 8) = v77 + 4LL * v76;
      if ( v76 >= 1 )
      {
LABEL_82:
        v80 = *((_QWORD *)this + 7);
        v81 = *((_QWORD *)v5 + 3);
        v82 = *((_DWORD *)v5 + 2);
        for ( i = 0; i != v76; ++i )
        {
          if ( v82 == 5123 && *((int *)v5 + 3) >= 1 )
          {
            v84 = 0;
            do
            {
              *(_DWORD *)(v80 + 4 * v84) = *(unsigned __int16 *)(v81 + 2 * v84);
              ++v84;
            }
            while ( v84 < *((int *)v5 + 3) );
          }
          v80 += 4;
          v81 += *((unsigned int *)v5 + 4);
        }
      }
    }
  }
  return result;
}

